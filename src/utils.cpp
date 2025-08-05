#include "utils.hpp"

const int SCREEN_WIDTH=800;
const int SCREEN_HEIGHT=600;
const int CIRCLE_X=SCREEN_WIDTH/2;
const int CIRCLE_Y=SCREEN_HEIGHT/2;
const int BUTTON_RADIUS=70;

const int LEVEL_FONT=30;
const int TIMER_FONT=30;
const int PROMPT_FONT=45;

const int LEVEL_HEIGHT=20;
const int TIMER_HEIGHT=70;
const int PROMPT_HEIGHT=130;

void drawButton(Color color)
{
    DrawCircle(SCREEN_WIDTH/2,SCREEN_HEIGHT/2,BUTTON_RADIUS,color);
}

void centralizedText(int height,const char* text,int fontSize,Color color)
{
    int textWidth=MeasureText(text,fontSize);
    int startingPoint=(SCREEN_WIDTH-textWidth)/2;
    DrawText(text,startingPoint,height,fontSize,color);
}