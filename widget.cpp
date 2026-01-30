#include "widget.h"
#include "./ui_widget.h"
#include "Calculate.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QFont font("仿宋",14,10);
    ui->textBrowser->setFont(font);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::getCal(){
    ui->textBrowser->setPlainText(this->cal);
}

void Widget::on_num1Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "1";
    getCal();
}
void Widget::on_num2Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "2";
    getCal();
}
void Widget::on_num3Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "3";
    getCal();
}
void Widget::on_num4Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "4";
    getCal();
}
void Widget::on_num5Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "5";
    getCal();
}
void Widget::on_num6Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "6";
    getCal();
}
void Widget::on_num7Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "7";
    getCal();
}
void Widget::on_num8Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "8";
    getCal();
}
void Widget::on_num9Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "9";
    getCal();
}
void Widget::on_num0Button_clicked(){
    if( AfterIs ) cal = "";
    AfterIs = false;
    cal = cal + "0";
    getCal();
}
void Widget::on_symaddButton_clicked(){
    AfterIs = false;
    cal = cal + "+";
    getCal();
}
void Widget::on_symclearButton_clicked(){
    cal = "";
    getCal();
}
void Widget::on_symcutButton_clicked(){
    AfterIs = false;
    cal = cal + "-";
    getCal();
}
void Widget::on_symdelButton_clicked(){
    if( cal.size()==0 ) return;
    cal.erase(cal.end()-1);
    getCal();
    return;
}
void Widget::on_symmultButton_clicked(){
    AfterIs = false;
    cal = cal + "*";
    getCal();
}
void Widget::on_symlastButton_clicked(){
    cal = cal + ")";
    getCal();
}
void Widget::on_symdotButton_clicked(){
    cal = cal + ".";
    getCal();
}
void Widget::on_symisButton_clicked(){
    CalStack Cs;
    cal = Cs.CalString(cal);
    getCal();
    AfterIs = true;
}
void Widget::on_symexpButton_clicked(){
    AfterIs = false;
    cal = cal + "/";
    getCal();
}
void Widget::on_symfrontButton_clicked(){
    cal = cal + "(";
    getCal();
}

