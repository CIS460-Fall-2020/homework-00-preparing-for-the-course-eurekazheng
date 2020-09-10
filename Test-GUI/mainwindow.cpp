#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked(bool)), ui->spinBox,
            SLOT(stepUp()));
    connect(ui->pushButton, SIGNAL(clicked(bool)), this,
            SLOT(slot_addItemToListWidget()));

    connect(ui->clearButton, SIGNAL(clicked(bool)), ui->listWidget,
            SLOT(slot_trigger()));
    connect(ui->listWidget, SIGNAL(sig_testSig(int)), ui->listWidget,
            SLOT(slot_testSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_addItemToListWidget() {
    QListWidgetItem* item = new QListWidgetItem(QString("NEW ITEM"));
    ui->listWidget->addItem(item);
}
