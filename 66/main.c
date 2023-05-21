#include <stdio.h>
#include <string.h>

void writeStringToBuffer(const char* string, int x, int y, char* screenBuf, int width)
{
    int stringLength = strlen(string);

    for (int i = 0; i < stringLength; i++) {
        screenBuf[(y * width) + x + i] = string[i];
    }
}

void setTitleToScreenBuffer(char* screenBuf, int width, int height)
{    
    const char* titleMessage = "###############################\n"
                               "##                           ##\n"
                               "##                           ##\n"
                               "##                           ##\n"
                               "###############################\n";

    int messageLength = strlen(titleMessage);

    for (int i = 0; i < messageLength; i++) {
        screenBuf[i] = titleMessage[i];
    }
}
void printScreenBuffer(const char* screenBuf, int width, int height)
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c", screenBuf[(i * width) + j]);
        }
        printf("\n");
    }
}
void print_start1_screen()
{
    char screen[] = "###############################\n"
                    "##                           ##\n"
                    "## 과제가 너무 어렵다 어쩌지 ##\n"
                    "##                           ##\n"
                    "###############################\n";

    printf("%s", screen);
}
void print_start2_screen()
{
    char screen[] = "###############################\n"
                    "##                           ##\n"
                    "##  포기하지말고 했어야 했다 ##\n"
                    "##                           ##\n"
                    "###############################\n";

    printf("%s", screen);
}
void print_start3_screen()
{
    char screen[] = "########################################\n"
                    "##                                    ##\n"
                    "## 어찌어찌 해냈다 공부를 더 해야 겠다##\n"
                    "##                                    ##\n"
                    "########################################\n";

    printf("%s", screen);
}
int main()
{
    int width = 30;
    int height = 15;

    char screen[width * height];
    memset(screen, ' ', sizeof(screen));

    setTitleToScreenBuffer(screen, width, height);

    writeStringToBuffer("1. Start Game", 4, 2, screen, width);

    printScreenBuffer(screen, width, height);

    int game_state = 1;
    printf("input: ");
    scanf("%d", &game_state);

    if (game_state == 1) {
        print_start1_screen();
        printf("1.포기한다 2. 댜충이라도 한다:");
        scanf("%d", &game_state);
        if (game_state == 1) {
            print_start2_screen();
        } else if (game_state == 2) {
            print_start3_screen();
        }
    }

    return 0;
}
