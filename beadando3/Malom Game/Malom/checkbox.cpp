#include "checkbox.hpp"
#include "graphics.hpp"

using namespace genv;

CheckBox::CheckBox(application* parent, int x, int y, int sx, int sy): Widget(parent,x,y,sx,sy)
{
    _checked=false;
}

void CheckBox::draw()
{
    gout << move_to(_x, _y) << color(255,255,255) << box(_size_x, _size_y);
    gout << move_to(_x+2, _y+2) << color(0,0,0) << box(_size_x-4, _size_y-4);
    if (_checked) {
        gout << color(255,0,0);
        gout << move_to(_x+4, _y+4) << line(_size_x-8, _size_y-8);
        gout << move_to(_x+5, _y+4) << line(_size_x-8, _size_y-8);
        gout << move_to(_x+_size_x-4, _y+4) << line(-_size_x+8, _size_y-8);
        gout << move_to(_x+_size_x-5, _y+4) << line(-_size_x+8, _size_y-8);
    }
}

void CheckBox::handle(event ev)
{
    if (ev.type == ev_key && ev.keycode == key_enter) {
            _checked = !_checked;
    }
    if (ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left) {
        _checked = !_checked;
    }
}
bool CheckBox::is_checked()
{
    return _checked;
}
