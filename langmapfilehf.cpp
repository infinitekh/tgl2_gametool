#include "langmapfilehf.h"
#include <iostream>
LangMapfileHF::LangMapfileHF()
{

}
 QDataStream &operator >> ( QDataStream& in, LangMapfileHF& file)
 {

    int width =0, height =0 ;
    in >> width ;
    in >> height;
    int unused[2];
    in >> unused[0];
    in >> unused[1];

std::cout << width << "width , " << height << " height " << std::endl;

//    in.readBytes(&width,2);
//    in.readBytes(&height,2);
    quint8 c=0 ;
    file.width = width; file.height = height;
    for(int pos = 0 ; pos < width*height; pos++) {
        in >> c ;
        file.hf_data[pos].x  = (c& 0xf0) >> 4;
        file.hf_data[pos].y = (c&  0xf) ;
    }
 }

