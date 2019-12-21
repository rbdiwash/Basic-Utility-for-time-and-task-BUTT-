#ifndef YEARCALENDER_H_INCLUDED
#define YEARCALENDER_H_INCLUDED
#include "calender.h"

void loadcalender();


void yearcalender(int year,sf::RenderWindow &cwindow){

         cwindow.setFramerateLimit(120);

    sf::Font font;
    sf::String ny;
    sf::String py;
    sf::Texture ystexture;

    font.loadFromFile("orbitron-black.otf");

    sf::Text nyt(ny,font,15);
    nyt.setColor(sf::Color(44,127,255));

    sf::Text pyt(py,font,15);
    pyt.setColor(sf::Color(44,127,255));
//sf::RenderWindow yswindow(sf::VideoMode::getDesktopMode(), "Year Wise Sorting",sf::Style::Fullscreen);



    switch(year)
        {
            case 2017:
                ystexture.loadFromFile("2017.jpg");
            break;
            case 2018:
                ystexture.loadFromFile("2018.jpg");
            break;
            case 2019:
                ystexture.loadFromFile("2019.jpg");
            break;

        }
            sf::Sprite yssprite(ystexture);



        while (cwindow.isOpen())
            {
                sf::Event event;
            while (cwindow.pollEvent(event))
                {
                    switch (event.type)
                    {
                        case sf::Event::Closed:
                            cwindow.clear();
                            cwindow.close();
                        break;

                case sf::Event::MouseButtonPressed:

                            event.mouseButton.button==sf::Mouse::Left;
                            cout<<"X:"<<event.mouseButton.x<<"Y:"<<event.mouseButton.y<<endl;


                     //NAVIGATE BETWEEN THE YEARS->NEXT YEAR
                        if(event.mouseButton.x>1000 && event.mouseButton.y>640 &&event.mouseButton.x<1102 &&event.mouseButton.y<690 )
                            {
                                cwindow.clear();
                                yearcalender(year+1,cwindow);
                            }

                    //NAVIGATE BETWEEN THE YEARS->PREVIOUS YEARS
                            if(event.mouseButton.x>200 && event.mouseButton.y>80 &&event.mouseButton.x<260 &&event.mouseButton.y<120 )
                            {
                                cwindow.clear();
                                yearcalender(year-1,cwindow);
                            }

                            //GO BACK TO THE MAINSCREEN
                        if(event.mouseButton.x>1286 && event.mouseButton.x<1357 && event.mouseButton.y<36 && event.mouseButton.y>9)
                            {
                                cwindow.clear();
                                cwindow.close();
                                goback();
                            }

/////YEAR SORTING


//JANUARY

            if(event.mouseButton.x>150 && event.mouseButton.y>109 &&event.mouseButton.x<380 &&event.mouseButton.y<261 )
            {
                cwindow.clear();
                loadcalender(year,1,cwindow);
            }


//FEBRUARY
            if(event.mouseButton.x>414 && event.mouseButton.y>108 &&event.mouseButton.x<630 &&event.mouseButton.y<260 )
                {
                    cwindow.clear();
                    loadcalender(year,2,cwindow);
                }


//MARCH
            if(event.mouseButton.x>672 && event.mouseButton.y>110 &&event.mouseButton.x<899 &&event.mouseButton.y<260 )
                {
                    cwindow.clear();
                    loadcalender(year,3,cwindow);
                }
//APRIL

            if(event.mouseButton.x>946 && event.mouseButton.y>108 &&event.mouseButton.x<1177 &&event.mouseButton.y<264 )
                {
                    cwindow.clear();
                    loadcalender(year,4,cwindow);
                }
//MAY
            if(event.mouseButton.x>148 && event.mouseButton.y>286 &&event.mouseButton.x<370 &&event.mouseButton.y<435 )
                {
                    cwindow.clear();
                    loadcalender(year,5,cwindow);
                }

//JUNE

            if(event.mouseButton.x>410 && event.mouseButton.y>295 &&event.mouseButton.x<642 &&event.mouseButton.y<450 )
                {
                    cwindow.clear();
                    loadcalender(year,6,cwindow);
                }

//JULY
            if(event.mouseButton.x>677 && event.mouseButton.y>292 &&event.mouseButton.x<904 &&event.mouseButton.y<446 )
                {
                    cwindow.clear();
                    loadcalender(year,7,cwindow);
                }

//AUGUST
            if(event.mouseButton.x>945 && event.mouseButton.y>295 &&event.mouseButton.x<1175 &&event.mouseButton.y<445 )
                {
                    cwindow.clear();
                    loadcalender(year,8,cwindow);
                }

//SEPTEMBER
            if(event.mouseButton.x>151 && event.mouseButton.y>458 &&event.mouseButton.x<370 &&event.mouseButton.y<610 )
                {
                    cwindow.clear();
                    loadcalender(year,9,cwindow);
                }

//OCTOBER
            if(event.mouseButton.x>413 && event.mouseButton.y>466 &&event.mouseButton.x<637 &&event.mouseButton.y<618 )
                {
                    cwindow.clear();
                    loadcalender(year,10,cwindow);
                }


//NOVEMBER
            if(event.mouseButton.x>675 && event.mouseButton.y>472 &&event.mouseButton.x<914 &&event.mouseButton.y<623 )
                {
                    cwindow.clear();
                    loadcalender(year,11,cwindow);
                }


//DECEMBER
            if(event.mouseButton.x>951 && event.mouseButton.y>463 &&event.mouseButton.x<1178 &&event.mouseButton.y<624 )
                {
                    cwindow.clear();
                    loadcalender(year,12,cwindow);
                }


                    break;
                    }
                        }
//}


    ny="Next Year >";
    nyt.setString(ny);
    nyt.setPosition(sf::Vector2f(1000,640));

    py="< Previous Year ";
    pyt.setString(py);
    pyt.setPosition(sf::Vector2f(200,80));


    cwindow.clear();
    cwindow.draw(yssprite);
    cwindow.draw(nyt);
    cwindow.draw(pyt);
    cwindow.display();

        }

    }










#endif // YEARCALENDER_H_INCLUDED
