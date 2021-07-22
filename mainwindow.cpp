#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_MainLayout = new MainLayout(this);
    /*删除中心区域*/
    QWidget *p = takeCentralWidget();
    if (p)
        delete p;
    /*允许嵌套dock*/
    setDockNestingEnabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actEdito_Trajectory_triggered()
{
    bool isshow = m_MainLayout->list_docks.at(6)->isHidden();
    if (isshow) {
        m_MainLayout->list_docks.at(6)->show();
    } else {
        m_MainLayout->list_docks.at(6)->hide();
    }
}

