#include "mainlayout.h"

MainLayout::MainLayout(QMainWindow *mainwindow)
{
    m_window = mainwindow;
    initALLDockWidget();
    initMainLayout();

}

void MainLayout::initALLDockWidget()
{
    for (int i = 0; i < DOCK_NUMS; i++) {
        QDockWidget *dw = new QDockWidget;
        list_docks.append(dw);
    }
}

QList<QDockWidget *> MainLayout::getALLDockWidget()
{
    return list_docks;
}

void MainLayout::initMainLayout()
{
    m_window->addDockWidget(Qt::LeftDockWidgetArea, list_docks.at(0), Qt::Horizontal);
    m_window->addDockWidget(Qt::LeftDockWidgetArea, list_docks.at(1), Qt::Horizontal);
    m_window->splitDockWidget(list_docks.at(1), list_docks.at(2), Qt::Vertical);
    m_window->splitDockWidget(list_docks.at(1), list_docks.at(3), Qt::Horizontal);
    m_window->splitDockWidget(list_docks.at(1), list_docks.at(6), Qt::Vertical);
    m_window->splitDockWidget(list_docks.at(3), list_docks.at(4), Qt::Vertical);
    m_window->splitDockWidget(list_docks.at(3), list_docks.at(5), Qt::Vertical);

    list_docks.at(6)->hide();
    list_docks.at(1)->setMinimumWidth(1000);
    list_docks.at(1)->setFeatures(QDockWidget::NoDockWidgetFeatures);
}
