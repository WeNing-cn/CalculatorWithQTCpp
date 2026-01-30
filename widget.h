#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    void getCal();
    ~Widget();

private slots:
    void on_num1Button_clicked();
    void on_num2Button_clicked();
    void on_num3Button_clicked();
    void on_num4Button_clicked();
    void on_num5Button_clicked();
    void on_num6Button_clicked();
    void on_num7Button_clicked();
    void on_num8Button_clicked();
    void on_num9Button_clicked();
    void on_num0Button_clicked();

    void on_symaddButton_clicked();

    void on_symclearButton_clicked();

    void on_symcutButton_clicked();

    void on_symdelButton_clicked();

    void on_symmultButton_clicked();

    void on_symlastButton_clicked();

    void on_symdotButton_clicked();

    void on_symisButton_clicked();

    void on_symexpButton_clicked();

    void on_symfrontButton_clicked();

private:
    QString cal = "";
    bool AfterIs = false;
    Ui::Widget *ui;
};
#endif // WIDGET_H
