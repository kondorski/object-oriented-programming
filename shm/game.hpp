#pragma once

#include "Time.hpp"

class Game{
public:
    Game(const size_t &start_money, const size_t &game_days, const size_t &final_goal);

    void startGame();

private:
    Time* time_;
    size_t start_money_;
    size_t game_days_;
    size_t final_goal_;
};