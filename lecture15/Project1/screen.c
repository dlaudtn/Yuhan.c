#include "screen.h"
#include <stdio.h>




void PrintTitle()
{
    GotoPos(0, 0);
    printf("###########################\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("#   �̰ܶ� ����.����.��   #\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("#       1.���� ����       #\n");
    printf("#       2.���� ����       #\n");
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
    printf("#        ���� ����        #\n");
    printf("#                         #\n");
    printf("#         1.����          #\n");
    printf("#         2.����          #\n");
    printf("#        3.���ڱ�         #\n");
    printf("#                         #\n");
    printf("#                         #\n");
    printf("#         0.����          #\n");
    printf("###########################\n");
}

void PrintGame()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#       ��    ��       #        ��    ��     #\n");
    printf("#           ��         #            ��       #\n");
    printf("#          ��          #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#          ��          #           ��        #\n");
    printf("#               ������ ���ǰ���?             #\n");
    printf("##############################################\n");
}

void PrintWinGame1()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#       �� ��          #                     #\n");
    printf("#       ���           #        �����     #\n");
    printf("#       �����       #      ������     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#         ����         #          ����       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintWinGame2()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#                      #        �����     #\n");
    printf("#       �����       #     �� �����     #\n");
    printf("#     ������       #      ������     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#         ����         #         ���ڱ�      #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintWinGame3()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#       �����       #        �� ��        #\n");
    printf("#    �� �����       #        ���         #\n");
    printf("#     ������       #        �����     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#        ���ڱ�        #          ����       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintLoseGame1()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#       �� ��          #        �����     #\n");
    printf("#       ���           #     �� �����     #\n");
    printf("#       �����       #      ������     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#         ����         #         ���ڱ�      #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintLoseGame2()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#                      #        �� ��        #\n");
    printf("#       �����       #        ���         #\n");
    printf("#     ������       #        �����     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#         ����         #         ���ڱ�      #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintLoseGame3()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#       �����       #                     #\n");
    printf("#    �� �����       #        �����     #\n");
    printf("#     ������       #      ������     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#        ���ڱ�        #          ����       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintDrawGame1()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#       �� ��          #        �� ��        #\n");
    printf("#       ���           #        ���         #\n");
    printf("#       �����       #        �����     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#         ����         #          ����       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintDrawGame2()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#                      #                     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#     ������       #      ������     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#         ����         #          ����       #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintDrawGame3()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                      #                     #\n");
    printf("#        ��ǻ��        #           ��        #\n");
    printf("#                      #                     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#    �� �����       #     �� �����     #\n");
    printf("#     ������       #      ������     #\n");
    printf("#       �����       #        �����     #\n");
    printf("#        ����        #         ����      #\n");
    printf("#        ���ڱ�        #         ������      #\n");
    printf("#                      #                     #\n");
    printf("##############################################\n");
}

void PrintWin()
{
    GotoPos(0, 0);
    printf("##############################################\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#     ��            ��  ��   ���    ��      #\n");
    printf("#      ��    ��    ��   ��   �� ��   ��      #\n");
    printf("#       ��  ���  ��    ��   ��  ��  ��      #\n");
    printf("#        ���  ���     ��   ��   �� ��      #\n");
    printf("#         ��    ��      ��   ��    ���      #\n");
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
    printf("#   ��        ���      ����     ����    #\n");
    printf("#   ��       ��  ��    ��          ��        #\n");
    printf("#   ��       ��  ��     ����     ����    #\n");
    printf("#   ��       ��  ��          ��    ��        #\n");
    printf("#   ����    ���      ����     ����    #\n");
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
    printf("#                ���º� 1�Ǵ�                #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("#                                            #\n");
    printf("##############################################\n");
}