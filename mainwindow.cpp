#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow:: MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowIcon(QIcon(":/Imgs_Songs/music.png"));
    this->setFixedSize(this->geometry().width(),this->geometry().height());
    ui->setupUi(this);

    ui->pushButton_Music->setIcon(QIcon(":/Imgs_Songs/musical-note.png"));
    ui->pushButton_Driver->setIcon(QIcon(":/Imgs_Songs/steering-wheel.png"));
    ui->pushButton_Navigation->setIcon(QIcon(":/Imgs_Songs/compass (2).png"));
    ui->pushButton_mainmenu->setIcon(QIcon(":/Imgs_Songs/menu.png"));
    ui->pushButton_call->setIcon(QIcon(":/Imgs_Songs/phone-call.png"));
    ui->pushButton_weather->setIcon(QIcon(":/Imgs_Songs/cloudy-day.png"));
    ui->pushButton_Pic->setIcon(QIcon(":/Imgs_Songs/google-photos.png"));
    ui->pushButton_Play->setIcon(QIcon(":/Imgs_Songs/play-button-arrowhead.png"));
    ui->pushButton_Forward->setIcon(QIcon(":/Imgs_Songs/forward.png"));
    ui->pushButton_Rewind->setIcon(QIcon(":/Imgs_Songs/backward-arrows-couple.png"));


    Timer = new QTimer();
    connect(Timer, SIGNAL(timeout()), this, SLOT(Date_Time_Display()));
    Timer->setInterval(1000);
    Timer->start();



    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rc/Imgs_Songs/High.jpg"),"The Chainsmoker - High");
    ui->listWidget->addItem(item);
    QListWidgetItem *item1 = new QListWidgetItem(QIcon(":/rc/Imgs_Songs/The Nights.jpg"),"Avicii - The Night");
    ui->listWidget->addItem(item1);
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/Imgs_Songs/Butta_Bomma.jpg"),"Butta_Bomma");
    ui->listWidget->addItem(item2);
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/Imgs_Songs/LP-Numb.jpg"),"LP-Numb");
    ui->listWidget->addItem(item3);
    QListWidgetItem *item4 = new QListWidgetItem(QIcon(":/Imgs_Songs/mental manadhil.jpg"),"Mental Manadhil");
    ui->listWidget->addItem(item4);
    QListWidgetItem *item5 = new QListWidgetItem(QIcon(":/Imgs_Songs/GreenDay- Boulevard of Broken Dreams.jpg"),"GreenDay- Boulevard of Broken Dreams");
    ui->listWidget->addItem(item5);
    QListWidgetItem *item6 = new QListWidgetItem(QIcon(":/Imgs_Songs/eminem- from the D2 the LBC.jpg"),"Eminem- from D2 to LBC");
    ui->listWidget->addItem(item6);
    QListWidgetItem *item7 = new QListWidgetItem(QIcon(":/Imgs_Songs/OneRepublic-counting Stars.jpg"),"One Republic-counting Stars");
    ui->listWidget->addItem(item7);
    QListWidgetItem *item8 = new QListWidgetItem(QIcon(":/Imgs_Songs/Imagine Dragons- Sharks.jpg"),"Imagine Dragons- Sharks");
    ui->listWidget->addItem(item8);
    QListWidgetItem *item9 = new QListWidgetItem(QIcon(":/Imgs_Songs/TwentyOne Pilots- Stressed Out.jpg"),"TwentyOne Pilots- Stressed Out");
    ui->listWidget->addItem(item9);
    QListWidgetItem *item10 = new QListWidgetItem(QIcon(":/Imgs_Songs/Bhediya- Baaki sab theek.jpg"),"Bhediya- Baaki sab theek");
    ui->listWidget->addItem(item10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: Date_Time_Display()
{
    ui->TimeLabel->setText(QDateTime::currentDateTime().toString());
}


void MainWindow::on_pushButton_Music_clicked()
{
    qDebug() << "Music is Selected";
}


void MainWindow::on_pushButton_Navigation_clicked()
{
    qDebug() << "Navigation is Selected";
}


void MainWindow::on_pushButton_call_clicked()
{
    qDebug() << "Call is Selected";
}


void MainWindow::on_pushButton_mainmenu_clicked()
{
    qDebug() << "Main Menu is Selected";
}


void MainWindow::on_pushButton_Pic_clicked()
{
    qDebug() << "Images is Selected";
}


void MainWindow::on_pushButton_weather_clicked()
{
    qDebug() << "Weather is Selected";
}


void MainWindow::on_pushButton_Driver_clicked()
{
    qDebug() << "Driver is Selected";
}


void MainWindow::on_pushButton_Play_clicked()
{
    qDebug() << "Song is played";
}


void MainWindow::on_pushButton_Forward_clicked()
{
    qDebug() << "Next song is played";
}


void MainWindow::on_pushButton_Rewind_clicked()
{
    qDebug() << "Previous song is played";
}

