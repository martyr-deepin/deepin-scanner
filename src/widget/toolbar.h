#pragma once

#include <QScopedPointer>
#include <QWidget>

class ToolbarPrivate;
class Toolbar : public QWidget
{
    Q_OBJECT
public:
    explicit Toolbar(QWidget *parent = 0);
    ~Toolbar();

Q_SIGNALS:

public Q_SLOTS:

private:
    QScopedPointer<ToolbarPrivate> d_ptr;
    Q_DECLARE_PRIVATE_D(qGetPtrHelper(d_ptr), Toolbar)
};

