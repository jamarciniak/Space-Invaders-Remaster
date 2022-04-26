#ifndef MUSICTHEME_H
#define MUSICTHEME_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class MusicTheme
{
private:
    sf::Music Theme;
    std::string path = "Sounds/prodigy.wav";
public:
    MusicTheme();
    void setMusic();
    void play();
};

#endif // MUSICTHEME_H
