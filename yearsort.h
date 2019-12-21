#ifndef YEARSORT_H_INCLUDED
#define YEARSORT_H_INCLUDED
#include <iostream>

#include "yearcalender.h"
using namespace std;

//FUNCTION PROTOTYPE
void yearcalender(int,sf::RenderWindow &cwindow);

void yearsort(sf::RenderWindow &cwindow)
    {
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );


    switch(timeinfo->tm_year)
        {
            case 117:
                yearcalender(2017,cwindow);
            break;

            case 118:
                yearcalender(2018,cwindow);
            break;

        }
    }

#endif // YEARSORT_H_INCLUDED
