/********************************************************************************
** Form generated from reading UI file 'graphwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QHBoxLayout *horizontalLayout_2;
    QCustomPlot *graphPlot;
    QWidget *holdersHistoryWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QComboBox *holdersComboBox;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName(QStringLiteral("GraphWindow"));
        GraphWindow->resize(824, 437);
        horizontalLayout_2 = new QHBoxLayout(GraphWindow);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        graphPlot = new QCustomPlot(GraphWindow);
        graphPlot->setObjectName(QStringLiteral("graphPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphPlot->sizePolicy().hasHeightForWidth());
        graphPlot->setSizePolicy(sizePolicy);
        graphPlot->setMinimumSize(QSize(500, 200));

        horizontalLayout_2->addWidget(graphPlot);

        holdersHistoryWidget = new QWidget(GraphWindow);
        holdersHistoryWidget->setObjectName(QStringLiteral("holdersHistoryWidget"));
        holdersHistoryWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(holdersHistoryWidget->sizePolicy().hasHeightForWidth());
        holdersHistoryWidget->setSizePolicy(sizePolicy1);
        holdersHistoryWidget->setMinimumSize(QSize(300, 0));
        verticalLayout = new QVBoxLayout(holdersHistoryWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        holdersComboBox = new QComboBox(holdersHistoryWidget);
        holdersComboBox->setObjectName(QStringLiteral("holdersComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, holdersComboBox);

        label = new QLabel(holdersHistoryWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);


        verticalLayout->addLayout(formLayout_2);

        plainTextEdit = new QPlainTextEdit(holdersHistoryWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(true);
        plainTextEdit->setUndoRedoEnabled(false);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setBackgroundVisible(false);

        verticalLayout->addWidget(plainTextEdit);


        horizontalLayout_2->addWidget(holdersHistoryWidget);


        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QDialog *GraphWindow)
    {
        GraphWindow->setWindowTitle(QApplication::translate("GraphWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GraphWindow", "\320\220\320\272\321\206\320\270\320\276\320\275\320\265\321\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
