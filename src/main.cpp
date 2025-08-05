#include "raylib.h"
#include "Level.hpp"
#include "utils.hpp"

int main()
{
    InitWindow(SCREEN_WIDTH,SCREEN_HEIGHT,"Button Game");
    SetTargetFPS(60);

    bool pass=false;

    Level level1("Press the red button", 10, true, RED);
    Level level2("Do not press the green button", 5, false, GREEN);
    Level level3("Press the yellow button only", 5, false, MAROON);
    Level level4("Click the violet button", 5, true, VIOLET);
    Level level5("Seriously, don't press any button", 8, false, SKYBLUE);
    Level level6("Press the green button", 4, true, LIME, YELLOW);
    Level level7("Press the pink button", 3, true, PINK, PINK);
    Level level8("Press the maroon button", 2, true, MAROON, GOLD);
    Level level9("Keep your hands away!", 2, false, RED, DARKGREEN);
    Level level10("PURPLE BUTTON! QUICK!", 2, true, PURPLE, YELLOW);

    Level game[]={ level1, level2, level3, level4, level5, level6, level7, level8, level9, level10 };
    int levelsCount=sizeof(game)/sizeof(game[0]);

    for(int i=0;i<levelsCount;i++)
    {
        pass=game[i].playLevel(i+1);
        if(!pass) break;
    }

    while(!WindowShouldClose())
    {
        if(pass)
        {
            BeginDrawing();
            ClearBackground(BLUE);
            centralizedText((SCREEN_HEIGHT-80-20)/2,"YOU WON!",80,DARKGREEN);
            centralizedText(400,"Press any key to exit",30,LIGHTGRAY);
            EndDrawing();
            if(GetKeyPressed()!=0)
                CloseWindow();
        }
        else
        {
            BeginDrawing();
            ClearBackground(RED);
            centralizedText(150,"BOOOOOOOOOOOOOOOO",45,LIGHTGRAY);
            centralizedText((SCREEN_HEIGHT-60)/2,"YOU LOST!",60,DARKGRAY);
            centralizedText(400,"Press any key to exit",30,LIGHTGRAY);
            EndDrawing();
            if(GetKeyPressed()!=0)
                CloseWindow();
        }
    }

    return 0;
}