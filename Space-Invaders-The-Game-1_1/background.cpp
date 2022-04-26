#include "background.h"

background::background()
{

}

void background::setBackground(sf::RenderWindow &window){
    backTexture.loadFromFile("Textures/star-back.jpg");
    bground.setTexture(backTexture);
    bground.setScale(1.2,1.2);
    bground.setOrigin(backTexture.getSize().x/2,backTexture.getSize().y/2);
    bground.setPosition(window.getSize().x/2,window.getSize().y/2);
}

void background::rotateBackground(){
       bground.rotate(0.25);
}

void background::drawBackground(sf::RenderWindow &window){
    window.draw(bground);
}
