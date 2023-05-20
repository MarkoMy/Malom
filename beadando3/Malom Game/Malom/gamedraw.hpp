#ifndef GAMEDRAW_HPP
#define GAMEDRAW_HPP


#include "widgets.hpp"

class GameDraw : public Widget
{
public:
    GameDraw(application*,int x, int y, int sx, int sy);
    virtual ~GameDraw(){

    };

    virtual void draw() const;
    virtual void handle(genv::event ev);
    virtual void TableDraw() const;
    virtual void BabuDraw(int x, int y);
};

#endif // GAMEDRAW_HPP
