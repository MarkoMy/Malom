#include "application.hpp"
#include "statictext.hpp"
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

struct Feketeb{

};

struct Feherb{

};

struct Babuk{
    Feketeb fekete;
    Feherb feher;
};

class MyApp : public application{
public:
    MyApp(){
        ColorLabel = new StaticText(this,20,20,100,40,"Fehér");
    }


protected:
    vector<Babuk> babu[18];
    StaticText *ColorLabel;
};

int main()
{
    MyApp app;

    app.event_loop(800,800);
    return 0;
}
