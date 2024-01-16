#pragma once

extern Hazel::Application *Hazel::CreateApplication();

int main(int argc, char **argv)
{
    std::cout << "Starting Hazel Engine..." << std::endl;
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
}
