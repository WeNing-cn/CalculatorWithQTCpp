/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QPushButton *num3Button;
    QPushButton *num7Button;
    QPushButton *symaddButton;
    QPushButton *num6Button;
    QPushButton *num5Button;
    QPushButton *symmultButton;
    QPushButton *symexpButton;
    QPushButton *num1Button;
    QPushButton *num2Button;
    QPushButton *symcutButton;
    QPushButton *symisButton;
    QPushButton *num8Button;
    QPushButton *num9Button;
    QPushButton *symdotButton;
    QPushButton *num0Button;
    QPushButton *num4Button;
    QPushButton *symclearButton;
    QPushButton *symdelButton;
    QPushButton *symlastButton;
    QPushButton *symfrontButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(291, 201);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 10, 291, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        num3Button = new QPushButton(layoutWidget);
        num3Button->setObjectName("num3Button");

        gridLayout->addWidget(num3Button, 0, 2, 1, 1);

        num7Button = new QPushButton(layoutWidget);
        num7Button->setObjectName("num7Button");

        gridLayout->addWidget(num7Button, 2, 0, 1, 1);

        symaddButton = new QPushButton(layoutWidget);
        symaddButton->setObjectName("symaddButton");

        gridLayout->addWidget(symaddButton, 0, 3, 1, 1);

        num6Button = new QPushButton(layoutWidget);
        num6Button->setObjectName("num6Button");

        gridLayout->addWidget(num6Button, 1, 2, 1, 1);

        num5Button = new QPushButton(layoutWidget);
        num5Button->setObjectName("num5Button");

        gridLayout->addWidget(num5Button, 1, 1, 1, 1);

        symmultButton = new QPushButton(layoutWidget);
        symmultButton->setObjectName("symmultButton");

        gridLayout->addWidget(symmultButton, 2, 3, 1, 1);

        symexpButton = new QPushButton(layoutWidget);
        symexpButton->setObjectName("symexpButton");

        gridLayout->addWidget(symexpButton, 3, 3, 1, 1);

        num1Button = new QPushButton(layoutWidget);
        num1Button->setObjectName("num1Button");

        gridLayout->addWidget(num1Button, 0, 0, 1, 1);

        num2Button = new QPushButton(layoutWidget);
        num2Button->setObjectName("num2Button");

        gridLayout->addWidget(num2Button, 0, 1, 1, 1);

        symcutButton = new QPushButton(layoutWidget);
        symcutButton->setObjectName("symcutButton");

        gridLayout->addWidget(symcutButton, 1, 3, 1, 1);

        symisButton = new QPushButton(layoutWidget);
        symisButton->setObjectName("symisButton");

        gridLayout->addWidget(symisButton, 3, 2, 1, 1);

        num8Button = new QPushButton(layoutWidget);
        num8Button->setObjectName("num8Button");

        gridLayout->addWidget(num8Button, 2, 1, 1, 1);

        num9Button = new QPushButton(layoutWidget);
        num9Button->setObjectName("num9Button");

        gridLayout->addWidget(num9Button, 2, 2, 1, 1);

        symdotButton = new QPushButton(layoutWidget);
        symdotButton->setObjectName("symdotButton");
        symdotButton->setFlat(false);

        gridLayout->addWidget(symdotButton, 3, 1, 1, 1);

        num0Button = new QPushButton(layoutWidget);
        num0Button->setObjectName("num0Button");

        gridLayout->addWidget(num0Button, 3, 0, 1, 1);

        num4Button = new QPushButton(layoutWidget);
        num4Button->setObjectName("num4Button");

        gridLayout->addWidget(num4Button, 1, 0, 1, 1);

        symclearButton = new QPushButton(layoutWidget);
        symclearButton->setObjectName("symclearButton");

        gridLayout->addWidget(symclearButton, 0, 4, 1, 1);

        symdelButton = new QPushButton(layoutWidget);
        symdelButton->setObjectName("symdelButton");

        gridLayout->addWidget(symdelButton, 1, 4, 1, 1);

        symlastButton = new QPushButton(layoutWidget);
        symlastButton->setObjectName("symlastButton");

        gridLayout->addWidget(symlastButton, 2, 4, 1, 1);

        symfrontButton = new QPushButton(layoutWidget);
        symfrontButton->setObjectName("symfrontButton");

        gridLayout->addWidget(symfrontButton, 3, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        symdotButton->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        num3Button->setText(QCoreApplication::translate("Widget", "3", nullptr));
        num7Button->setText(QCoreApplication::translate("Widget", "7", nullptr));
        symaddButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        num6Button->setText(QCoreApplication::translate("Widget", "6", nullptr));
        num5Button->setText(QCoreApplication::translate("Widget", "5", nullptr));
        symmultButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        symexpButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        num1Button->setText(QCoreApplication::translate("Widget", "1", nullptr));
        num2Button->setText(QCoreApplication::translate("Widget", "2", nullptr));
        symcutButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        symisButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        num8Button->setText(QCoreApplication::translate("Widget", "8", nullptr));
        num9Button->setText(QCoreApplication::translate("Widget", "9", nullptr));
        symdotButton->setText(QCoreApplication::translate("Widget", ".", nullptr));
        num0Button->setText(QCoreApplication::translate("Widget", "0", nullptr));
        num4Button->setText(QCoreApplication::translate("Widget", "4", nullptr));
        symclearButton->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        symdelButton->setText(QCoreApplication::translate("Widget", "<---", nullptr));
        symlastButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        symfrontButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
