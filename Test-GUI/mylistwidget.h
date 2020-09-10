#pragma once

#include <QListWidget>

class MyListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit MyListWidget(QWidget *parent = nullptr);

public slots:
    void slot_testSlot();
    void slot_trigger();

signals:
    void sig_testSig(int);
};
