#ifndef CALCULATE_H
#define CALCULATE_H

#include <QStack>
#include <QQueue>
#include <QDebug>

class CalStack{
public:
    QStack<QChar> Stc;
    QQueue<QString> Que;
    QStack<QString> CalStc;
    int ptr; // 类成员变量，用于toValue函数中记录处理位置
    
    CalStack();
    ~CalStack();
    
    QString CalString(const QString & str);
    double toValue(const QString & str , int start);
    
private:
    // 打印栈和队列的辅助函数
    void PrintStack_Queue( const QString & Qstr );
    
    // 模板函数，用于打印各种容器
    template<class T>
    void print( T arr ){
        for( auto it = arr.begin() ; it != arr.end() ; ++it ){
            qDebug() << *it;
        }
    }
};

#endif // CALCULATE_H
