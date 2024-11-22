#ifndef __TIMER_HPP__
#define __TIMER_HPP__

#include "SFML/System.hpp"
#include "../../Globals.hpp"

class Timer {
    static sf::Clock clk ;
    static uint64_t dt;
    
public:
    Timer();
    static void CheckTimestep();
    static void Init();
    static sf::Time GetElapsed();
    static void Restart();
    static uint64_t GetDt();
};


#endif //__TIMER_HPP__