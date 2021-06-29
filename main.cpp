#include <iostream>
#include <stdlib.h>
#include <deque>
#include <vector>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif


#include "play_snake.cbp"
#include "play_pong.cbp"
#include "play_roadcrossing.cbp"

using namespace std;


int main()
{

    int ch;
    cout<<" WELCOME TO THE ARCADE"<<endl;
    cout<<"Choose the game you want to play"<<endl;
    cout<<"1 -> Snake Game"<<endl;
    cout<<"2 -> Pong Game"<<endl;
    cout<<"3 -> Road Crossing Game"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"play snake "<<endl;
                iteration1();
                break;

        case 2: cout<<"play pong"<<endl;
                iteration2();
                break;

        case 3: cout<<"play road crossing"<<endl;
                iteration3();
                break;

        default: break;
    }
    return 0;
}
