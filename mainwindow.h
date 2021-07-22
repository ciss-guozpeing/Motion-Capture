#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>

#include "./src/Camera/readcamera.h"
#include "./src/Video/displayvideo.h"
#include "./src/UI/mainlayout.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    const int DOCK_NUMS = 5;
    QList<QDockWidget *> list_docks;
    MainLayout *m_MainLayout;
    void initMainLayout();
    void initDockWidget();
};
#endif // MAINWINDOW_H
