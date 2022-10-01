#pragma once

#include "gameObject.h"

class Transform
{
private:
    struct Position
    {
        float x;
        float y;
    };

public:
    Position position;

    Transform(GameObject& gameObject);
    virtual ~Transform();
};
