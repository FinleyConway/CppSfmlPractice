#pragma once

#include "game.h"
#include "transformComponent.h"

class GameObject : public Game
{
private:
    Transform* _transform;

public:
    GameObject(Transform* transform);

    void LoadContent();
    void Initalize();
    void Update(GameTime& time);
    void Draw(GameTime& time);
};
