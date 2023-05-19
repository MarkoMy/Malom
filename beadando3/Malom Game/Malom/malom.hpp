#ifndef MALOM_HPP
#define MALOM_HPP

#include "application.hpp"
#include "statictext.hpp"
#include "babuk.hpp"

class malom : public application
{
public:
    malom(){
        ColorLabel = new StaticText(this,20,20,100,40,"Fehér jön");
        whiteCount = new StaticText(this,700,20,50,40,"9");
        blackCount = new StaticText(this,700,60,100,40,"9");


        babu1 = new Babuk(this,600,220,40,40,"feher",1);
        babu2 = new Babuk(this,600,270,40,40,"feher",0);
        babu3 = new Babuk(this,600,420,40,40,"fekete",0);
        babu4 = new Babuk(this,600,470,40,40,"fekete",0);
    }


protected:
Babuk * babu1;
Babuk * babu2;
Babuk * babu3;
Babuk * babu4;

StaticText *ColorLabel;
StaticText *whiteCount;
StaticText *blackCount;
};


#endif // MALOM_HPP
