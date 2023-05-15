#include <stdio.h>


void print_start_screen()
{
    char screen[] = "###############################\n"
                    "##                           ##\n"
                    "##  1. Start Game            ##\n"
                    "##                           ##\n"
                    "###############################\n";

    printf("%s", screen);
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
	int game_state = 1;
	{
		print_start_screen();
		printf("inqut=");
		scanf("%d",&game_state);
		if(game_state == 1)
		{
			print_start1_screen();
			printf("1.포기한다 2. 댜충이라도 한다:");
			scanf("%d",&game_state);
			if(game_state == 1)
			{
				print_start2_screen();
			}
			else if(game_state == 2)
			{
				print_start3_screen();
			}

		}
	}
	return 0;
}
