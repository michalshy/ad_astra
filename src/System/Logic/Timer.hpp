#ifndef __TIMER_HPP__
#define __TIMER_HPP__

#include "SFML/System.hpp"
#include "../../Globals.hpp"

class Timer {
    sf::Clock clk ;
    uint64_t dt;
public:
    explicit Timer();
    const void CheckTimestep();
    const void Init();
    const sf::Time GetElapsed();
    const void Restart();
    const uint64_t GetDt();
};


#endif //__TIMER_HPP__