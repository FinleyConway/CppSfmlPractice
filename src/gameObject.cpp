#include "gameObject.h"

GameObject::GameObject(Transform* transform) : _transform(transform)
{
}

void GameObject::LoadContent()
{
}

void GameObject::Initalize()
{
}

void GameObject::Update(GameTime& time)
{
    printf("hello");
}

void GameObject::Draw(GameTime& time)
{
}