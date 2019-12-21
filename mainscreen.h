#ifndef MAINSCREEN_H_INCLUDED
#define MAINSCREEN_H_INCLUDED
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

//INCLUDING HEADER FILES
#include"events.h"
#include"monthsorting.h"
#include "yearsort.h"
#include "database.h"




using namespace std;

//FUNCTION PROTOTYPES
    void loadcalenderevent();
    void monthsort();
    void yearsort();
    void loaddatabase();
    void loadmusic();


void loadmainscreen()
{

    sf::RenderWindow cwindow(sf::VideoMode(1366,720), "Main Calender");
    cwindow.setFramerateLimit(120);

    int isPlaying = 0;

    //SYSTEM VARIABLES
    sf::Font font;
    sf::Music speech;
    sf::Music music[4];
    sf::String sentence;
    sf::Texture nmtexture;
    sf::Texture nytexture;
    sf::String nmsentence;
    sf::String nysentence;
    sf::Texture maintexture;
    sf::Texture audiotexture;
    sf::Texture mainscreentexture;
    sf::Texture eventscreentexture;

    //speech.openFromFile("speech.ogg");
    //speech.play();

    //LOADING SYSTEM TIME
        time_t rawtimeS;
        struct tm * timeinfoS;
        time ( &rawtimeS );
        timeinfoS = localtime ( &rawtimeS );


 //LOADING MAINSCREEN IMAGE
    mainscreentexture.loadFromFile("mainscreen.bmp");
    sf::Sprite msprite(mainscreentexture);
    msprite.setPosition(sf::Vector2f(324,130));

//LOADING EVENT SCREEN
    eventscreentexture.loadFromFile("eventscreen.jpg");
    sf::Sprite esprite(eventscreentexture);
    esprite.setPosition(sf::Vector2f(324,207));
    maintexture.loadFromFile("maintexture.jpg");
    sf::Sprite mainsprite(maintexture);

//LOADING IMAGE FOR AUDIO BUTTON
    audiotexture.loadFromFile("audio.jpg");
    sf::Sprite asprite(audiotexture);
    asprite.setPosition(sf::Vector2f(977,127));

//LOADING TEXTS FOR MAVIGATING MONTH
    nmtexture.loadFromFile("navigatemonth.jpg");
    sf::Sprite nmsprite(nmtexture);
    nmsprite.setPosition(sf::Vector2f(324,500));

//LOADING TEXTS FOR NAVIGATING YEAR
    nytexture.loadFromFile("navigateyear.jpg");
    sf::Sprite nysprite(nytexture);
    nysprite.setPosition(sf::Vector2f(640,500));

//LOADING FONT
    font.loadFromFile("orbitron-black.otf");

//LOADING SYTEM TIME TO SFML WINDOW
    sf::Text text(sentence,font,40);
    text.setColor(sf::Color(60,151,245));



//LOADING TEXTS
    sf::Text nmtext(nmsentence,font,20);
    nmtext.setColor(sf::Color(126,185,246));
    sf::Text nytext(nysentence,font,20);
    nytext.setColor(sf::Color(126,185,246));


music[0].openFromFile("audios/todayis.ogg");

//LOADING AUDIO FOR A MONTH
switch(timeinfoS->tm_mon)
{

    case 0:
        music[1].openFromFile("audios/january.ogg");
    break;

    case 1:
        music[1].openFromFile("audios/february .ogg");
    break;

    case 2:
        music[1].openFromFile("audios/march.ogg");
    break;

    case 3:
        music[1].openFromFile("audios/april.ogg");
    break;

    case 4:
        music[1].openFromFile("audios/may.ogg");
    break;

    case 5:
        music[1].openFromFile("audios/june.ogg");
    break;

    case 6:
        music[1].openFromFile("audios/july.ogg");
    break;

    case 7:
        music[1].openFromFile("audios/august.ogg");
    break;

    case 8:
        music[1].openFromFile("audios/september.ogg");
    break;

    case 9:
        music[1].openFromFile("audios/october.ogg");
    break;

    case 10:
        music[1].openFromFile("audios/novermber.ogg");
    break;

    case 11:
        music[1].openFromFile("audios/december.ogg");
    break;
}

//LOADING AUDIO FOR AN INDIVIDUAL MONTH DAY
switch(timeinfoS->tm_mday){


    case 1:
        music[2].openFromFile("audios/1.ogg");
    break;

    case 2:
        music[2].openFromFile("audios/2 .ogg");
    break;

    case 3:
        music[2].openFromFile("audios/3.ogg");
    break;

    case 4:
        music[2].openFromFile("audios/4.ogg");
    break;

    case 5:
        music[2].openFromFile("audios/5.ogg");
    break;

    case 6:
        music[2].openFromFile("audios/6.ogg");
    break;

    case 7:
        music[2].openFromFile("audios/7.ogg");
    break;

    case 8:
        music[2].openFromFile("audios/8.ogg");
    break;

    case 9:
        music[2].openFromFile("audios/9.ogg");
        break;

    case 10:
        music[2].openFromFile("audios/10.ogg");
    break;

    case 11:
        music[2].openFromFile("audios/11.ogg");
    break;

    case 12:
        music[2].openFromFile("audios/12.ogg");
    break;

    case 13:
        music[2].openFromFile("audios/13.ogg");
    break;

    case 14:
        music[2].openFromFile("audios/14.ogg");
    break;

    case 15:
        music[2].openFromFile("audios/15.ogg");
    break;

    case 16:
        music[2].openFromFile("audios/16.ogg");
    break;

    case 17:
        music[2].openFromFile("audios/17.ogg");
    break;

    case 18:
        music[2].openFromFile("audios/18.ogg");
    break;

    case 19:
        music[2].openFromFile("audios/19.ogg");
    break;

    case 20:
        music[2].openFromFile("audios/20.ogg");
    break;

    case 21:
        music[2].openFromFile("audios/21.ogg");
    break;

    case 22:
        music[2].openFromFile("audios/22.ogg");
    break;

    case 23:
        music[2].openFromFile("audios/23.ogg");
    break;

    case 24:
        music[2].openFromFile("audios/24.ogg");
    break;

    case 25:
        music[2].openFromFile("audios/25.ogg");
    break;

    case 26:
        music[2].openFromFile("audios/26.ogg");
    break;

    case 27:
        music[2].openFromFile("audios/27.ogg");
    break;

    case 28:
        music[2].openFromFile("audios/28.ogg");
    break;

    case 29:
        music[2].openFromFile("audios/29.ogg");
    break;

    case 30:
        music[2].openFromFile("audios/30.ogg");
    break;

    case 31:
        music[2].openFromFile("audios/31.ogg");
    break;
}

//LOADING AUDIO FOR A YEAR
switch(timeinfoS->tm_year)
{

    case 117:
        music[3].openFromFile("audios/2017.ogg");
    break;
    case 118:
        music[3].openFromFile("audios/2018.ogg");
    break;

}





int a;
int i = 0;
    while (cwindow.isOpen())
    {
        sf::Event event;
        while (cwindow.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    cwindow.close();
                break;

            // case sf::Event::KeyPressed:
                // if(event.key.code==sf::Keyboard::Space)
                case sf::Event::MouseButtonPressed:
                cout<<event.mouseButton.x<<"\t"<<event.mouseButton.y<<endl;

                    if(event.mouseButton.x>977 &&event.mouseButton.x<1064 &&event.mouseButton.y>127 &&event.mouseButton.y<197)
            {
                    //function start
                    a = 1;  //mouse has been clicked
            while(a == 1)
                {  //run until all music has been played
                    if(isPlaying== 0 || (isPlaying == i && music[i-1].getStatus() == 0))
                    {
                        music[i].play();
                        isPlaying++;
                        i++;
                    }

                        if(isPlaying == 4)
                            { //isPlaying == arrayMaxIndex + 1
                        a = 0;          //get out of loop
                        isPlaying = 0;  //reset to first music
                            }
                }
                        i = 0;  //restart from 0(first music)
                        //end function

            }

                else if (event.mouseButton.x>641 &&event.mouseButton.x<941 &&event.mouseButton.y>500 &&event.mouseButton.y<565)
    {
                        cwindow.clear();
                        yearsort(cwindow);
    }


                else if (event.mouseButton.x>323 &&event.mouseButton.x<622 &&event.mouseButton.y>499 &&event.mouseButton.y<565)
    {
                    cwindow.clear();
                    monthsort(cwindow);
    }
                /*if(event.mouseButton.x>515 &&event.mouseButton.x<885 &&event.mouseButton.y>230 &&event.mouseButton.y<410)
    {
                    cwindow.clear();
                    cwindow.close();
                    loadcalenderevent();
    }*/
                    break;
            }
            }
//SYSTEM TIME
    time_t rawtime1;
    struct tm * timeinfo1;
    time ( &rawtime1 );
    timeinfo1 = localtime ( &rawtime1 );
    sentence=asctime (timeinfo1);


    text.setString(sentence);
    text.setPosition(sf::Vector2f(340,137));

    //TEXT OUTPUT IN THE SCREEN
    nmsentence="Navigate Month >";
    nmtext.setString(nmsentence);
    nmtext.setPosition(sf::Vector2f(360,520));

    nysentence="Navigate Year>";
    nytext.setString(nysentence);
    nytext.setPosition(sf::Vector2f(700,520));

    cwindow.clear();
    cwindow.draw(mainsprite);

    //cwindow.draw(msprite);
    //cwindow.draw(esprite);
    cwindow.draw(asprite);
    //cwindow.draw(nmsprite);
    //cwindow.draw(nysprite);
    cwindow.draw(text);
    cwindow.draw(nmtext);
    cwindow.draw(nytext);
    cwindow.display();
}


}




#endif // MAINSCREEN_H_INCLUDED
