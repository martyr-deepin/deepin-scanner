#pragma once

#include <QScopedPointer>
#include <DMainWindow>

class MainWindowPrivate;
class MainWindow : public Dtk::Widget::DMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

Q_SIGNALS:

public Q_SLOTS:

private:
    QScopedPointer<MainWindowPrivate> d_ptr;
    Q_DECLARE_PRIVATE_D(qGetPtrHelper(d_ptr), MainWindow)
};

