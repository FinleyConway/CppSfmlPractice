#pragma once
#include <SFML/Graphics.hpp>
#include "gameTime.h"

class System
{
protected:
    GameTime Time;
    sf::RenderWindow Window;

    uint DefaultWindowWidth;
    uint DefaultWindowHeight;
    const char* WindowTitle;
    sf::Color WindowClearColor;

    System(uint windowHeight, uint windowWidth, const char* windowTitle, sf::Color& windowClearColor);
    virtual ~System();


public:
    const int TargetFps = 60;
    const float TimeUntilUpdate = 1 / TargetFps;

    void Run();
    virtual void LoadContent() = 0;
    virtual void Initalize() = 0;
    virtual void Update(GameTime& time) = 0;
    virtual void Draw(GameTime& time) = 0;
};