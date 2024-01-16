#include <iostream>
#include <hazel.h>

class Game : public Hazel::Application
{
public:
    Game() {}
    ~Game() {}
};

Hazel::Application *Hazel::CreateApplication()
{
    return new Game;
}
