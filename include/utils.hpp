#ifndef UTILS_HPP
#define UTILS_HPP

#include "raylib.h"

//screen constants
extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;
extern const int CIRCLE_X;
extern const int CIRCLE_Y;
extern const int BUTTON_RADIUS;

//font size constants
extern const int LEVEL_FONT;
extern const int TIMER_FONT;
extern const int PROMPT_FONT;

//height constants
extern const int LEVEL_HEIGHT;
extern const int TIMER_HEIGHT;
extern const int PROMPT_HEIGHT;

//utility functions
void drawButton(Color color);
void centralizedText(int height,const char* text,int fontSize,Color color);

#endif