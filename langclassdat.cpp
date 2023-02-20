#include "langclassdat.h"
#include <QFileDialog>
#include <QFile>
#include <QByteArray>
#include <QDataStream>
#include <QStringList>
#include <QTableWidget>





LangClassDat::LangClassDat(QObject* parent) : QAbstractTableModel(parent)
{
    QString filename =QFileDialog::getOpenFileName(qobject_cast<QWidget*>(parent),"class.dat Search", "/media/kh/Mobile/Game/Langrisser/랑그릿사1.2.3-한글판/랑그릿사2/ORGDAT/", "Class file (class.dat)");
    QFile ifile(filename);
    ifile.open(QFileDevice::ReadOnly);
    QByteArray data = ifile.readAll();


    QDataStream  ds (data);






    qint8 r8;
    for (int i = 0; i < 255; ++i) {
        ClassDat_Row row;
        int column = 0;

       ds>> r8 ; row.unknown = r8;
       ds >> r8;       row.fly = r8;
       ds>> r8;       row.unitType =static_cast< Langrisser::UnitType> (r8);
       ds>> r8; row.Tier = r8;
       ds>> r8; row.AT= r8;
       ds>> r8; row.DF= r8;
       ds>> r8; row.MV= r8;
       ds>> r8; row.RANGE= r8;
       ds>> r8; row.A= r8;
       ds>> r8; row.D= r8;
       ds>> r8; row.MP= r8;
       ds>> r8; row.MD= r8;
       ds>> r8; row.numMecener_increase= r8;
       ds>> r8; row.price= r8;
       ds>> r8; row.killedPrice= r8;
       ds>> r8; row.killedExp= r8;
       ds>> r8; row.needExp= r8;
       ds>> r8; row.unknown2= r8;
       ds>> r8; row.mecenerList[0] = r8;
       ds>> r8; row.mecenerList[1] = r8;
       ds>> r8; row.mecenerList[2] = r8;
       ds>> r8; row.mecenerList[3] = r8;
       ds>> r8; row.mecenerList[4] = r8;
       ds>> r8; row.mecenerList[5] = r8;

       ds>> r8; row.spellList[0] =static_cast<Langrisser::Spell_Type>( r8);
       ds>> r8; row.spellList[1] = static_cast<Langrisser::Spell_Type>( r8);
       ds>> r8; row.spellList[2] = static_cast<Langrisser::Spell_Type>( r8);
       ds>> r8; row.spellList[3] = static_cast<Langrisser::Spell_Type>( r8);

       row.indexNum = i ;
       row.name = Langrisser::characterNameList[i];
       v_class.push_back(row);

    }






}

int LangClassDat::rowCount(const QModelIndex &parent) const
{
    return v_class.count();
}

int LangClassDat::columnCount(const QModelIndex &parent) const
{
    return 30;
}

QVariant LangClassDat::data(const QModelIndex &index, int role) const
{

    int row = index.row();
    QVariant ret;
    auto value = v_class.at(row);
    int s = index.column(); int num =0;
    if (role == Qt::TextAlignmentRole) {
        return Qt::AlignCenter;
    }
    if( role==Qt::ToolTipRole && s == 3) {
        ret = value.unitType;
    }
    if( role== Qt::DisplayRole)
    switch(s){
        case 0:
        ret = v_class.at(row).indexNum;
        break;
    case 1:
        ret = v_class.at(row).name;
        break;
    case 2:
        if (value.fly)
            ret = "비행";
        else ret = "지상";
        break;
    case 3:
        ret = Langrisser::UnitTypeName[value.unitType]; break;
    case 4:
        ret = value.Tier; break;
    case 5:
        ret = value.AT;
        break;
    case 6:
        ret = value.DF; break;
    case 7:
        ret = value.MV; break;
    case 8:
        ret = value.RANGE; break;
    case 9 :
        ret =value.A; break;
    case 10:
        ret = value.D; break;

    case 11:
        ret = value.MP; break;
    case 12:
        ret = value.MD; break;
    case 13:
        ret = value.numMecener_increase; break;
    case 14:
        ret = value.price*10; break;
    case 15:
        ret = value.killedPrice*10; break;
    case 16:
        ret = value.killedExp;  break;
    case 17:
        ret = value.needExp*8; break;
    case 18:
//    case 19:
    case 20:
//    case 21:
    case 22:
//    case 23:
        num= value.mecenerList[s-18];
        if (num<Langrisser::characterNameList.size()){
            ret = Langrisser::characterNameList[ num];
        }
        else ret = num;
        break;
    case 24: case 25: case 26: case 27:
        num = value.spellList[s-24];
        if (num < Langrisser::Spell_Type_names.size() && num>=0)
            ret = Langrisser::Spell_Type_names[num];
        else ret= "";
        break;
    case 28:
        ret = value.unknown; break;
    case 29:
        num =value.unknown2*2;
        if (num <0x1a) num += 8;
        else if (num ==0x93) num=0x18;

        ret = num; break;
    }
    return ret;
}

QVariant LangClassDat::headerData(int s, Qt::Orientation orientation, int role) const
{
    QVariant ret;
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        QStringList a = { "indexNumber", "Name", "Fly", "병종", "티어" , "AT", "DF", "MV", "지휘범위", "A", "D", "MP", "마법저항(MD)", "용병수", "가격" , "킬머니", "킬경험치", "레벨업필요경험치", "고용가능용병1", "2", "3", "4", "5", "6", "배우는마법1", "2", "3", "4" , "모름", "모름2"};
        if ( s < a.size() ){

            ret = a[s];
        }
        if (s == 1)
            return QVariant("hello");
    }
   return ret;
}
