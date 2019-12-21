#ifndef CALENDER_H_INCLUDED
#define CALENDER_H_INCLUDED
#include <SFML/Graphics.hpp>
#include<fstream>
#include<iostream>

#include"goback.h"
#include"database.h"
#include"events.h"

using namespace std;
using namespace sf;

    //FUNCTION PROTOTYPES
    void goback();
    void laodnewevent(int);
    void loaddatabase(int ,int);

void loadcalender(int year,int month,sf::RenderWindow &cwindow){

    sf::Font font;
    sf::String bsentence;
    sf::String ssentence;
    sf::String sentence;
    sf::Texture ctexture;
    sf::Texture btexture;


    font.loadFromFile("orbitron-black.otf");
    sf::Text text(sentence,font,21);
    text.setColor(sf::Color(44,127,255));

    sf::Text btext(bsentence,font,20);
    btext.setColor(sf::Color(44,127,255));

    sf::Text stext(ssentence,font,20);
    stext.setColor(sf::Color(44,127,255));


    //FILE HANDLING->READING A .TXT FIEL FORMAT
    Text spEvents[40];
    ifstream spFile;

    btexture.loadFromFile("background2.jpg");
    sf::Sprite bsprite(btexture);

//sf::RenderWindow cawindow(sf::VideoMode::getDesktopMode(), "Month Wise Navigation");
//cawindow.setFramerateLimit(120);


    switch(month)
    {
        case 1:
            if (year==2017)
                {ctexture.loadFromFile("months/january.jpg");
                spFile.open("SpecialEvents/jan.txt");}

            else if (year==2018)
                {ctexture.loadFromFile("2018-months/18january.jpg");
                spFile.open("SpecialEvents/jan.txt");}
        break;

        case 2:
            if (year==2017){
                ctexture.loadFromFile("months/february.jpg");
                spFile.open("SpecialEvents/feb.txt");}

        else if (year==2018){
                spFile.open("SpecialEvents/feb.txt");
                ctexture.loadFromFile("2018-months/18february.jpg");}
        break;

        case 3:

            if (year==2017){
                spFile.open("SpecialEvents/march.txt");
                ctexture.loadFromFile("months/march.jpg");}
        else if (year==2018){
                spFile.open("SpecialEvents/march.txt");
                ctexture.loadFromFile("2018-months/18march.jpg");}
        break;

        case 4:
            if (year==2017){
                ctexture.loadFromFile("months/april.jpg");
                spFile.open("SpecialEvents/april.txt");}
            else if (year==2018){
                ctexture.loadFromFile("2018-months/18april.jpg");
                spFile.open("SpecialEvents/april.txt");}
        break;

        case 5:
            if (year==2017){
                spFile.open("SpecialEvents/may.txt");
                ctexture.loadFromFile("months/may.jpg");}
        else if (year==2018){
                spFile.open("SpecialEvents/may.txt");
                ctexture.loadFromFile("2018-months/18may.jpg");}
        break;

        case 6:
            if (year==2017){
                spFile.open("SpecialEvents/june.txt");
                ctexture.loadFromFile("months/june.jpg");}

            else if (year==2018){
                spFile.open("SpecialEvents/june.txt");
                ctexture.loadFromFile("2018-months/18june.jpg");}
        break;

        case 7:
            if (year==2017){
                spFile.open("SpecialEvents/july.txt");
                ctexture.loadFromFile("months/july.jpg");}
            else if (year==2018){
                spFile.open("SpecialEvents/july.txt");
                ctexture.loadFromFile("2018-months/18july.jpg");}
        break;

        case 8:
            if (year==2017){
                spFile.open("SpecialEvents/aug.txt");
                ctexture.loadFromFile("months/august.jpg");}
            else if (year==2018){
                spFile.open("SpecialEvents/aug.txt");
                ctexture.loadFromFile("2018-months/18august.jpg");}
        break;

        case 9:
            if (year==2017){
                spFile.open("SpecialEvents/sept.txt");
                ctexture.loadFromFile("months/september.jpg");}
        else if (year==2018){
                spFile.open("SpecialEvents/sept.txt");
                ctexture.loadFromFile("2018-months/18september.jpg");}
        break;

        case 10:
            if (year==2017){
                spFile.open("SpecialEvents/oct.txt");
                ctexture.loadFromFile("months/october.jpg");}
        else if (year==2018){
                spFile.open("SpecialEvents/oct.txt");
                ctexture.loadFromFile("2018-months/18october.jpg");}
        break;

        case 11:
            if (year==2017){
                spFile.open("SpecialEvents/nov.txt");
                ctexture.loadFromFile("months/november.jpg");}
        else if (year==2018){
                spFile.open("SpecialEvents/nov.txt");
                ctexture.loadFromFile("2018-months/18november.jpg");}
        break;

        case 12:
            if (year==2017){
                spFile.open("SpecialEvents/dec.txt");
                ctexture.loadFromFile("months/december.jpg");}
        else if (year==2018){
                spFile.open("SpecialEvents/dec.txt");
                ctexture.loadFromFile("2018-months/18december.jpg");}
        break;

        case 13:
                cwindow.clear();
                loadcalender(2018,1,cwindow);

}

//READING THE WHOLE TEXT LINE BY LINE
    string a;
    int posX=8,posY=135;
    int i = 0;
    while(getline(spFile,a))
        {
            spEvents[i].setFont(font);
            spEvents[i].setCharacterSize(14); //Font SIZE
            spEvents[i].setPosition(posX,posY);//font position
            spEvents[i].setString(a);
            posY += 24;
            i++;
        }

    sf::Sprite csprite(ctexture);
    csprite.setPosition(sf::Vector2f(328,8));

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

                case sf::Event::MouseButtonPressed:
                    event.mouseButton.button==sf::Mouse::Left;

                    cout<<"X:"<<event.mouseButton.x<<"Y:"<<event.mouseButton.y<<endl;

//BACK
                if(event.mouseButton.x>1253 && event.mouseButton.x<1334 && event.mouseButton.y<56 && event.mouseButton.y>29)
        {
                    cwindow.clear();
                    cwindow.close();
                    goback();
        }

//LOAD NEXT MONTH
                if(event.mouseButton.x>1209 &&event.mouseButton.x<1350 &&event.mouseButton.y>456 && event.mouseButton.y<516)
        {
                    cwindow.clear();
                    loadcalender(year,month+1,cwindow);
        }

//LOAD PREVIOUS MONTH
                if(event.mouseButton.x>361 &&event.mouseButton.x<495 &&event.mouseButton.y>146 && event.mouseButton.y<207)
        {
                    cwindow.clear();
                    loadcalender(year,month-1,cwindow);
        }

 //LOAD DATABASE ON THE BASIS OF EVENTS POSITION->SPECIAL DAYS
      {

               if(event.mouseButton.x>8 &&event.mouseButton.x<101 &&event.mouseButton.y>138 && event.mouseButton.y<173)
        {
                    cwindow.clear();
                    loaddatabase(year,month,1);
        }
                if(event.mouseButton.x>8 &&event.mouseButton.x<101 &&event.mouseButton.y>208 && event.mouseButton.y<245)
        {
                    cwindow.clear();
                    loaddatabase(year,month,2);
        }
                if(event.mouseButton.x>8 &&event.mouseButton.x<101 &&event.mouseButton.y>280 && event.mouseButton.y<319)
        {
                    cwindow.clear();
                    loaddatabase(year,month,3);
        }
                if(event.mouseButton.x>8 &&event.mouseButton.x<101 &&event.mouseButton.y>356 && event.mouseButton.y<396)
        {
                    cwindow.clear();
                    loaddatabase(year,month,4);
        }
                if(event.mouseButton.x>8 &&event.mouseButton.x<101 &&event.mouseButton.y>426 && event.mouseButton.y<461)
        {
                    cwindow.clear();
                    loaddatabase(year,month,5);
        }
                if(event.mouseButton.x>8 &&event.mouseButton.x<101 &&event.mouseButton.y>496 && event.mouseButton.y<534)
        {
                    cwindow.clear();
                    loaddatabase(year,month,6);
        }

                if(event.mouseButton.x>8 &&event.mouseButton.x<101 &&event.mouseButton.y>534 && event.mouseButton.y<568)
        {
                    cwindow.clear();
                    loaddatabase(year,month,7);
        }

      }

  //LOAD A CALENDER EVENT
                if(event.mouseButton.x>1256 &&event.mouseButton.x<1311 &&event.mouseButton.y>525 && event.mouseButton.y<568)
        {
                    cwindow.clear();
                    loadnewevent(month);
        }


            }
        }




    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    sentence=asctime (timeinfo);

        text.setString(sentence);
        text.setPosition(sf::Vector2f(7,23));

    cwindow.clear();

        bsentence=" << Back";
        btext.setString(bsentence);
        btext.setPosition(sf::Vector2f(1250,25));

    cwindow.draw(bsprite);
    cwindow.draw(csprite);
    cwindow.draw(text);
    cwindow.draw(btext);

    //PRINTING THE TEXTS IN THE SFML WINDOW
        for(int j= 0;j < i; j++)//display text
            {
                cwindow.draw(spEvents[j]);
            }
                cwindow.display();
        }

            cwindow.display();

    }








#endif // CALENDER_H_INCLUDED
