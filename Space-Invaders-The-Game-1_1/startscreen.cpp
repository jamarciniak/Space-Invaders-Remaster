#include "startscreen.h"

startScreen::startScreen(){

};

void startScreen::showScreen(sf::RenderWindow &window)
{
    mainFont.loadFromFile("Fonts/slkscreb.ttf");
    mainTitle.setFont(mainFont);
    mainTitle.setFillColor(sf::Color::White);
    mainTitle.setString("space invaders");
    mainTitle.setCharacterSize(60);
    mainTitle.setOrigin(floor(mainTitle.getLocalBounds().width/2),floor(mainTitle.getLocalBounds().height/2));
    mainTitle.setPosition(window.getSize().x/2,window.getSize().y/2-100);

    secondTitle.setFont(mainFont);
    secondTitle.setFillColor(sf::Color::Yellow);
    secondTitle.setCharacterSize(32);
    secondTitle.setString("press enter to start");
    secondTitle.setOrigin(floor(secondTitle.getLocalBounds().width/2),floor(secondTitle.getLocalBounds().height/2));
    secondTitle.setPosition(window.getSize().x/2,window.getSize().y/2+50);

    quitText.setFont(mainFont);
    quitText.setFillColor(sf::Color::Red);
    quitText.setCharacterSize(18);
    quitText.setString("press esc to quit");
    quitText.setOrigin(floor(quitText.getLocalBounds().width/2),floor(quitText.getLocalBounds().height/2));
    quitText.setPosition(window.getSize().x/2,window.getSize().y/2+350);

    window.draw(mainTitle);
    window.draw(secondTitle);
    window.draw(quitText);
}
