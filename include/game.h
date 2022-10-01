#pragma once
#include "system.h"

class Game : public System
{
private:

public:
    Game();
    virtual ~Game();

    void LoadContent();
    void Initalize();
    void Update(GameTime& time);
    void Draw(GameTime& time);
};