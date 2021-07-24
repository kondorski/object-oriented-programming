#include "game.hpp"

Game::Game(const size_t &start_money, const size_t &game_days, const size_t &final_goal)
    : start_money_(start_money)
    , game_days_(game_days)
    , final_goal_(final_goal)
{}

void Game::startGame()
{
    time_ = new Time();
}