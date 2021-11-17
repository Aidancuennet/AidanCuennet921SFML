

#include <iostream>

#include "SFML/Main.hpp"
#include "SFML/Graphics.hpp"

// GIT ?????

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "The Game");

    // Basic Setup of the window
    // Vertical sync, framerate
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(30);

    while (window.isOpen())
    {
        
        // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
        sf::Event event;

        while (window.pollEvent(event))
        {

            switch (event.type)
            {

                // évènement "fermeture demandée" : on ferme la fenêtre
            case sf::Event::Closed:
                window.close();
                break;

            default:
                break;
            }

        }

        // Graphical Region
        window.clear(sf::Color::Black);


    	//window.draw(something to draw);
        sf::RectangleShape top(sf::Vector2f(120.f, 50.f));
        top.setSize(sf::Vector2f(800, 300));
        top.setPosition(sf::Vector2f(0, 0));
        top.setFillColor(sf::Color(225, 57, 45));
        

        sf::RectangleShape bottom(sf::Vector2f(120.f, 50.f));
        bottom.setSize(sf::Vector2f(800, 300));
        bottom.setPosition(sf::Vector2f(0, 300));
        bottom.setFillColor(sf::Color(0, 12, 138));

        sf::RectangleShape middle(sf::Vector2f(120.f, 50.f));
        middle.setSize(sf::Vector2f(800, 100));
        middle.setPosition(sf::Vector2f(0, 250));
        middle.setOutlineColor(sf::Color(255, 255, 255));
        middle.setOutlineThickness(40.f);
        /*middle.setScale(sf::Vector2f(3.f, 5.f));*/
        middle.setFillColor(sf::Color(0, 120, 71));

        sf::CircleShape triangle(80.f, 3);
        triangle.setScale(sf::Vector2f(5.7, 5.7));
        triangle.setRadius(200.f);
        triangle.scale(sf::Vector2f(0.1, 0.1));
        triangle.setPosition(sf::Vector2f(120, 160));
        triangle.setRotation(90.f);
        triangle.setFillColor(sf::Color(34, 25, 255));
    	
        // Window Display
        window.draw(top);
        window.draw(bottom);
        window.draw(middle);
        window.draw(triangle);
        window.display();

    }

}
