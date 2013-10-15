#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
       createActions();
       createMenus();
       createToolBars();
       createStatusBar();
       updateMenus();
}

MainWindow::~MainWindow()
{
    
}


void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAct);
}

void MainWindow::createActions()
{

}

void MainWindow::createToolBars()
{

}
void MainWindow::createStatusBar()
{

}
void MainWindow::updateMenus()
{

}
