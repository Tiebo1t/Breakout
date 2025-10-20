#include "PowerupFreePaddle.h"

PowerupFreePaddle::PowerupFreePaddle(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(ballEffectsColour);
}

PowerupFreePaddle::~PowerupFreePaddle()
{
}

std::pair<POWERUPS, float> PowerupFreePaddle::applyEffect()
{
    _paddle->setFreeMove();
    return { freePaddle, 7.0f };
}
