#include "startscreen.h"
#include "background.h"
#include "musictheme.h"
#include "flags.h"

int main(){
sf::RenderWindow window(sf::VideoMode(1024,768), "Space Invaders by jakub-mar");

background background;
background.setBackground(window);

MusicTheme music;
music.setMusic();
music.play();

window.setFramerateLimit(60);

while (window.isOpen()) {


    background.drawBackground(window);
    background.rotateBackground();

    sf::Event event;
    while (window.pollEvent(event)) {
        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed or sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            if(isStartScreen==1)
                window.close();
    }

    if (isStartScreen==1){
        startScreen start;
        start.showScreen(window);
    };

    window.display();
}

    return 0;
}
