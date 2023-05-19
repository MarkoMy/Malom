#include "application.hpp"
#include "statictext.hpp"
#include "babuk.hpp"
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

class MyApp : public application{
public:
    MyApp(){
        ColorLabel = new StaticText(this,20,20,100,40,"Fehér");
        ColorLabel = new StaticText(this,20,20,100,40,"Fehér jön");
        whiteCount = new StaticText(this,700,20,50,40,"9");
        blackCount = new StaticText(this,700,60,100,40,"9");


        babu1 = new Babuk(this,600,220,40,40,"feher",1);
        babu2 = new Babuk(this,600,270,40,40,"feher",0);
        babu3 = new Babuk(this,600,420,40,40,"fekete",0);
        babu4 = new Babuk(this,600,470,40,40,"fekete",0);
    }


protected:
    vector<Babuk> babu[18];
    Babuk * babu1;
    Babuk * babu2;
    Babuk * babu3;
    Babuk * babu4;

    StaticText *ColorLabel;
    StaticText *whiteCount;
    StaticText *blackCount;
};

int main()
{
    MyApp app;
    app.event_loop(800,800);
    return 0;
}
