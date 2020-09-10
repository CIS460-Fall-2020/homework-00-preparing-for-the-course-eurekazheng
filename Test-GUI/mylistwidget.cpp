#include "mylistwidget.h"

MyListWidget::MyListWidget(QWidget *parent) : QListWidget(parent)
{

}

void MyListWidget::slot_trigger()
{
    emit sig_testSig(0);
}

void MyListWidget::slot_testSlot()
{
    clear();
}
