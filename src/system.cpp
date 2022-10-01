#include "system.h"

System::System(uint windowHeight, uint windowWidth, const char* windowTitle, sf::Color& windowClearColor)
{
}

System::~System()
{
}

void System::Run()
{
    Window.create(sf::VideoMode(DefaultWindowWidth, DefaultWindowHeight), WindowTitle);    
    LoadContent();
    Initalize();

    float totalTimeBeforeUpdate = 0;
    float previousTimeElaspsed = 0;
    float deltaTime = 0;
    float totalTimeElasped = 0;

    sf::Clock clock;

    while (Window.isOpen())
    {
        sf::Event sfEvent;
        while (Window.pollEvent(sfEvent))
        {
            // Close window: exit
            if (sfEvent.type == sf::Event::Closed)
                Window.close();

        }

        // delta time
        totalTimeElasped = clock.getElapsedTime().asSeconds();
        deltaTime = totalTimeElasped - previousTimeElaspsed;
        previousTimeElaspsed = totalTimeElasped;
        totalTimeBeforeUpdate += deltaTime;

        // delaying the updating cycle
        if (totalTimeBeforeUpdate >= TimeUntilUpdate)
        {
            Time.Update(totalTimeBeforeUpdate, totalTimeElasped);
            totalTimeBeforeUpdate = 0;

            Window.clear(WindowClearColor);

            Update(Time);
            Draw(Time);

            Window.display();
        }
    }
}