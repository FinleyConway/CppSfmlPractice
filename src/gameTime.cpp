#include "gameTime.h"

GameTime::GameTime(/* args */)
{
}

GameTime::~GameTime()
{
}

void GameTime::Update(float delaTime, float totalTimeElasped)
{
    DeltaTime = delaTime;
    TotalTimeElasped = totalTimeElasped;
}