#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <recursividade.h>

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
    void on_pushButton_clicked();

    void on_pushButton_executarSomatorio_clicked();

    void on_pushButton_executarBinario_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_ExecutarFibonacci_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    recursividade recursivo;
};
#endif // MAINWINDOW_H
