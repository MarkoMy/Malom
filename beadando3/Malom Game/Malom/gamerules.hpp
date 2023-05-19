#ifndef GAMERULES_HPP
#define GAMERULES_HPP

#include "widgets.hpp"

class GameRules : public Widget
{
public:
    GameRules(application*,int x, int y, int sx, int sy);
    virtual ~GameRules(){

    }

    virtual void Moveing();
    virtual void
};

#endif // GAMERULES_HPP
