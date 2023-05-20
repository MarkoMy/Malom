#ifndef MYAPP_HPP
#define MYAPP_HPP

#include "application.hpp"
#include "statictext.hpp"
#include "babuk.hpp"
#include "gamedraw.hpp"
#include <vector>

using namespace std;

class MyApp : public application{
public:
    MyApp(){
        Tabla = new GameDraw(this,0,0,800,800);
        ColorLabel = new StaticText(this,20,20,100,40,"Fehér jön");
        whiteCount = new StaticText(this,700,20,50,40,"9");
        blackCount = new StaticText(this,700,60,100,40,"9");

        babu1 = new Babuk(this,600,220,40,40,"feher",0);
    }



protected:
    //vector<Babuk> babu[18];
    Babuk *babu1;

    GameDraw *Tabla;
    StaticText *ColorLabel;
    StaticText *whiteCount;
    StaticText *blackCount;


    /*std::vector<std::vector<int>> tabla =
    {{ 0,-1,-1, 0,-1,-1, 0 },
     {-1, 0,-1, 0,-1, 0,-1 },
     {-1,-1, 0, 0, 0,-1,-1 },
     { 0, 0, 0,-1, 0, 0, 0 },
     {-1,-1, 0, 0, 0,-1,-1 },
     {-1, 0,-1, 0,-1, 0,-1 },
     { 0,-1,-1, 0,-1,-1, 0 }};*/
};

#endif // MYAPP_HPP
