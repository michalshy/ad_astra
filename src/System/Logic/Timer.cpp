#include "Timer.hpp"

Timer::Timer() = default;

void Timer::Init() {
    (void)clk.restart();
}

sf::Time Timer::GetElapsed() {
    return clk.getElapsedTime();
}

void Timer::Restart() { 
    dt = clk.restart().asMicroseconds(); 
}

uint64_t Timer::GetDt() { 
    return dt; }


void Timer::CheckTimestep() {
    Timer::Restart();
    if(dt > SYSTEM::LOGIC::TIMER::DELTA_STEP)
    {
        dt = 0;
    }
}