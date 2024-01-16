#pragma once

extern Hazel::Application *Hazel::CreateApplication();

int main(int argc, char **argv)
{

    Hazel::Log::Init();
    HZ_CORE_FATAL("Starting Hazel Engine...");

    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
}
