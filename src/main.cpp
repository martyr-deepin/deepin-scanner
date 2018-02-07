#include <DApplication>

#include <DLog>
#include <DWidgetUtil>

#include "widget/mainwindow.h"

int main(int argc, char *argv[])
{
    Dtk::Widget::DApplication::loadDXcbPlugin();

    Dtk::Widget::DApplication app(argc, argv);
    app.setOrganizationName("deepin");
    app.setApplicationName("deepin-scanner");
    app.setApplicationDisplayName(Dtk::Widget::DApplication::tr("Deepin Scanner"));
    app.setApplicationVersion(Dtk::Widget::DApplication::buildVersion("1.0"));

    Dtk::Core::DLogManager::registerConsoleAppender();
    Dtk::Core::DLogManager::registerFileAppender();

    MainWindow w;
    w.show();
    w.resize(1280, 720);
    Dtk::Widget::moveToCenter(&w);

    return app.exec();
}
