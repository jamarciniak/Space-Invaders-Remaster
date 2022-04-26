#ifndef BACKGROUND_H
#define BACKGROUND_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class background
{
private:
    sf::Texture backTexture;
    sf::Sprite bground;
public:
    background();
    void setBackground(sf::RenderWindow &window);
    void rotateBackground();
    void drawBackground(sf::RenderWindow &window);
};

#endif // BACKGROUND_H
