#include <SFML/Graphics.hpp>
#include "world.hpp"

void World::draw(){
    //создание окна
    sf::Window window;
    window.create(sf::VideoMode(1000,500), "My window");

    //жизнь окна
    while (window.isOpen())
    {
        //проверка событий
        sf::Event event;
        while (window.pollEvent(event))
        {
            //закрытие окна
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

        }
    }
};