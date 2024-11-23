#include "SFML/Window.hpp"
#include "System/Logic/Timer.hpp"
#include "Graphic/Interactive/Button.hpp"

int main()
{
    Timer tmr = Timer();

    sf::Window window(sf::VideoMode(1280, 800), "My window",
        sf::Style::Close | sf::Style::Titlebar);
    window.setFramerateLimit(1);

    while (window.isOpen())
    {
        // printf("%.15f\n", Timer::GetElapsed().asMicroseconds());
        // printf("%d\n",clock.getElapsedTime().asMilliseconds());
        printf("%d\n", tmr.GetDt());
        
        // printf("%.15f\n", Timer::GetDt().asMicroseconds());
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
       tmr.CheckTimestep();
    }

    return 0;
}