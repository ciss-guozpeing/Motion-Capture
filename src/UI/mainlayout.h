#ifndef MAINLAYOUT_H
#define MAINLAYOUT_H

#include <QObject>
#include <QMainWindow>
#include <QDockWidget>

class MainLayout: public QObject
{
public:
    MainLayout(QMainWindow *mainwindow);
    QList<QDockWidget *> getALLDockWidget();
private:
    QMainWindow *m_window;
    const int DOCK_NUMS = 7;
    QList<QDockWidget *> list_docks;
    void initALLDockWidget();
    void initMainLayout();

};

#endif // MAINLAYOUT_H
