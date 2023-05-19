#ifndef BABUK_HPP
#define BABUK_HPP

#include "widgets.hpp"

class Babuk : public Widget
{
public:
    Babuk(application*, int x, int y, int sx, int sy,std::string szin, bool checked);
    virtual ~Babuk(){

    };

    virtual void draw() const;
    virtual void handle(genv::event ev);
    virtual bool is_checked();
    virtual void uncheck();

protected:
    bool _checked;
    int _r;
    std::string _szin;
};

#endif // BABUK_HPP
