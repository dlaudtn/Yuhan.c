#include "screen.h"
#include <stdio.h>




void PrintTitle()
{
    GotoPos(0, 0);
    printf("###########################\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("#   이겨라 가위.바위.보   #\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("#       1.게임 시작       #\n");
    printf("#       2.게임 종료       #\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("###########################\n");

}

void PrintGameDescription()
{
    GotoPos(0, 0);
    printf("###########################\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("#        간단 설명        #\n");
    printf("#                         #\n");
    printf("#         1.가위          #\n");
    printf("#         2.바위          #\n");
    printf("#        3.보자기         #\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("#         0.시작          #\n");
    printf("###########################\n");
}

void PrintGame()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#       ■    ■       #        ■    ■     #\n");
    printf("#           ■         #            ■       #\n");
    printf("#          ■          #           ■        #\n");
    printf("#                      #                     #\n");
    printf("#          ■          #           ■        #\n");
    printf("#               무었을 낼건가요?             #\n");
    printf("##############################################\n");
}

void PrintWinGame1()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#       ■ ■          #                     #\n");
    printf("#       ■■           #        ■■■■     #\n");
    printf("#       ■■■■       #      ■■■■■     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#         가위         #          바의       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintWinGame2()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#                      #        ■■■■     #\n");
    printf("#       ■■■■       #     ■ ■■■■     #\n");
    printf("#     ■■■■■       #      ■■■■■     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#         바위         #         보자기      #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintWinGame3()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#       ■■■■       #        ■ ■        #\n");
    printf("#    ■ ■■■■       #        ■■         #\n");
    printf("#     ■■■■■       #        ■■■■     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#        보자기        #          가위       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintLoseGame1()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#       ■ ■          #        ■■■■     #\n");
    printf("#       ■■           #     ■ ■■■■     #\n");
    printf("#       ■■■■       #      ■■■■■     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#         가위         #         보자기      #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintLoseGame2()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#                      #        ■ ■        #\n");
    printf("#       ■■■■       #        ■■         #\n");
    printf("#     ■■■■■       #        ■■■■     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#         바위         #         보자기      #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintLoseGame3()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#       ■■■■       #                     #\n");
    printf("#    ■ ■■■■       #        ■■■■     #\n");
    printf("#     ■■■■■       #      ■■■■■     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#        보자기        #          바위       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintDrawGame1()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#       ■ ■          #        ■ ■        #\n");
    printf("#       ■■           #        ■■         #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#         가위         #          가위       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintDrawGame2()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#                      #                     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#     ■■■■■       #      ■■■■■     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#         바위         #          바위       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintDrawGame3()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        컴퓨터        #           나        #\n");
    printf("#                      #                     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#    ■ ■■■■       #     ■ ■■■■     #\n");
    printf("#     ■■■■■       #      ■■■■■     #\n");
    printf("#       ■■■■       #        ■■■■     #\n");
    printf("#        ■■■        #         ■■■      #\n");
    printf("#        보자기        #         보저기      #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintWin()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#     ■            ■  ■   ■■    ■      #\n");
    printf("#      ■    ■    ■   ■   ■ ■   ■      #\n");
    printf("#       ■  ■■  ■    ■   ■  ■  ■      #\n");
    printf("#        ■■  ■■     ■   ■   ■ ■      #\n");
    printf("#         ■    ■      ■   ■    ■■      #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("##############################################\n");
}

void PrintLose()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#   ■        ■■      ■■■     ■■■    #\n");
    printf("#   ■       ■  ■    ■          ■        #\n");
    printf("#   ■       ■  ■     ■■■     ■■■    #\n");
    printf("#   ■       ■  ■          ■    ■        #\n");
    printf("#   ■■■    ■■      ■■■     ■■■    #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("##############################################\n");
}

void PrintDraw()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                무승부 1판더                #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("##############################################\n");
}