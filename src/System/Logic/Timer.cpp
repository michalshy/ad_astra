#include "Timer.hpp"

Timer::Timer() {
    clk = sf::Clock();
}

const void Timer::Init() {
    (void)clk.restart();
}

const sf::Time Timer::GetElapsed() {
    return clk.getElapsedTime();
}

const void Timer::Restart() { 
    dt = clk.restart().asMicroseconds(); 
}

const uint64_t Timer::GetDt() { 
    return dt; }


const void Timer::CheckTimestep() {
    Timer::Restart();
    if(dt > SYSTEM::LOGIC::TIMER::DELTA_STEP)
    {
        dt = 0;
    }
}