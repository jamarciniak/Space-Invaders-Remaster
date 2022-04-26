#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <random>

class startScreen
{
private:
    sf::Text mainTitle;
    sf::Text secondTitle;
    sf::Font mainFont;
    sf::Text quitText;
public:
    startScreen();
    void showScreen(sf::RenderWindow &window);
};

#endif // STARTSCREEN_H
