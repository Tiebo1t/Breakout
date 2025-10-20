#pragma once
#include "PowerupBase.h"

class PowerupFreePaddle : public PowerupBase
{
public:
    PowerupFreePaddle(sf::RenderWindow* window, Paddle* paddle, Ball* ball);
    ~PowerupFreePaddle();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect
};

