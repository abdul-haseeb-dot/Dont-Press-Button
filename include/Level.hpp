#ifndef LEVEL_HPP
#define LEVEL_HPP

#include "raylib.h"

class Level
{
    private:
    const char* text;
    int time;
    bool shouldPress;
    Color buttonColor;
    Color backgroundColor;

    bool pressButton(const int& levelNumber);
    bool dontPressButton(const int& levelNumber);

    public:
    Level(const char* text,int time,bool shouldPress,Color buttonColor,Color backgroundColor=RAYWHITE);
    bool playLevel(const int& levelNumber);
};

#endif