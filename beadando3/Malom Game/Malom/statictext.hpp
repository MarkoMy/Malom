#ifndef STATICTEXT_HPP
#define STATICTEXT_HPP

#include "widgets.hpp"

class StaticText : public Widget
{
protected:
    std::string _text;
public:
    StaticText(application*,int, int, int, int, std::string);
    virtual ~StaticText();
    virtual void draw() const;
    virtual void handle(genv::event);
};

#endif // STATICTEXT_HPP
