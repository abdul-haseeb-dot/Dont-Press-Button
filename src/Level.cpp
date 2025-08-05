#include "Level.hpp"
#include "utils.hpp"
#include<cmath>
#include<cstdio>

Level::Level(const char* text,int time,bool shouldPress,Color buttonColor,Color backgroundColor) : text(text),time(time),shouldPress(shouldPress),buttonColor(buttonColor),backgroundColor(backgroundColor) {}

bool Level::pressButton(const int& levelNumber)
{
    double startTime=GetTime();
    bool levelEnded=false;
    bool levelPassed=false;

    while(!levelEnded && !WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(backgroundColor);
        if (!levelEnded)
        {
            double elapsedTime=GetTime()-startTime;
            int remainingTime=(int)(time-elapsedTime);

            char timerText[64];
            sprintf(timerText,"%02d:%02d",remainingTime/60,remainingTime%60);
            centralizedText(TIMER_HEIGHT,timerText,TIMER_FONT,BLACK);

            char levelText[64];
            sprintf(levelText,"Level: %02d",levelNumber);
            centralizedText(LEVEL_HEIGHT,levelText,LEVEL_FONT,DARKBROWN);

            centralizedText(PROMPT_HEIGHT,text,PROMPT_FONT,BLACK);
            drawButton(buttonColor);

            if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                Vector2 position=GetMousePosition();
                double dx=position.x-CIRCLE_X;
                double dy=position.y-CIRCLE_Y;
                double distance=sqrt(dx*dx+dy*dy);
                if(distance<=BUTTON_RADIUS)
                {
                    levelEnded=true;
                    levelPassed=true;
                }
            }

            if(remainingTime<=0)
            {
                levelEnded=true;
            }
        }
        EndDrawing();
    }
    return levelPassed;
}

bool Level::dontPressButton(const int& levelNumber)
{
    double startTime=GetTime();
    bool levelEnded=false;
    bool levelPassed=false;

    while(!levelEnded && !WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(backgroundColor);
        if (!levelEnded)
        {
            double elapsedTime=GetTime()-startTime;
            int remainingTime=(int)(time-elapsedTime);

            char timerText[64];
            sprintf(timerText,"%02d:%02d",remainingTime/60,remainingTime%60);
            centralizedText(TIMER_HEIGHT,timerText,TIMER_FONT,BLACK);

            char levelText[64];
            sprintf(levelText,"Level: %02d",levelNumber);
            centralizedText(LEVEL_HEIGHT,levelText,LEVEL_FONT,DARKBROWN);

            centralizedText(PROMPT_HEIGHT,text,PROMPT_FONT,BLACK);
            drawButton(buttonColor);

            if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            {
                Vector2 position=GetMousePosition();
                double dx=position.x-CIRCLE_X;
                double dy=position.y-CIRCLE_Y;
                double distance=sqrt(dx*dx+dy*dy);
                if(distance<=BUTTON_RADIUS)
                {
                    levelEnded=true;
                }
            }

            if(remainingTime<=0)
            {
                levelEnded=true;
                levelPassed=true;
            }
        }
        EndDrawing();
    }
    return levelPassed;
}

bool Level::playLevel(const int& levelNumber)
{
    if(shouldPress) return pressButton(levelNumber);
    else return dontPressButton(levelNumber);
}