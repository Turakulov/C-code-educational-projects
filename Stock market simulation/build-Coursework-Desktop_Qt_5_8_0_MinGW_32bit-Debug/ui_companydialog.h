/********************************************************************************
** Form generated from reading UI file 'companydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANYDIALOG_H
#define UI_COMPANYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CompanyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *priceLabel;
    QSpinBox *priceSpinBox;
    QSpinBox *countSpinBox;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CompanyDialog)
    {
        if (CompanyDialog->objectName().isEmpty())
            CompanyDialog->setObjectName(QStringLiteral("CompanyDialog"));
        CompanyDialog->resize(300, 150);
        verticalLayout = new QVBoxLayout(CompanyDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nameLabel = new QLabel(CompanyDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(CompanyDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        priceLabel = new QLabel(CompanyDialog);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, priceLabel);

        priceSpinBox = new QSpinBox(CompanyDialog);
        priceSpinBox->setObjectName(QStringLiteral("priceSpinBox"));
        priceSpinBox->setMinimum(10);
        priceSpinBox->setMaximum(100000);
        priceSpinBox->setValue(100);

        formLayout->setWidget(1, QFormLayout::FieldRole, priceSpinBox);

        countSpinBox = new QSpinBox(CompanyDialog);
        countSpinBox->setObjectName(QStringLiteral("countSpinBox"));
        countSpinBox->setMinimum(1);
        countSpinBox->setMaximum(10000);
        countSpinBox->setValue(10);

        formLayout->setWidget(2, QFormLayout::FieldRole, countSpinBox);

        label = new QLabel(CompanyDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(CompanyDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(CompanyDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CompanyDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), CompanyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CompanyDialog);
    } // setupUi

    void retranslateUi(QDialog *CompanyDialog)
    {
        CompanyDialog->setWindowTitle(QApplication::translate("CompanyDialog", "\320\241\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\276 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("CompanyDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265: ", Q_NULLPTR));
        priceLabel->setText(QApplication::translate("CompanyDialog", "\320\246\320\265\320\275\320\260 \320\260\320\272\321\206\320\270\320\270:", Q_NULLPTR));
        label->setText(QApplication::translate("CompanyDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\260\320\272\321\206\320\270\320\271: ", Q_NULLPTR));
        okButton->setText(QApplication::translate("CompanyDialog", "\320\236\320\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("CompanyDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CompanyDialog: public Ui_CompanyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANYDIALOG_H
