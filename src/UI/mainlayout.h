#ifndef MAINLAYOUT_H
#define MAINLAYOUT_H

#include <QObject>
#include <QMainWindow>
#include <QDockWidget>

class MainLayout: public QObject
{
public:
    MainLayout(QMainWindow *mainwindow);
    QList<QDockWidget *> list_docks;
    QList<QDockWidget *> getALLDockWidget();
private:
    QMainWindow *m_window;
    const int DOCK_NUMS = 7;
    void initALLDockWidget();
    void initMainLayout();
};

#endif // MAINLAYOUT_H
