#ifndef CHECKBOX_HPP_INCLUDED
#define CHECKBOX_HPP_INCLUDED

#include "widgets.hpp"

class CheckBox : public Widget {
protected:
    bool _checked;
public:
    CheckBox(application*, int x, int y, int sx, int sy);
    virtual void draw();
    virtual void handle(genv::event ev);
    virtual bool is_checked();
};


#endif // CHECKBOX_HPP_INCLUDED
