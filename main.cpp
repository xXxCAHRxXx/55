#include <SFML/Graphics.hpp>
#include <vector>
#include "world.hpp"
int main()
{
    // int x = 10;
    // int y = 10;

    // sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");
    // sf::RectangleShape shape(sf::Vector2f(10, 10));
    // shape.setFillColor(sf::Color::Green);

    // std::vector<std::vector<int>> arr (60, std::vector<int>(40));
    // for (int i = 0; i < arr.size(); ++i) 
    // {
    //     arr[i][0] = -1;
    //     arr[i][arr[0].size() - 1] = -1;
    // }

    // for (int i = 0; i < arr[0].size(); ++i){
    //     arr[0][i] = -1;
    //     arr[arr.size() - 1][i] = -1;
    // }

    // while (window.isOpen())
    // {
    //     sf::Event event;
    //     while (window.pollEvent(event))
    //     {
    //         if (event.type == sf::Event::Closed)
    //             window.close();
            
    //     }

    //     window.clear();
    //     for(int i = 0 ; i < arr.size(); ++i)
    //     {
    //         int ans_y = 1, ans_x = 1;
    //         for(int j = 0 ; j < arr[i].size(); ++j)
    //         {
    //             if (arr[i][j] == -1) shape.setFillColor(sf::Color::Red);
    //             else shape.setFillColor(sf::Color::Blue);
    //             shape.setPosition(x * i + ans_x * i, y * j + ans_y);
    //             ++ans_y;
    //             window.draw(shape);
    //         }
    //     }
    //     window.display();
    // }


    World world;
    world.draw();
    return 0;
}