#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include "screen.h"
#include "location.h"


int main()
{
    int gameState = 1;
    int player = 0;
    int com = 0;
    srand(time(NULL));


    PrintTitle();

    while (gameState)
    {
        player = getch();
        if (player == '1')
        {
            PrintGameDescription();
            player = getch();
            if (player == '0')
            {
                while (gameState)
                {
                    PrintGame();
                    com = rand() % 3 + 1;
                    scanf_s("%d", &player);
                    if ((com == 1) && (player == 1))
                    {
                        PrintDrawGame1();
                        Sleep(1500);
                        PrintDraw();
                        Sleep(1500);
                        PrintGame();
                    }
                    else if ((com == 2) && (player == 2))
                    {
                        PrintDrawGame2();
                        Sleep(1500);
                        PrintDraw();
                        Sleep(1500);
                        PrintGame();
                    }
                    else if ((com == 3) && (player == 3))
                    {
                        PrintDrawGame3();
                        Sleep(1500);
                        PrintDraw();
                        Sleep(1500);
                        PrintGame();
                    }
                    else if ((com == 1) && (player == 2))
                    {
                        PrintWinGame1();
                        Sleep(1500);
                        PrintWin();
                        gameState = 0;
                    }
                    else if ((com == 2) && (player == 3))
                    {
                        PrintWinGame2();
                        Sleep(1500);
                        PrintWin();
                        gameState = 0;
                    }
                    else if ((com == 3) && (player == 1))
                    {
                        PrintWinGame3();
                        Sleep(1500);
                        PrintWin();
                        gameState = 0;
                    }
                    else if ((com == 1) && (player == 3))
                    {
                        PrintLoseGame1();
                        Sleep(1500);
                        PrintLose();
                        gameState = 0;
                    }
                    else if ((com == 2) && (player == 1))
                    {
                        PrintLoseGame2();
                        Sleep(1500);
                        PrintLose();
                        gameState = 0;
                    }
                    else if ((com == 3) && (player == 2))
                    {
                        PrintLoseGame3();
                        Sleep(1500);
                        PrintLose();
                        gameState = 0;
                    }
                }

            }

        }
        else if (player == '2')
        {
            gameState = 0;
        }
    }
    

    return 0;
}


