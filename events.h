#ifndef NEWEVENT_H_INCLUDED
#define NEWEVENT_H_INCLUDED
#include<string>
#include "SFML/Graphics.hpp"
#include<iostream>
#include "goback.h"
#include<fstream>

using namespace std;

void goback();

static string subject;
static string name;
static string date;
static string desc;
static string nameoffile;
static string monthvalue;

static int x;
static int y;

string evname[40];
string evdate[10];
string evsubject[40];
string evdescription;

void loadnewevent(int monthnum){
    ofstream ofile;

    sf::Font font;
    font.loadFromFile("orbitron-black.otf");
    sf::String sentence;
    sf::Text text(sentence,font,28);
    text.setColor(sf::Color(44,127,255));

    sf::String bsentence;
    sf::Text btext(bsentence,font,28);
    btext.setColor(sf::Color(44,127,255));

    sf::Font font2;
    font2.loadFromFile("GaramondPremrPro-ItCapt.otf");

    sf::Font font3;
    font3.loadFromFile("orbitron-light.otf");

    sf::String namesentence;
    sf::Text nametext(namesentence, font3, 22);
    nametext.setColor(sf::Color::Blue);

    sf::String datesentence;
    sf::Text datetext(datesentence, font3, 22);
    datetext.setColor(sf::Color::Blue);


    sf::String subjectsentence;
    sf::Text subjecttext(subjectsentence, font3, 22);
    subjecttext.setColor(sf::Color::Red);

    sf::String descsentence;
    sf::Text desctext(descsentence, font3, 22);
    desctext.setColor(sf::Color::Magenta);

    sf::String neweventword;
    sf::Text neweventpart(neweventword, font2, 29);
    neweventpart.setColor(sf::Color::Red);

    sf::String nword;
    sf::Text npart(nword, font2, 22);
    npart.setColor(sf::Color::Red);

    sf::String dateword;
    sf::Text datepart(dateword, font2, 22);
    datepart.setColor(sf::Color::Red);

    sf::String tword;
    sf::Text tpart(tword,font2,22);
    tpart.setColor(sf::Color::Red);

    sf::String descword;
    sf::Text descpart(descword,font2,22);
    descpart.setColor(sf::Color::Red);


    sf::RenderWindow nevwindow(sf::VideoMode(1366, 768), "New Event", sf::Style::Close);

    sf::Texture nevtexture;
    nevtexture.loadFromFile("newevent.jpg");
    sf::Sprite nevsprite(nevtexture);
    nevsprite.setPosition(sf::Vector2f(0,38));

    nevwindow.setFramerateLimit(120);



    while (nevwindow.isOpen())
    {
        sf::Event event;
        while (nevwindow.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    nevwindow.close();
                    break;

                case sf::Event::MouseButtonPressed:
                    event.mouseButton.button==sf::Mouse::Left;

                    x = event.mouseButton.x; y = event.mouseButton.y;
                    //cout <<x << "\t" << y<<endl;

                if(event.mouseButton.x>1255 && event.mouseButton.y<38)
                {
                    nevwindow.clear();
                    nevwindow.close();
                }

                if(event.mouseButton.x > 1200 && event.mouseButton.x < 1346 && event.mouseButton.y > 728 && event.mouseButton.y < 758)
                {
                    monthvalue = date.substr(0,2);
                    nameoffile="ram.txt";
                    ofile.open(nameoffile.c_str());
                    ofile << date << " *\n" << name << " #\n" << subject<< " $\n"<< desc<< endl;
                    ofile.close();
                    nevwindow.clear();
                    nevwindow.close();
                }

                case sf::Event::TextEntered:
                    if(x > 170 && x < 955)
                    {
                        if(y > 67 && y <105)
                        {
                            if((event.text.unicode >=32 && event.text.unicode <= 126) && namesentence.getSize() < 40)
                            {
                                namesentence+= (char)event.text.unicode;
                                name+= (char)event.text.unicode;
                            }
                            else if(event.text.unicode == 8 && namesentence.getSize()>0)
                            {
                                namesentence.erase(namesentence.getSize()-1, namesentence.getSize());
                                name.erase(name.length()-1, name.length());
                            }
                        }
                        else if(y > 120 && y < 158)
                        {
                            if((event.text.unicode >=32 && event.text.unicode <= 126) && subjectsentence.getSize() < 40)
                            {
                                subjectsentence+= (char)event.text.unicode;
                                subject+= event.text.unicode;
                            }
                            else if(event.text.unicode == 8 && subjectsentence.getSize()>0)
                            {
                                subjectsentence.erase(subjectsentence.getSize()-1, subjectsentence.getSize());
                                subject.erase(subject.length()-1, subject.length());
                            }
                        }

                    }
                     else if(x > 1074 && x< 1346)
                    {

                        if(y > 67 && y < 105)
                        {
                            if(event.text.unicode >= 32 && event.text.unicode <= 126 && datesentence.getSize()< 5)
                            {
                                datesentence+= (char)event.text.unicode;
                                date+= event.text.unicode;
                            }
                            else if(event.text.unicode ==8 && datesentence.getSize()>0)
                            {
                                datesentence.erase(datesentence.getSize()-1, datesentence.getSize());
                                date.erase(date.length()-1, date.length());
                            }
                        }
                    }
                    if(x> 20 && x < 1346)
                    {
                        if(y > 224 && y < 724)
                        {
                            if(event.text.unicode >=32 && event.text.unicode <= 126)
                            {
                                descsentence+= (char)event.text.unicode;
                                desc+= event.text.unicode;
                            }
                            else if(event.text.unicode == 8 && descsentence.getSize()>0)
                            {
                                descsentence.erase(descsentence.getSize()-1, descsentence.getSize());
                                desc.erase(desc.length()-1, desc.length());
                            }
                        }
                    }




                    nametext.setString(namesentence);
                    subjecttext.setString(subjectsentence);
                    desctext.setString(descsentence);
                    datetext.setString(datesentence);
                    nametext.setPosition(175,77);
                    subjecttext.setPosition(175, 130);
                    desctext.setPosition(30, 234);
                    datetext.setPosition(1075,77);
                    break;

            }

        }
    bsentence=" < Back";
    btext.setString(bsentence);
    btext.setPosition(sf::Vector2f(1255,0));

    neweventword = "NEW EVENT";
    neweventpart.setString(neweventword);
    neweventpart.setPosition(sf::Vector2f(20,36));
    nword= "EVENT NAME : ";
    npart.setString(nword);
    npart.setPosition(sf::Vector2f(20,77));

    dateword= "DATE : ";
    datepart.setString(dateword);
    datepart.setPosition(sf::Vector2f(977, 77));

    tword= "SUBJECT : ";
    tpart.setString(tword);
    tpart.setPosition(sf::Vector2f(20,129));
    descword= "EVENT DESCRIPTION : ";
    descpart.setString(descword);
    descpart.setPosition(sf::Vector2f(20,178));



    nevwindow.draw(nevsprite);




    nevwindow.draw(text);
    nevwindow.draw(neweventpart);
    nevwindow.draw(btext);
    nevwindow.draw(npart);
    nevwindow.draw(tpart);
    nevwindow.draw(descpart);
    nevwindow.draw(datepart);




    nevwindow.draw(nametext);
    nevwindow.draw(subjecttext);
    nevwindow.draw(desctext);
    nevwindow.draw(datetext);

    //cout<< name << endl;


    nevwindow.display();
    }
}

#endif // NEWEVENT_H_INCLUDED
