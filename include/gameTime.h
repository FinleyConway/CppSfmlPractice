#pragma once

class GameTime
{
private:

public:
    float DeltaTime;
    float TotalTimeElasped;

    GameTime();
    ~GameTime();

    void Update(float deltaTime, float totalTimeElasped);
};
