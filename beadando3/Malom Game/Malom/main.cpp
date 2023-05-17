#include "application.hpp"
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
    MyApp(){}


protected:
    vector<Babuk> babu[18];
};

int main()
{
    MyApp app;

    app.event_loop(600,600);
    return 0;
}
