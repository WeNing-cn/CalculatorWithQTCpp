#include "calculate.h"
#include <iostream>
#include <climits>

CalStack::CalStack() : ptr(0) {
    // 初始化所有成员变量
    Stc.clear();
    Que.clear();
    CalStc.clear();
}

CalStack::~CalStack(){
}

// 计算表达式的值
QString CalStack::CalString(const QString & str){
    // 清空所有容器
    Stc.clear();
    Que.clear();
    CalStc.clear();
    ptr = 0;
    
    double num = 0;
    
    // 遍历表达式字符串
    for( int i = 0; i < str.size() ; i++ ){
        QChar ch = str[i];
        
        if( ch.isNumber() || ch == '.' ){
            // 处理数字和小数点
            num = toValue(str, i);
            i = ptr;
            Que.push_back(QString::number(num));
        }else if( ch == '-' && (i == 0 || !str[i-1].isNumber() && str[i-1] != ')' ) ){
            // 处理负数
            num = toValue(str, i);
            i = ptr;
            Que.push_back(QString::number(num));
        }else{
            // 处理运算符
            switch (ch.toLatin1()) {
                case '+' :
                case '-' :
                    // 处理加减运算符（优先级较低）
                    while( !Stc.isEmpty() ){
                        QChar top = Stc.top();
                        if( top == '(' ) break;
                        // 弹出所有优先级高于或等于加减的运算符
                        Que.push_back(Stc.pop());
                    }
                    Stc.push(ch);
                    break;
                    
                case '*' :
                case '/' :
                    // 处理乘除运算符（优先级较高）
                    while( !Stc.isEmpty() ){
                        QChar top = Stc.top();
                        if( top == '(' || top == '+' || top == '-' ) break;
                        // 弹出所有优先级高于或等于乘除的运算符
                        Que.push_back(Stc.pop());
                    }
                    Stc.push(ch);
                    break;
                    
                case '(' :
                    // 左括号直接入栈
                    Stc.push(ch);
                    break;
                    
                case ')' :
                    // 右括号，弹出所有运算符直到遇到左括号
                    while( !Stc.isEmpty() ){
                        QChar top = Stc.top();
                        if( top == '(' ){
                            Stc.pop();
                            break;
                        }
                        Que.push_back(Stc.pop());
                    }
                    break;
            }
        }
    }
    
    // 弹出栈中剩余的所有运算符
    while( !Stc.isEmpty() ){
        Que.push_back(Stc.pop());
    }
    
    // 计算后缀表达式
    while( !Que.isEmpty() ){
        QString qs = Que.head();
        bool isNumber = false;
        qs.toDouble(&isNumber);
        Que.pop_front();
        
        if( isNumber ){
            // 如果是数字，入栈
            CalStc.push(qs);
        }else{
            // 如果是运算符，弹出两个数进行计算
            if( CalStc.size() < 2 ){
                return "Error: Invalid expression";
            }
            
            double rightNum = CalStc.pop().toDouble();
            double leftNum = CalStc.pop().toDouble();
            QChar op = qs[0];
            double result = 0;
            
            switch( op.toLatin1() ){
                case '+' :
                    result = leftNum + rightNum;
                    break;
                case '-' :
                    result = leftNum - rightNum;
                    break;
                case '*' :
                    result = leftNum * rightNum;
                    break;
                case '/' :
                    if( rightNum == 0 ){
                        return "Error: Division by zero";
                    }
                    result = leftNum / rightNum;
                    break;
                default:
                    return "Error: Unknown operator";
            }
            
            CalStc.push(QString::number(result));
        }
    }
    
    if( CalStc.isEmpty() ){
        return "Error: Invalid expression";
    }
    
    return CalStc.pop();
}

// 将字符串中的数字部分转换为数值
double CalStack::toValue(const QString & str, int start){
    QChar chStart = str[start];
    int end = start + 1;
    int dotCount = 0;
    
    // 检查边界条件
    if( start < 0 || start >= str.size() ){
        ptr = start;
        return 0;
    }
    
    // 处理数字
    if( chStart.isNumber() ){
        while( end < str.size() ){
            QChar ch = str[end];
            if( ch.isNumber() ){
                end++;
            }else if( ch == '.' && dotCount == 0 ){
                dotCount = 1;
                end++;
            }else{
                break;
            }
        }
        ptr = end - 1;
        return str.sliced(start, end - start).toDouble();
    }
    // 处理小数点开头的情况
    else if( chStart == '.' ){
        while( end < str.size() ){
            QChar ch = str[end];
            if( ch.isNumber() ){
                end++;
            }else{
                break;
            }
        }
        ptr = end - 1;
        QString numStr = "0" + str.sliced(start, end - start);
        return numStr.toDouble();
    }
    // 处理负号开头的情况
    else if( chStart == '-' ){
        while( end < str.size() ){
            QChar ch = str[end];
            if( ch.isNumber() ){
                end++;
            }else if( ch == '.' && dotCount == 0 ){
                dotCount = 1;
                end++;
            }else{
                break;
            }
        }
        ptr = end - 1;
        return str.sliced(start, end - start).toDouble();
    }
    // 其他情况
    else{
        ptr = start;
        return 0;
    }
}

// 打印栈和队列的辅助函数
void CalStack::PrintStack_Queue(const QString & Qstr){
    std::cout << "Original: " << Qstr.toStdString() << std::endl;
    std::cout << "Symbol Stack: ";
    print(Stc);
    std::cout << std::endl;
    std::cout << "Output Queue: ";
    print(Que);
    std::cout << std::endl;
    std::cout << "Calculate Stack: ";
    print(CalStc);
    std::cout << std::endl;
}

