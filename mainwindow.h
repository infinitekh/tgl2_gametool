#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsScene>
#include <QMainWindow>
#include"langmapfilehf.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector<QPixmap> tile;
    QImage tileMap;
    QPixmap pixmap, pixmap2;
    const unsigned int tileMaxNum=256;
    const unsigned int tileMaxNumX=16;
    LangMapfileHF *hf_file;
    QGraphicsScene *scene;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void change_ST_file(QString a);
    void change_HF_file(QString b);


    void on_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
