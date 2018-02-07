#include "mainwindow.h"

class MainWindowPrivate
{
public:
    MainWindowPrivate(MainWindow *parent) : q_ptr(parent) {}

    MainWindow *q_ptr;
    Q_DECLARE_PUBLIC(MainWindow)
};

MainWindow::MainWindow(QWidget *parent) :
    Dtk::Widget::DMainWindow(parent), d_ptr(new MainWindowPrivate(this))
{
    setMinimumSize(800, 500);
}

MainWindow::~MainWindow()
{

}
