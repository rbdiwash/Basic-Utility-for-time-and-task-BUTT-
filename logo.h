
//REWUIRED LIBRARIES
#include <iostream>
#include<time.h>
#include <SFML/Graphics.hpp>
#include "mainscreen.h"//INCLUDING MAINSCREEN IN THE LOGO WINDOW

using namespace std;

void loadmainscreen();

void loadlogo()
{

    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Basic Utility For Time and Task");

    window.setFramerateLimit(120);//FRAME PER SECOND LIMIT

    sf::Texture logotexture;//SYSTEM VARIABLES
    sf::Music music;


    logotexture.loadFromFile("logo.bmp");//LOADING AN IMAGE IN THE TEXTURE
    sf::Sprite sprite(logotexture);
    music.openFromFile("bgn.ogg");//LOADING A MUSIC AUDIO

    music.play();


    while (window.isOpen())//MAIN LOOP EVENT
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed://EVENT FOR CLOSING THE WINDOW
                    window.close();
                break;
            }
        }

        window.clear();
        window.draw(sprite);
        window.display();

        sf::sleep(sf::seconds(0.5));//DELAY THE CLOSING OF THE WINDOW


        music.pause();//STOP PLAYING THE MUSIC
        window.close();//CLOSING THE WINDOW
        window.clear();

        loadmainscreen();


    }

}

