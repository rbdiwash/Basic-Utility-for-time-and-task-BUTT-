#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED
#include <SFML/Graphics.hpp>

#include<iostream>
#include <fstream>
#include <cstdlib>
#include<string>

/*if(event.mouseButton.x>8 &&event.mouseButton.x<101 &&event.mouseButton.y>(138+26) && event.mouseButton.y<(173+26))
    {
        cwindow.clear();

      loaddatabase(year,month,2);
      }*/

void loaddatabase(int year,int month,int position)
{

sf::RenderWindow dwindow(sf::VideoMode(800,700), "Database");

    sf::Texture dtexture;
    sf::Font font;
    sf::Text spEvents[40];
    ifstream spFile;

    dtexture.loadFromFile("background.jpg");
    sf::Sprite dsprite(dtexture);

    font.loadFromFile("orbitron-black.otf");



    //JANUARY
    {
        if (year==2017 && month==1  && position==1)
            spFile.open("SpecialEvents/Database/jan/1-1.txt");

        if (year==2017 && month==1  && position==2)
            spFile.open("SpecialEvents/Database/jan/1-10.txt");

        if (year==2017 && month==1  && position==3)
            spFile.open("SpecialEvents/Database/jan/1-21.txt");

        if (year==2017 && month==1  && position==4)
            spFile.open("SpecialEvents/Database/jan/1-31.txt");

        if (year==2017 && month==2  && position==1)
            spFile.open("SpecialEvents/Database/feb/2-4.txt");

        if (year==2017 && month==2  && position==2)
            spFile.open("SpecialEvents/Database/feb/2-6.txt");
    }

    //FEBRUARY
    {

        if (year==2017 && month==2  && position==3)
            spFile.open("SpecialEvents/Database/feb/2-13.txt");

        if (year==2017 && month==2 && position==4)
            spFile.open("SpecialEvents/Database/feb/2-14.txt");

        if (year==2017 && month==2  && position==5)
            spFile.open("SpecialEvents/Database/feb/2-20.txt");

        if (year==2017 && month==2  && position==6)
            spFile.open("SpecialEvents/Database/feb/2-21.txt");

}


    //MARCH
    {
        if (year==2017 && month==3  && position==1)
            spFile.open("SpecialEvents/Database/march/3-1.txt");

        if (year==2017 && month==3 && position==2)
            spFile.open("SpecialEvents/Database/march/3-3.txt");

        if (year==2017 && month==3  && position==3)
            spFile.open("SpecialEvents/Database/march/3-8.txt");

        if (year==2017 && month==3 && position==4)
            spFile.open("SpecialEvents/Database/march/3-14.txt");

        if (year==2017 && month==3  && position==5)
            spFile.open("SpecialEvents/Database/march/3-20.txt");

        if (year==2017 && month==3  && position==6)
            spFile.open("SpecialEvents/Database/march/3-22.txt");

        if (year==2017 && month==3  && position==7)
            spFile.open("SpecialEvents/Database/march/3-24.txt");
    }


    //APRIL
       {

        if (year==2017 && month==4  && position==1)
            spFile.open("SpecialEvents/Database/april/4-1.txt");

        if (year==2017 && month==4 && position==2)
            spFile.open("SpecialEvents/Database/april/4-7.txt");

        if (year==2017 && month==4 && position==3)
            spFile.open("SpecialEvents/Database/april/4-25.txt");

        if (year==2017 && month==4 && position==4)
            spFile.open("SpecialEvents/Database/april/4-28.txt");

       }


    //MAY
       {

        if (year==2017 && month==5 && position==1)
            spFile.open("SpecialEvents/Database/may/5-3.txt");

        if (year==2017 && month==5 && position==2)
            spFile.open("SpecialEvents/Database/may/5-4.txt");

        if (year==2017 && month==5  && position==3)
            spFile.open("SpecialEvents/Database/may/5-10.txt");

        if (year==2017 && month==5 && position==4)
            spFile.open("SpecialEvents/Database/may/5-18.txt");

        if (year==2017 && month==5  && position==5)
            spFile.open("SpecialEvents/Database/may/5-31.txt");
       }


    //JUNE
    {
    if (year==2017 && month==6 && position==1)
        spFile.open("SpecialEvents/Database/june/6-1.txt");

    if (year==2017 && month==6 && position==2)
        spFile.open("SpecialEvents/Database/june/6-5.txt");

    if (year==2017 && month==6  && position==3)
        spFile.open("SpecialEvents/Database/june/6-12.txt");

    if (year==2017 && month==6 && position==4)
        spFile.open("SpecialEvents/Database/june/6-20.txt");

    if (year==2017 && month==6  && position==5)
        spFile.open("SpecialEvents/Database/june/6-21.txt");}


    //JULY
    {

    if (year==2017 && month==7  && position==1)
        spFile.open("SpecialEvents/Database/july/7-11.txt");

    if (year==2017 && month==7 && position==2)
        spFile.open("SpecialEvents/Database/july/7-18.txt");

    if (year==2017 && month==7  && position==3)
        spFile.open("SpecialEvents/Database/july/7-28.txt");

    if (year==2017 && month==7 && position==4)
        spFile.open("SpecialEvents/Database/july/7-30.txt");
    }



    //AUGUST
    {

    if (year==2017 && month==8  && position==1)
        spFile.open("SpecialEvents/Database/Aug/8-6.txt");

    if (year==2017 && month==8  && position==2)
        spFile.open("SpecialEvents/Database/Aug/8-12.txt");

    if (year==2017 && month==8  && position==3)
        spFile.open("SpecialEvents/Database/Aug/8-19.txt");

    if (year==2017 && month==8  && position==4)
        spFile.open("SpecialEvents/Database/Aug/8-29.txt");}


    //SEPTEMBER
    {


    if (year==2017 && month==9  && position==1)
        spFile.open("SpecialEvents/Database/sep/9-4.txt");

    if (year==2017 && month==9  && position==2)
        spFile.open("SpecialEvents/Database/sep/9-8.txt");

    if (year==2017 && month==9  && position==3)
        spFile.open("SpecialEvents/Database/sep/9-15.txt");

    if (year==2017 && month==9  && position==4)
        spFile.open("SpecialEvents/Database/sep/9-16.txt");

    if (year==2017 && month==9  && position==5)
        spFile.open("SpecialEvents/Database/sep/9-27.txt");

    if (year==2017 && month==9  && position==6)
        spFile.open("SpecialEvents/Database/sep/9-28.txt");}


    //OCTOBER
    {


    if (year==2017 && month==10  && position==1)
        spFile.open("SpecialEvents/Database/oct/10-2.txt");

    if (year==2017 && month==10  && position==2)
        spFile.open("SpecialEvents/Database/oct/10-16.txt");

    if (year==2017 && month==10  && position==3)
        spFile.open("SpecialEvents/Database/oct/10-24.txt");

    if (year==2017 && month==10  && position==4)
        spFile.open("SpecialEvents/Database/oct/10-27.txt");}

    //NOVERMBER
    {


    if (year==2017 && month==11  && position==1)
        spFile.open("SpecialEvents/Database/nov/11-14.txt");

    if (year==2017 && month==11  && position==2)
        spFile.open("SpecialEvents/Database/nov/11-16.txt");

    if (year==2017 && month==11  && position==3)
        spFile.open("SpecialEvents/Database/nov/11-20.txt");

    if (year==2017 && month==11  && position==4)
        spFile.open("SpecialEvents/Database/nov/11-29.txt");}


    //DECEMBER
    {


    if (year==2017 && month==12  && position==1)
        spFile.open("SpecialEvents/Database/dec/12-1.txt");

    if (year==2017 && month==12  && position==2)
        spFile.open("SpecialEvents/Database/dec/12-10.txt");

    if (year==2017 && month==12  && position==3)
        spFile.open("SpecialEvents/Database/dec/12-25.txt");

    if (year==2017 && month==12  && position==4)
        spFile.open("SpecialEvents/Database/dec/12-31.txt");}

        string a;
        int posX=8,posY=135;
        int i = 0;
            //READ LINE FROM THE TEXTS
            while(getline(spFile,a))
            {
                spEvents[i].setFont(font);
                spEvents[i].setCharacterSize(14); //Font SIZE
                spEvents[i].setPosition(posX,posY);//font position
                spEvents[i].setString(a);
                posY += 24;
                i++;
            }

            for(int j= 0;j < i; j++)//display text
            {
                dwindow.draw(spEvents[j]);
            }
        dwindow.display();



//WINDOWS MAIN LOOP EVENT

    while (dwindow.isOpen())
    {
            sf::Event event;
        while (dwindow.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    dwindow.close();
            }

        }



            for(int j= 0;j < i; j++)//display text
            {
                dwindow.draw(spEvents[j]);
            }
        dwindow.display();
        dwindow.draw(dsprite);

    }
        dwindow.display();


}


#endif // DATABASE_H_INCLUDED
