#ifndef LANGCLASSDAT_H
#define LANGCLASSDAT_H

#include <QWidget>
#include <QAbstractTableModel>
#include "Langrisser_Enum.h"
#include <QObject>
class LangClassDat : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit LangClassDat(QObject * parent);


    struct ClassDat_Row {
        QString name;
        quint8 indexNum;
        qint8 unknown;
        qint8 fly;
        Langrisser::UnitType unitType;
        qint8 Tier;
        qint8 AT,DF,MV,RANGE,A,D,MP,MD;
        qint8 numMecener_increase;
        quint8 price, killedPrice;
        quint8 killedExp,needExp,unknown2;
        quint8 mecenerList[6];
        Langrisser::Spell_Type spellList[4];

    };

    QVector<ClassDat_Row> v_class;

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
        int columnCount(const QModelIndex &parent = QModelIndex()) const;
        QVariant data(const QModelIndex &index, int role) const;
        QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;

signals:

};

#endif // LANGCLASSDAT_H
