#include "musictheme.h"

MusicTheme::MusicTheme()
{

}

void MusicTheme::setMusic(){
    Theme.openFromFile("Sounds/prodigy.wav");
    Theme.setLoop(true);
    Theme.setVolume(10);
}
void MusicTheme::play(){
    Theme.play();
}
