#include "babuk.hpp"
#include "widgets.hpp"


using namespace genv;
using namespace std;

Babuk::Babuk(application* parent, int x, int y, int sx, int sy, string szin, bool checked):
    Widget(parent,x,y,sx,sy) , _szin(szin), _checked(checked)
{
    _r= _size_x/2;
}

void Babuk::draw() const
{
    if(_szin == "feher")
    gout << color(255,255,255);
    else
    gout << color(0,0,0);

    for (int i = _x; i < _x + 2 * _r; i++) {
        for (int j = _y; j < _y + 2 * _r; j++) {
            int dx = i - (_x + _r);
            int dy = j - (_y + _r);
            if (dx * dx + dy * dy <= _r * _r) {
                gout << move_to(i, j) << dot;
            }
        }
    }


    if (_checked) {

        if(_szin == "feher")
        gout << color(220,220,220);
        else
        gout << color(100,100,100);

        for (int i = _x; i < _x + 2 * _r; i++) {
            for (int j = _y; j < _y + 2 * _r; j++) {
                int dx = i - (_x + _r);
                int dy = j - (_y + _r);
                if (dx * dx + dy * dy <= _r * _r) {
                    gout << move_to(i, j) << dot;
                }
            }
        }

    }
}

void Babuk::handle(event ev)
{
    if (ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left) {
        _checked = !_checked;
    }
}

bool Babuk::is_checked()
{
    return _checked;
}
