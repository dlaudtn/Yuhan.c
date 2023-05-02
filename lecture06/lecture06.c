#include <stdio.h>

int print_title_screen()
{
	printf("######################\n");
	printf("##                  ##\n");
	printf("##     Dino Run     ##\n");
	printf("##     V.O.1        ##\n");
	printf("##                  ##\n");
	printf("##                  ##\n");
	printf("## 1. Start Game    ##\n");
	printf("## 2. How to Play   ##\n");
	printf("##                  ##\n");
	printf("## 0. Exlt          ##\n");
	printf("##                  ##\n");
	printf("######################\n");
	
	return 0;
}

int print_how_to_play_screen()
{

	printf("#############################\n");
	printf("##                         ##\n");
	printf("##     To Avoid Enemy      ##\n");
	printf("##                         ##\n");
	printf("## Press Space Bar To Jump ##\n");
	printf("##                         ##\n");
	printf("#############################\n");
	
	return 0;
}

int main()
{
	int game_state;
	while(game_state)
    {
	     print_title_screen();
		 printf("inqut>");
	     scanf("%d", &game_state);
	     if(game_state == 1)
	     {
			 scanf("%d", &game_state);
	     }
	      if(game_state == 2)
	     {
             while(game_state)
		    {
		         print_how_to_play_screen();
		         printf("Return to menu? (1.yes 2.no) :");
		         scanf("%d", &game_state);
				 if(game_state == 1)
				 {
					printf("");
				 }
		    }
	 }  
	 if(game_state == 3)
	 {
		printf("");
	 }
	}

	return 0;
}
	
