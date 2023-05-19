#include "gamedraw.hpp"
#include "graphics.hpp"
using namespace genv;

GameDraw::GameDraw(application*parent,int x, int y, int sx, int sy) :
    Widget(parent,x,y,sx,sy)
{

}

void GameDraw::TableDraw() const{
        gout<< move_to(0,0) << color(255,219,172) << box(800,800)
            << move_to(0,200) << color(255,219,172) << box(600,600) // játék mező
            << move_to(20,220) << color(138,68,18) << box(560,560)
            << move_to(25,225) << color(255,219,172) << box(550,550) // Külső kocka
            << move_to(100,300) << color(138,68,18) << box(400,400)
            << move_to(105,305) << color(255,219,172) << box(390,390) // Középső kocka
            << move_to(200,400) << color(138,68,18) << box(200,200) // Belső kocka
            << move_to(20,500) << color(138,68,18) << box(560,5) // vonal
            << move_to(300,220) << color(138,68,18) << box(5,560) // vonal
            << move_to(205,405) << color(255,219,172) << box(190,190) // közepe ürítése
            << move_to(15,215) << color(138,68,18) << box(15,15) // körök
            << move_to(295,215) << box(15,15) // középső-felső kör
            << move_to(570,215) << box(15,15)
            << move_to(15,770) << box(15,15)
            << move_to(295,770) << box(15,15)
            << move_to(570,770) << box(15,15)
            << move_to(295,295) << box(15,15)
            << move_to(295,395)  << box(15,15)
            << move_to(295,590) << box(15,15)
            << move_to(295,690) << box(15,15)
            << move_to(15,495) << box(15,15)
            << move_to(95,495) << box(15,15)
            << move_to(195,495) << box(15,15)
            << move_to(390,495) << box(15,15)
            << move_to(490,495) << box(15,15)
            << move_to(570,495) << box(15,15)
            << move_to(490,295) << box(15,15)
            << move_to(490,690) << box(15,15)
            << move_to(95,690) << box(15,15)
            << move_to(95,295) <<  box(15,15)
            << move_to(195,590) <<  box(15,15)
            << move_to(195,395) <<  box(15,15)
            << move_to(390,395) <<  box(15,15)
            << move_to(390,590) <<  box(15,15);
}
