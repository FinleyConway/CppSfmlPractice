#include "game.h"

Game::Game() : System(DefaultWindowWidth,DefaultWindowHeight, WindowTitle, WindowClearColor)
{
    DefaultWindowWidth = 400;
    DefaultWindowHeight = 400;
    WindowTitle = "Game";
    WindowClearColor = sf::Color::Green;
}

Game::~Game()
{

}