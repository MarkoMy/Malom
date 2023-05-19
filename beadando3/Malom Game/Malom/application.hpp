#ifndef APPLICATION_HPP
#define APPLICATION_HPP

class Widget;

#include <vector>
#include <string>

class application
{
public:
    void event_loop(int x, int y);
    void register_widget(Widget*);
    void start(int, int);
    void tabledraw();
protected:
    std::vector<Widget*> widgets;
    bool startCount = true;
};

#endif // APPLICATION_HPP
