#include <iostream>
#include <hazel.h>

class Game : public Hazel::Application
{
public:
    Game()
    {
        HZ_INFO("Starting Castle 3...");
    }
    ~Game() {}
};

Hazel::Application *Hazel::CreateApplication()
{
    return new Game;
}
