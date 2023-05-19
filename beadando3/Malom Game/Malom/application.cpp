#include "application.hpp"
#include "widgets.hpp"

using namespace genv;

void application::event_loop() {
    event ev;
    Widget *focus = nullptr;
    while(gin >> ev ) {
        if (ev.type == ev_mouse && ev.button==btn_left) {
            for (size_t i=0;i<widgets.size();i++) {
                if (widgets[i]->is_selected(ev.pos_x, ev.pos_y)) {
                        focus = widgets[i];
                }
            }
        }

        if (focus) {
            focus->handle(ev);
        }
        for (Widget * w : widgets) {
            w->draw();
        }
        gout << refresh;
    }
}


void application::register_widget(Widget * w){
    widgets.push_back(w);
}


