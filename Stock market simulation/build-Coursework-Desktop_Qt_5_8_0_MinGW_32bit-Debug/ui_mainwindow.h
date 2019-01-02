/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *tableLabel;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *deleteButton;
    QPushButton *addCompanyButton;
    QPushButton *addHolderButton;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *daysLabel;
    QSpinBox *daysSpinBox;
    QLabel *moneyLabel;
    QSpinBox *moneySpinBox;
    QPushButton *beginButton;
    QPushButton *newAnalysisButton;
    QSpacerItem *verticalSpacer;
    QPushButton *companiesButton;
    QPushButton *holdersButton;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionCreate = new QAction(MainWindow);
        actionCreate->setObjectName(QStringLiteral("actionCreate"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableLabel = new QLabel(centralWidget);
        tableLabel->setObjectName(QStringLiteral("tableLabel"));

        verticalLayout->addWidget(tableLabel);

        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(200, 150));
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(deleteButton);

        addCompanyButton = new QPushButton(centralWidget);
        addCompanyButton->setObjectName(QStringLiteral("addCompanyButton"));
        addCompanyButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(addCompanyButton);

        addHolderButton = new QPushButton(centralWidget);
        addHolderButton->setObjectName(QStringLiteral("addHolderButton"));
        addHolderButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(addHolderButton);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        daysLabel = new QLabel(centralWidget);
        daysLabel->setObjectName(QStringLiteral("daysLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, daysLabel);

        daysSpinBox = new QSpinBox(centralWidget);
        daysSpinBox->setObjectName(QStringLiteral("daysSpinBox"));
        daysSpinBox->setMinimum(1);
        daysSpinBox->setMaximum(1000);
        daysSpinBox->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, daysSpinBox);

        moneyLabel = new QLabel(centralWidget);
        moneyLabel->setObjectName(QStringLiteral("moneyLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, moneyLabel);

        moneySpinBox = new QSpinBox(centralWidget);
        moneySpinBox->setObjectName(QStringLiteral("moneySpinBox"));
        moneySpinBox->setMinimum(1);
        moneySpinBox->setMaximum(10000000);
        moneySpinBox->setValue(1000);

        formLayout->setWidget(1, QFormLayout::FieldRole, moneySpinBox);


        verticalLayout_2->addLayout(formLayout);

        beginButton = new QPushButton(centralWidget);
        beginButton->setObjectName(QStringLiteral("beginButton"));

        verticalLayout_2->addWidget(beginButton);

        newAnalysisButton = new QPushButton(centralWidget);
        newAnalysisButton->setObjectName(QStringLiteral("newAnalysisButton"));

        verticalLayout_2->addWidget(newAnalysisButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        companiesButton = new QPushButton(centralWidget);
        companiesButton->setObjectName(QStringLiteral("companiesButton"));
        companiesButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(companiesButton);

        holdersButton = new QPushButton(centralWidget);
        holdersButton->setObjectName(QStringLiteral("holdersButton"));
        holdersButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(holdersButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 800, 20));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionCreate);
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267 \320\260\320\272\321\206\320\270\320\271", Q_NULLPTR));
        actionCreate->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\204\320\260\320\271\320\273...", Q_NULLPTR));
        actionCreate->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273...", Q_NULLPTR));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273...", Q_NULLPTR));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        actionSaveAs->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273 \320\272\320\260\320\272...", Q_NULLPTR));
        actionSaveAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", Q_NULLPTR));
        tableLabel->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\275\321\213\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        addCompanyButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\321\216", Q_NULLPTR));
        addHolderButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\260\320\272\321\206\320\270\320\276\320\275\320\265\321\200\320\260", Q_NULLPTR));
        daysLabel->setText(QApplication::translate("MainWindow", "\320\224\320\275\320\270 \321\201\320\270\320\274\321\203\320\273\321\217\321\206\320\270\320\270", Q_NULLPTR));
        moneyLabel->setText(QApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214\320\263\320\270 \321\203 \320\260\320\272\321\206\320\270\320\276\320\275\320\265\321\200\320\260:", Q_NULLPTR));
        beginButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\260\320\275\320\260\320\273\320\270\320\267", Q_NULLPTR));
        newAnalysisButton->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \320\260\320\275\320\260\320\273\320\270\320\267", Q_NULLPTR));
        companiesButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203 \320\260\320\272\321\206\320\270\320\271", Q_NULLPTR));
        holdersButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203 \320\260\320\272\321\206\320\270\320\276\320\275\320\265\321\200\320\276\320\262", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
