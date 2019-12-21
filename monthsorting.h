#ifndef MONTHSORTING_H_INCLUDED
#define MONTHSORTING_H_INCLUDED
#include <SFML/Graphics.hpp>
#include"calender.h"
#include<iostream>

void loadcalender(int);

void monthsort(sf::RenderWindow &cwindow){

    int x;
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    x=(timeinfo->tm_mon)+1;
    switch(x)
    {
        case 1:
            loadcalender(2017,1,cwindow);
        break;

        case 2:
            loadcalender(2017,2,cwindow);
        break;

        case 3:
            loadcalender(2017,3,cwindow);
        break;

        case 4:
            loadcalender(2017,4,cwindow);
        break;

        case 5:
            loadcalender(2017,5,cwindow);
        break;

        case 6:
            loadcalender(2017,6,cwindow);
        break;

        case 7:
            loadcalender(2017,7,cwindow);
        break;

        case 8:
            loadcalender(2017,8,cwindow);
        break;

        case 9:
            loadcalender(2017,9,cwindow);
        break;

        case 10:
            loadcalender(2017,10,cwindow);
        break;

        case 11:
            loadcalender(2017,11,cwindow);
        break;

        case 12:
            loadcalender(2017,12,cwindow);
        break;



    }














}

#endif // MONTHSORTING_H_INCLUDED
