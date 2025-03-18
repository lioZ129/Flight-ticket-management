#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H

#include <QMainWindow>
#include "addflightdialog.h"

namespace Ui {
class AdminMainWindow;
}

class AdminMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminMainWindow(QWidget *parent = nullptr);
    ~AdminMainWindow();

private:
    Ui::AdminMainWindow *ui;

private slots:
    void AddFlightBtnClicked();
};

#endif // ADMINMAINWINDOW_H
