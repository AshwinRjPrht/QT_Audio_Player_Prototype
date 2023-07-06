#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QTimer>
#include <QDateTime>
#include <QtCore>
#include <QtWidgets>
#include <QListView>
#include <QListWidgetItem>
#include <QGraphicsView>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void Date_Time_Display();


    void on_pushButton_Music_clicked();

    void on_pushButton_Navigation_clicked();

    void on_pushButton_call_clicked();

    void on_pushButton_mainmenu_clicked();

    void on_pushButton_Pic_clicked();

    void on_pushButton_weather_clicked();

    void on_pushButton_Driver_clicked();

    void on_pushButton_Play_clicked();

    void on_pushButton_Forward_clicked();

    void on_pushButton_Rewind_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *Timer;

};
#endif // MAINWINDOW_H
