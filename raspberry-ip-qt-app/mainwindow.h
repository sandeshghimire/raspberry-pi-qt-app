#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QAction>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QSignalMapper>
#include <QMenuBar>


class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QMdiArea *mdiArea;
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *windowMenu;
    QMenu *helpMenu;
    QAction *newAct;

private:
    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
    void updateMenus();
};

#endif // MAINWINDOW_H
