#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QPainter>
#include <iostream>
#include <QSortFilterProxyModel>
#include "langclassdat.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tile.resize(tileMaxNum);

   LangClassDat* classDat= new LangClassDat(this);
    QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(  classDat);
    ui->tableView->setModel(proxyModel);

    ui->tableView->setSortingEnabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
     QString filename = QFileDialog::getOpenFileName(this, tr("Open Image"), "//media/kh/Mobile/Game/Langrisser/랑그릿사1.2.3-한글판/랑그릿사2/resmap/",tr("pct MapTile File (*.pct)"));

     change_ST_file(filename);

}

void MainWindow::on_pushButton_2_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open Image"), "//media/kh/Mobile/Game/Langrisser/랑그릿사1.2.3-한글판/랑그릿사2/resmap/",tr("HF Map File (*.hf)"));
    change_HF_file(filename);

}

void MainWindow::change_ST_file(QString filename)
{
    ui->lineEdit->setText(filename);

    tileMap =  QImage(filename);
    pixmap = QPixmap::fromImage(tileMap);
    QSize si= ui->Tile->size();
    ui->Tile->setPixmap(pixmap.scaled(si, Qt::KeepAspectRatio));

    for (int var = 0; var < tileMaxNum; ++var) {
        unsigned int x = var % tileMaxNumX; unsigned int y = var/tileMaxNumX;
        tile[var] = ( pixmap.copy(48*x,48*y,48,48));

        std::cout << "var(x,y)" << var<<"(" << x << ","<< y<< ")" << " " << tile[var].width() << std::endl;
    }


//    QString output("/tmp/output.png");
 //   tileMap.save(output,"PNG");

}

void MainWindow::change_HF_file(QString filename)
{
    ui->lineEdit_2->setText(filename);

    QFile file(filename);

    file.open(QIODevice::ReadOnly);
    file.seek(0);


    LangMapfileHF* hf_file = new LangMapfileHF (file.readAll().data());



    std::cout<< "file pos is : "<< file.pos()<<  std::endl;


    int width =0, height =0;
    width = hf_file->width; height = hf_file->height;
    QImage * background = new QImage(48*width,48*height,QImage::Format_RGB888);
    QPainter painter(background);

    background->fill(0xffffff);

     std::cout << "width_height" << "(" << width << ","<< height<< ")" << " "  << std::endl;
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            int number = width*y + x;
            unsigned tileNumX = hf_file->hf_data[number].x;
            unsigned tileNumY = hf_file->hf_data[number].y;

            int numTile = tileNumY*16 + tileNumX;
            QPoint target(48*x,48*y);
            painter.drawPixmap(target, tile[numTile]);
            //            scene->addPixmap(tile[tileNumy*tileMaxNumX+tileNumX]);
//            std::cout << "var(x,y)" << "(" << tileNumX << ","<< tileNumY<< ")" << " "  << std::endl;
        }
    }
    painter.end();

    QSize worldmapsize = ui->WorldMap->size();

    QImage small = background->scaledToWidth(600);

    pixmap2  = QPixmap::fromImage(small);
//    background->save("/tmp/output_lang2.png");





 ui->WorldMap->setPixmap(pixmap2);
    tile[9].save("/tmp/tile.png");
   delete background;
   //std::cout << numer << "tile size" << tile[numer].size().rwidth() << std::endl;
   //ui->WorldMap->setPixmap(tile[numer]);



    update();
}



void MainWindow::on_spinBox_valueChanged(int arg1)
{
     QString dir("//media/kh/Mobile/Game/Langrisser/랑그릿사1.2.3-한글판/랑그릿사2/resmap/");

    QString   HFname=  dir + QString::asprintf("land%02d.hf", arg1);
    QString   HFname2=  dir + QString::asprintf("LAND%02d.HF", arg1);

    QString   STname= dir+  QString::asprintf("wSt%02d.pct",arg1);
    QString   STname2= dir + QString::asprintf("ST%02d.pct",arg1);
    std::cout << (STname.toStdString()) <<std::endl;

    change_ST_file(STname2);
    if( QFileInfo::exists(HFname))
        change_HF_file(HFname);
    else change_HF_file(HFname2);



}
