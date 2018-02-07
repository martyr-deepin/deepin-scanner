#include "toolbar.h"

class ToolbarPrivate
{
public:
    ToolbarPrivate(Toolbar *parent) : q_ptr(parent) {}

    Toolbar *q_ptr;
    Q_DECLARE_PUBLIC(Toolbar)
};

Toolbar::Toolbar(QWidget *parent) :
    QWidget(parent), d_ptr(new ToolbarPrivate(this))
{

}

Toolbar::~Toolbar()
{

}
