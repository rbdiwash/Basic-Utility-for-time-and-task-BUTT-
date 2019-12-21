#ifndef AUDIO_H_INCLUDED
#define AUDIO_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include<time.h>




void playaudio()
{

time_t rawtime;
struct tm * timeinfo;
time ( &rawtime );
timeinfo = localtime ( &rawtime );

 sf::Music bgn[125];
sf::Music music;
music.openFromFile("bgn.ogg");
music.play();

    bgn[0].openFromFile("audios/speech.ogg");
    bgn[1].openFromFile("audios/sunday.ogg");
    bgn[2].openFromFile("audios/monday.ogg");
    bgn[3].openFromFile("audios/tuesday.ogg");
    bgn[4].openFromFile("audios/wednesday.ogg");
    bgn[5].openFromFile("audios/thursday.ogg");
    bgn[6].openFromFile("audios/friday.ogg");
    bgn[7].openFromFile("audios/saturday.ogg");
    bgn[8].openFromFile("audios/1.ogg");
    bgn[9].openFromFile("audios/2.ogg");
    bgn[10].openFromFile("audios/3.ogg");
    bgn[11].openFromFile("audios/4.ogg");
    bgn[12].openFromFile("audios/5.ogg");
    bgn[13].openFromFile("audios/6.ogg");
    bgn[14].openFromFile("audios/7.ogg");
    bgn[15].openFromFile("audios/8.ogg");
    bgn[16].openFromFile("audios/9.ogg");
    bgn[17].openFromFile("audios/10.ogg");
    bgn[18].openFromFile("audios/11.ogg");
    bgn[19].openFromFile("audios/12.ogg");
    bgn[20].openFromFile("audios/13.ogg");
    bgn[21].openFromFile("audios/14.ogg");
    bgn[22].openFromFile("audios/15.ogg");
    bgn[23].openFromFile("audios/16.ogg");
    bgn[24].openFromFile("audios/17.ogg");
    bgn[25].openFromFile("audios/18.ogg");
    bgn[26].openFromFile("audios/19.ogg");
    bgn[27].openFromFile("audios/20.ogg");
    bgn[28].openFromFile("audios/21.ogg");
    bgn[29].openFromFile("audios/22.ogg");
    bgn[30].openFromFile("audios/23.ogg");
    bgn[31].openFromFile("audios/24.ogg");
    bgn[32].openFromFile("audios/25.ogg");
    bgn[33].openFromFile("audios/26.ogg");
    bgn[34].openFromFile("audios/27.ogg");
    bgn[35].openFromFile("audios/28.ogg");
    bgn[36].openFromFile("audios/29.ogg");
    bgn[37].openFromFile("audios/30.ogg");
    bgn[38].openFromFile("audios/31.ogg");
    bgn[39].openFromFile("audios/32.ogg");
    bgn[40].openFromFile("audios/33.ogg");
    bgn[41].openFromFile("audios/34.ogg");
    bgn[42].openFromFile("audios/35.ogg");
    bgn[43].openFromFile("audios/36.ogg");
    bgn[44].openFromFile("audios/37.ogg");
    bgn[45].openFromFile("audios/38.ogg");
    bgn[46].openFromFile("audios/39.ogg");
    bgn[47].openFromFile("audios/40.ogg");
    bgn[48].openFromFile("audios/41.ogg");
    bgn[49].openFromFile("audios/42.ogg");
    bgn[50].openFromFile("audios/43.ogg");
    bgn[51].openFromFile("audios/44.ogg");
    bgn[52].openFromFile("audios/45.ogg");
    bgn[53].openFromFile("audios/46.ogg");
    bgn[54].openFromFile("audios/47.ogg");
    bgn[55].openFromFile("audios/48.ogg");
    bgn[56].openFromFile("audios/49.ogg");
    bgn[57].openFromFile("audios/50.ogg");
    bgn[58].openFromFile("audios/51.ogg");
    bgn[59].openFromFile("audios/52.ogg");
    bgn[60].openFromFile("audios/53.ogg");
    bgn[61].openFromFile("audios/54.ogg");
    bgn[62].openFromFile("audios/55.ogg");
    bgn[63].openFromFile("audios/56.ogg");
    bgn[64].openFromFile("audios/57.ogg");
    bgn[65].openFromFile("audios/58.ogg");
    bgn[66].openFromFile("audios/59.ogg");
    bgn[67].openFromFile("audios/it is.ogg");
    bgn[68].openFromFile("audios/now.ogg");
    bgn[69].openFromFile("audios/2016.ogg");
    bgn[70].openFromFile("audios/2017.ogg");
    bgn[71].openFromFile("audios/2018.ogg");
    bgn[72].openFromFile("audios/2019.ogg");
    bgn[73].openFromFile("audios/2020.ogg");
    bgn[74].openFromFile("audios/2021.ogg");
    bgn[75].openFromFile("audios/2022.ogg");
    bgn[76].openFromFile("audios/2023.ogg");
    bgn[77].openFromFile("audios/2024.ogg");
    bgn[78].openFromFile("audios/2025.ogg");
    bgn[79].openFromFile("audios/2026.ogg");
    bgn[80].openFromFile("audios/2027.ogg");
    bgn[81].openFromFile("audios/2028.ogg");
    bgn[82].openFromFile("audios/2029.ogg");
    bgn[83].openFromFile("audios/2030.ogg");
    bgn[84].openFromFile("audios/2031.ogg");
    bgn[85].openFromFile("audios/2032.ogg");
    bgn[86].openFromFile("audios/2033.ogg");
    bgn[87].openFromFile("audios/2034.ogg");
    bgn[88].openFromFile("audios/2035.ogg");
    bgn[89].openFromFile("audios/womens.ogg");
    bgn[90].openFromFile("audios/newyear.ogg");
    bgn[91].openFromFile("audios/christmas.ogg");
    bgn[92].openFromFile("audios/aids.ogg");
    bgn[93].openFromFile("audios/aprilsfool.ogg");
    bgn[94].openFromFile("audios/boxing.ogg");
    bgn[95].openFromFile("audios/easter.ogg");
    bgn[96].openFromFile("audios/eid.ogg");
    bgn[97].openFromFile("audios/environment.ogg");
    bgn[98].openFromFile("audios/father.ogg");
    bgn[99].openFromFile("audios/friendship.ogg");
    bgn[100].openFromFile("audios/halloween.ogg");
    bgn[101].openFromFile("audios/holi.ogg");
    bgn[102].openFromFile("audios/labours.ogg");
    bgn[103].openFromFile("audios/mothers.ogg");
    bgn[104].openFromFile("audios/pancake.ogg");
    bgn[105].openFromFile("audios/valentines.ogg");
    bgn[106].openFromFile("audios/chinese.ogg");
    bgn[107].openFromFile("audios/children.ogg");
    bgn[108].openFromFile("audios/January.ogg");
    bgn[109].openFromFile("audios/february.ogg");
    bgn[110].openFromFile("audios/March.ogg");
    bgn[111].openFromFile("audios/April.ogg");
    bgn[112].openFromFile("audios/May.ogg");
    bgn[113].openFromFile("audios/June.ogg");
    bgn[114].openFromFile("audios/July.ogg");
    bgn[115].openFromFile("audios/August.ogg");
    bgn[116].openFromFile("audios/September.ogg");
    bgn[117].openFromFile("audios/October.ogg");
    bgn[118].openFromFile("audios/November.ogg");
    bgn[119].openFromFile("audios/December.ogg");
    bgn[120].openFromFile("audios/am.ogg");
    bgn[121].openFromFile("audios/pm.ogg");

    bgn[67].play();
/*
    int audio=11;


    if (audio==1){


       switch(timeinfo->tm_hour)
       {
            case 0:
            case 12:
            case 24:
           bgn[19].play();
            break;
            case 1:
            case 13:
           bgn[8].play();
            break;
            case 2:
            case 14:
           bgn[9].play();
            break;
            case 3:
            case 15:
           bgn[10].play();
            break;
            case 4:
            case 16:
           bgn[11].play();
            break;
            case 5:
            case 17:
           bgn[12].play();
            break;
            case 6:
            case 18:
           bgn[13].play();
            break;
            case 7:
            case 19:
           bgn[14].play();
            break;
            case 8:
            case 20:
           bgn[15].play();
            break;
            case 9:
            case 21:
           bgn[16].play();
            break;
            case 10:
            case 22:
           bgn[17].play();
            break;
            case 11:
            case 23:
           bgn[18].play();
            break;

       }
   // ++audio;
    }


    if (audio==2){

    {
                switch (timeinfo->tm_min)
        {
            case 1:
           bgn[8].play();
            break;
            case 2:
           bgn[9].play();
            break;
            case 3:
           bgn[10].play();
            break;
            case 4:
           bgn[11].play();
            break;
            case 5:
           bgn[12].play();
            break;
            case 6:
           bgn[13].play();
            break;
            case 7:
           bgn[14].play();
            break;
            case 8:
           bgn[15].play();
            break;
            case 9:
           bgn[16].play();
            break;
            case 10:
           bgn[17].play();
            break;
            case 11:
           bgn[18].play();
            break;
            case 12:
           bgn[19].play();
            break;
            case 13:
           bgn[20].play();
            break;
            case 14:
           bgn[21].play();
            break;
            case 15:
           bgn[22].play();
            break;
            case 16:
           bgn[23].play();
            break;
            case 17:
           bgn[24].play();
            break;
            case 18:
           bgn[25].play();
            break;
            case 19:
           bgn[26].play();
            break;
            case 20:
           bgn[27].play();
            break;
            case 21:
           bgn[28].play();
            break;
            case 22:
           bgn[29].play();
            break;
            case 23:
           bgn[30].play();
            break;
            case 24:
           bgn[31].play();
            break;
            case 25:
           bgn[32].play();
            break;
            case 26:
           bgn[33].play();
            break;
            case 27:
           bgn[34].play();
            break;
            case 28:
           bgn[35].play();
            break;
            case 29:
           bgn[36].play();
            break;
            case 30:
           bgn[37].play();
            break;
            case 31:
           bgn[38].play();
            break;
            case 32:
           bgn[39].play();
            break;
            case 33:
           bgn[40].play();
            break;
            case 34:
           bgn[41].play();
            break;
            case 35:
           bgn[42].play();
            break;
            case 36:
           bgn[43].play();
            break;
            case 37:
           bgn[44].play();
            break;
            case 38:
           bgn[45].play();
            break;
            case 39:
           bgn[46].play();
            break;
            case 40:
           bgn[47].play();
            break;
            case 41:
           bgn[48].play();
            break;
            case 42:
           bgn[49].play();
            break;
            case 43:
           bgn[50].play();
            break;
            case 44:
           bgn[51].play();
            break;
            case 45:
           bgn[52].play();
            break;
            case 46:
           bgn[53].play();
            break;
            case 47:
           bgn[54].play();
            break;
            case 48:
           bgn[55].play();
            break;
            case 49:
           bgn[56].play();
            break;
            case 50:
           bgn[57].play();
            break;
            case 51:
           bgn[58].play();
            break;
            case 52:
           bgn[59].play();
            break;
            case 53:
           bgn[60].play();
            break;
            case 54:
           bgn[61].play();
            break;
            case 55:
           bgn[62].play();
            break;
            case 56:
           bgn[63].play();
            break;
            case 57:
           bgn[64].play();
            break;
            case 58:
           bgn[65].play();
            break;
            case 59:
           bgn[66].play();
            break;



        }

        ++audio;
    }

    if (audio==3)
    {

            if (timeinfo->tm_hour>0 && timeinfo->tm_hour<12 || timeinfo->tm_hour==24)
               bgn[120].play();
            else
               bgn[121].play();
            audio++;
        }


if (audio==4)
    {

                switch (timeinfo->tm_wday)
                       {
                           case 1:
                          bgn[1].play();
                           break;
                           case 2:
                          bgn[2].play();
                           break;
                           case 3:
                          bgn[3].play();
                           break;
                           case 4:
                          bgn[4].play();
                           break;
                           case 5:
                          bgn[5].play();
                           break;
                           case 6:
                          bgn[6].play();
                           break;
                           case 7:
                          bgn[7].play();
                           break;

                   }
                    ++audio;
        }

if (audio==5)
    {
          switch (timeinfo->tm_mon)
                {
                    case 1:
                   bgn[108].play();
                    break;
                    case 2:
                   bgn[109].play();
                    break;
                    case 3:
                   bgn[110].play();
                    break;
                    case 4:
                   bgn[111].play();
                    break;
                    case 5:
                   bgn[112].play();
                    break;
                    case 6:
                   bgn[113].play();
                    break;
                    case 7:
                   bgn[114].play();
                    break;
                    case 8:
                   bgn[115].play();
                    break;
                    case 9:
                   bgn[116].play();
                    break;
                    case 10:
                   bgn[117].play();
                    break;
                    case 11:
                   bgn[118].play();
                    break;
                    case 12:
                   bgn[119].play();
                    break;
                }
        ++audio;
        }

if (audio==6)
    {

                switch (timeinfo->tm_mday)
                {
            case 1:
           bgn[8].play();
            break;
            case 2:
           bgn[9].play();
            break;
            case 3:
           bgn[10].play();
            break;
            case 4:
           bgn[11].play();
            break;
            case 5:
           bgn[12].play();
            break;
            case 6:
           bgn[13].play();
            break;
            case 7:
           bgn[14].play();
            break;
            case 8:
           bgn[15].play();
            break;
            case 9:
           bgn[16].play();
            break;
            case 10:
           bgn[17].play();
            break;
            case 11:
           bgn[18].play();
            break;
            case 12:
           bgn[19].play();
            break;
            case 13:
           bgn[20].play();
            break;
            case 14:
           bgn[21].play();
            break;
            case 15:
           bgn[22].play();
            break;
            case 16:
           bgn[23].play();
            break;
            case 17:
           bgn[24].play();
            break;
            case 18:
           bgn[25].play();
            break;
            case 19:
           bgn[26].play();
            break;
            case 20:
           bgn[27].play();
            break;
            case 21:
           bgn[28].play();
            break;
            case 22:
           bgn[29].play();
            break;
            case 23:
           bgn[30].play();
            break;
            case 24:
           bgn[31].play();
            break;
            case 25:
           bgn[32].play();
            break;
            case 26:
           bgn[33].play();
            break;
            case 27:
           bgn[34].play();
            break;
            case 28:
           bgn[35].play();
            break;
            case 29:
           bgn[36].play();
            break;
            case 30:
           bgn[37].play();
            break;
            case 31:
           bgn[38].play();
            break;
            }
            ++audio;
        }

if (audio==7)
    {


                switch (timeinfo->tm_year)
            {
                case 2016:
               bgn[69].play();
                break;
                case 2017:
               bgn[70].play();
                break;
                case 2018:
               bgn[71].play();
                break;
                case 2019:
               bgn[72].play();
                break;
                case 2020:
               bgn[73].play();
                break;
                case 2021:
               bgn[74].play();
                break;
                case 2022:
               bgn[75].play();
                break;
                case 2023:
               bgn[76].play();
                break;
                case 2024:
               bgn[77].play();
                break;
                case 2025:
               bgn[78].play();
                break;
                case 2026:
               bgn[79].play();
                break;
        }
        audio++;
    }
}

if (audio==8)
{

        if(timeinfo->tm_mon==1 && timeinfo->tm_mday==1)
        {
           bgn[90].play();
            audio++;

        }
        if(timeinfo->tm_mon==2 &&timeinfo->tm_mday==8)
        {
           bgn[106].play();
            audio=0;
        }
        if(timeinfo->tm_mon==2 && timeinfo->tm_mday==9)
        {
           bgn[104].play();
            audio=0;
        }
        if(timeinfo->tm_mon==2 && timeinfo->tm_mday==14)
        {
           bgn[105].play();
            audio=0;
        }
        if(timeinfo->tm_mon==3 && timeinfo->tm_mday==6)
        {
           bgn[103].play();
            audio=0;
        }
        if(timeinfo->tm_mon==3 && timeinfo->tm_mday==8)
        {
           bgn[89].play();
            audio=0;
        }
        if(timeinfo->tm_mon==3 && timeinfo->tm_mday==23)
        {
           bgn[101].play();
            audio=0;
        }
        if(timeinfo->tm_mon==3 && (timeinfo->tm_mday==25 || timeinfo->tm_mday==26 || timeinfo->tm_mday==27 ||timeinfo->tm_mday==28))
        {
           bgn[95].play();
            audio=0;
        }
        if(timeinfo->tm_mon==4 && timeinfo->tm_mday==1)
        {
           bgn[93].play();
            audio=0;
        }
        if(timeinfo->tm_mon==5 && timeinfo->tm_mday==1)
        {
           bgn[102].play();
            audio=0;
        }
        if(timeinfo->tm_mon==6 && timeinfo->tm_mday==5)
        {
           bgn[97].play();
            audio=0;
        }
        if(timeinfo->tm_mon==6 && timeinfo->tm_mday==19)
        {
           bgn[98].play();
            audio=0;
        }
        if(timeinfo->tm_mon==7 && timeinfo->tm_mday==5)
        {
           bgn[96].play();
            audio=0;
        }
        if(timeinfo->tm_mon==8 && timeinfo->tm_mday==7)
        {
           bgn[99].play();
            audio=0;
        }
        if(timeinfo->tm_mon==10 && timeinfo->tm_mday==31)
        {
           bgn[100].play();
            audio=0;
        }
        if(timeinfo->tm_mon==11 && timeinfo->tm_mday==20)
        {
           bgn[107].play();
            audio=0;
        }
        if(timeinfo->tm_mon==12 && timeinfo->tm_mday==1)
        {
           bgn[92].play();
            audio=0;
        }

        if(timeinfo->tm_mon==12 && timeinfo->tm_mday==26)
        {
           bgn[94].play();
            audio++;

        }
     if(timeinfo->tm_mon==12 && timeinfo->tm_mday>=25 )
        if(timeinfo->tm_mon==12 && timeinfo->tm_mday!=26)
        if(timeinfo->tm_mon==1 && timeinfo->tm_mday!=1)

        {
           bgn[91].play();
            audio=0;
        }
    }

         if (audio==9){

   bgn[91].play();
    audio=0;

    }*/

    }





#endif // AUDIO_H_INCLUDED
