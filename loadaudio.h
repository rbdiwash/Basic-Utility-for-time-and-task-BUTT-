#ifndef LOADAUDIO_H_INCLUDED
#define LOADAUDIO_H_INCLUDED
#include <iostream>
#include <SFML/Graphics.hpp>

void loadaudio(){
sf::Music music;
music.openFromFile("audios/it is.ogg");


music.play();
music.setLoop(true);


}


#endif // LOADAUDIO_H_INCLUDED
