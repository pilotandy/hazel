#pragma once
#include <iostream>

namespace Hazel
{

    class Application
    {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    // To be defined in CLIENT
    Application *CreateApplication();

}
