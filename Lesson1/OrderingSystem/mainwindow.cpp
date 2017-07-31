#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Ordering System");
    ui->label->setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonBox_accepted()
{

   int sum = 0;
   sum += (ui->checkBox_Pasta->isChecked()) ? 200 : 0;
   sum += (ui->checkBox_Burger->isChecked()) ? 180 : 0;
   sum += (ui->checkBox_Coke->isChecked()) ? 60 : 0;
   sum += (ui->checkBox_Sprite->isChecked()) ? 50 : 0;
   sum += (ui->checkBox_Egg->isChecked()) ? 160 : 0;
   sum += (ui->checkBox_BlackTea->isChecked()) ? 40 : 0;
   sum -=(ui->radioButton_Cash->isChecked()&&(sum!=0))? 30 : 0;
   sum *=(ui->radioButton_Credit->isChecked()&&(sum!=0))? 0.9 : 0;
   ui->label_Sum->setText("共 "+QString::number(sum)+" 元");
}

void MainWindow::on_buttonBox_rejected()
{
    ui->radioButton_Cash->setAutoExclusive(false);
    ui->radioButton_Cash->setChecked(false);
    ui->radioButton_Credit->setAutoExclusive(false);
    ui->radioButton_Credit->setChecked(false);
//    ui->checkBox_BlackTea->setCheckState( Qt::Unchecked ); //Qt::Checked
//    ui->checkBox_Egg->setCheckState( Qt::Unchecked );
//    ui->checkBox_Burger->setCheckState( Qt::Unchecked );
//    ui->checkBox_Pasta->setCheckState( Qt::Unchecked );
//    ui->checkBox_Sprite->setCheckState( Qt::Unchecked );
//    ui->checkBox_Coke->setCheckState( Qt::Unchecked );
    //ui->groupBox_Drink->setChecked(false);
    ui->label_Sum->setText("共 0 元");
}
