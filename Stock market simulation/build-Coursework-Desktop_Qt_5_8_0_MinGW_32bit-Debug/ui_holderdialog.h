/********************************************************************************
** Form generated from reading UI file 'holderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOLDERDIALOG_H
#define UI_HOLDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HolderDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QCheckBox *analysisBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *HolderDialog)
    {
        if (HolderDialog->objectName().isEmpty())
            HolderDialog->setObjectName(QStringLiteral("HolderDialog"));
        HolderDialog->resize(300, 107);
        verticalLayout = new QVBoxLayout(HolderDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nameLabel = new QLabel(HolderDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(HolderDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);


        verticalLayout->addLayout(formLayout);

        analysisBox = new QCheckBox(HolderDialog);
        analysisBox->setObjectName(QStringLiteral("analysisBox"));

        verticalLayout->addWidget(analysisBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(HolderDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(HolderDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HolderDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), HolderDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HolderDialog);
    } // setupUi

    void retranslateUi(QDialog *HolderDialog)
    {
        HolderDialog->setWindowTitle(QApplication::translate("HolderDialog", "\320\241\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\276\320\261 \320\260\320\272\321\206\320\270\320\276\320\275\320\265\321\200\320\265", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("HolderDialog", "\320\230\320\274\321\217: ", Q_NULLPTR));
        analysisBox->setText(QApplication::translate("HolderDialog", "\320\220\320\272\321\206\320\270\320\276\320\275\320\265\321\200 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\321\202 \320\260\320\275\320\260\320\273\320\270\320\267 \320\260\320\272\321\206\320\270\320\271 ", Q_NULLPTR));
        okButton->setText(QApplication::translate("HolderDialog", "\320\236\320\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("HolderDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HolderDialog: public Ui_HolderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLDERDIALOG_H
