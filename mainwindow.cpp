#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    try {
        ui->textEdit_output->setText(QString::number(recursivo.Fatorial(ui->lineEdit_inputFatorial->text().toInt())));
    }
    catch (QString &erro) {
        QMessageBox::critical(this, "Erro", erro);
    }
}


void MainWindow::on_pushButton_executarSomatorio_clicked()
{
    try {
        ui->textEdit_output->setText(QString::number(recursivo.somatorio(ui->lineEdit_inputSomatorio->text().toInt())));
    }
    catch (QString &erro) {
            QMessageBox::critical(this, "Erro", erro);
        }
}


void MainWindow::on_pushButton_executarBinario_clicked()
{
    try {
        ui->textEdit_output->setText(recursivo.Binario(ui->lineEdit_inputBinario->text().toInt()));
    }
    catch (QString &erro) {
            QMessageBox::critical(this, "Erro", erro);
        }
}


void MainWindow::on_pushButton_2_clicked()
{
    try {
        ui->textEdit_output->setText(QString::number(recursivo.potencia(ui->lineEdit_inputBase->text().toInt(), ui->lineEdit_inputExpoente->text().toInt())));
    }   catch (QString &erro) {
        QMessageBox::critical(this, "Erro", erro);
    }
}


void MainWindow::on_pushButton_ExecutarFibonacci_clicked()
{
    try {
        ui->textEdit_output->setText(recursivo.Fibonacci(ui->lineEdit_inputFibonacci->text().toInt()));
    }   catch (QString &erro) {
        QMessageBox::critical(this, "Erro", erro);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    try {
        ui->textEdit_output->setText(QString::number(recursivo.CalculoFibonacci(ui->lineEdit_inputCalculoFibonacci->text().toInt())));
    }   catch (QString &erro) {
        QMessageBox::critical(this, "Erro", erro);
    }
}

