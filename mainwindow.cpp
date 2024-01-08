#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrAddProduit = new AddProduit(this);
    ptrAddFourniseur = new AddFourniseur(this);
    ptrGereLentre = new GereLentre(this);
    ptrGereStock = new GereStock(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrAddProduit;
    delete ptrAddFourniseur;
    delete ptrGereLentre;
    delete ptrGereStock;
}


void MainWindow::on_pushButton_clicked()
{
    ptrAddProduit->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrAddFourniseur->show();
}


void MainWindow::on_pushButton_5_clicked()
{
    ptrGereLentre->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    ptrGereStock->show();
}


void MainWindow::on_pushButton_6_clicked()
{

}

void MainWindow::on_pushButton_7_clicked()
{

}
