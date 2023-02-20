#ifndef LANGMAPFILEHF_H
#define LANGMAPFILEHF_H

#include <QBuffer>
#include <QDataStream>
#include <QObject>

class QBuffer;
class LangMapfileHF
{
public:
    LangMapfileHF();
    LangMapfileHF( char* a){
        this->width= * (int*)a;
        this->height= * (int*)(a+4);
        this->hf_data.resize(width*height);

        for(int pos =0 ; pos < width*height; pos++) {
            hf_data[ pos ] = a[16+pos];
        };

//        memcpy(hf_data , &a->data()[16], width*height);
    };

    unsigned int width , height;
    int unused[2];

    struct Four2Bits {
        unsigned x :4 ;
        unsigned y :4 ;
        Four2Bits() {};
        Four2Bits( char c ) {
            y = (c &0xf0 ) >>4;
            x = c &0xf ;
        };
    };

    QVector<Four2Bits> hf_data;


    friend QDataStream &operator << ( QDataStream& out, LangMapfileHF& file);
    friend QDataStream &operator >> ( QDataStream& in, LangMapfileHF& file);
signals:

};

#endif // LANGMAPFILEHF_H
