#include "statictext.hpp"
#include "graphics.hpp"
using namespace genv;

StaticText::StaticText(application* parent,int x, int y, int sx, int sy, std::string text)
    : Widget(parent,x,y,sx,sy), _text(text)
{

}

StaticText::~StaticText(){

}

void StaticText::draw() const{
    gout << move_to(_x, _y) << color(255,219,172) << box(_size_x,_size_y);
    gout << move_to(_x+5, _y+15) << color(0,0,0) << text(_text);

}

void StaticText::handle(event ev){

}
