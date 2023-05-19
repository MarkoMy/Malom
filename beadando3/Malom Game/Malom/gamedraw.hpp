#ifndef GAMEDRAW_HPP
#define GAMEDRAW_HPP


#include "widgets.hpp"

class GameDraw : public Widget
{
public:
    GameDraw(application*,int x, int y, int sx, int sy);
    virtual ~GameDraw(){

    };

    virtual void TableDraw() const;
};

#endif // GAMEDRAW_HPP
