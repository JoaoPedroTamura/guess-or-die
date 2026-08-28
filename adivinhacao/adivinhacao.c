#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


int main() {
    char name[30];
    int choice;

    int seconds = time(0);
    srand(seconds);
    int num = rand();
    int num_secret = (num % 100);

    int life;
    

    printf("    _________\n");
printf("  / ======= \\\n");
printf(" / __________\\\n");
printf(" | ___________ |\n");
printf(" | | -       | |\n");
printf(" | |         | |\n");
printf(" | |_________| |________________________\n");
printf(" \\=____________/   GUESSING GAME        )\n");
printf(" / \"\"\"\"\"\"\"\"\"\"\" \\                       /\n");
printf(" / ::::::::::::: \\                  =D-\n");
printf("(_________________)\n");



    while(1) {
    printf("Welcome! Choice the difficult: \n");
    Sleep(2000);
    printf("(1) - EASY (2) - MEDIUM (3) - HARD \n\n");
    printf("YOUR CHOICE: ");
    scanf("%d",&choice);
    system("cls");

    
    if(choice == 1) {
        life = 15;
        printf("      _.-'''''-._\n");
printf("    .'  _     _  '.\n");
printf("   /   (_)   (_)   \\\n");
printf("  |  ,           ,  |\n");
printf("  |  \\`.       .`/  |\n");
printf("   \\  '.`'\"\"'\"`.'  /\n");
printf("    '.  `'---'`  .'\n");
printf("      '-._____.-'\n");
  

        printf("You choice is: EASY level\n");
        Sleep(1000);
        printf("Before the game is start\n");
        Sleep(2000);
        printf("EASY level: You have 15 lifes, after this, you die. \n");
        Sleep(2000);
        printf("Press a button, and let's play. \n");
        getch();
        break;
    }
    else if (choice == 2) {
        life = 10;
        printf("     .-\"\"\"\"\"\"-.\n");
printf("   .'          '.\n");
printf("  /   O      O   \\\n");
printf(" :                :\n");
printf(" |                |\n");
printf(" : ',          ,' :\n");
printf("  \\  '-......-'  /\n");
printf("   '.          .'\n");
printf("jgs  '-......-'\n");


        printf("You choice is: MEDIUM level\n");
        Sleep(1000);
        printf("Before the game is start\n");
        Sleep(2000);
        printf("MEDIUM level: You have 10 lifes, after this, you die. \n");
        Sleep(2000);
        printf("Press a button, and let's play.\n");
        getch();
        break;
    }
    else if(choice == 3) {
        life = 6;
        printf("     .-\"\"\"\"\"\"-.\n");
printf("   .'  \\\\  //  '.\n");
printf("  /   O      O   \\\n");
printf(" :                :\n");
printf(" |                |\n");
printf(" :       __       :\n");
printf("  \\  .-\"`  `\"-.  /\n");
printf("   '.          .'\n");
printf("jgs  '-......-'\n");
        printf("You choice is: HARD level\n");
        Sleep(1000);
        printf("Before the game is start \n");
        Sleep(2000);
        printf("HARD level: You have 6 Lifes, after this, you die.\n");
        Sleep(2000);
        printf("Press a button, and let's play. \n");
        getch();
        break;
    }
    else {
        printf("This difficult, doesn't exits...\n");
        Sleep(1000);
        printf("Press a button, to return the menu \n\n");
        getch();
        
    }
}
    setbuf(stdin,NULL);

     printf("      _.-'''''-._\n");
printf("    .'  _     _  '.\n");
printf("   /   (_)   (_)   \\\n");
printf("  |  ,           ,  |\n");
printf("  |  \\`.       .`/  |\n");
printf("   \\  '.`'\"\"'\"`.'  /\n");
printf("    '.  `'---'`  .'\n");
printf("      '-._____.-'\n");
    printf("\nWelcome! What's your name:  ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';

    printf("Hello! Sir %s, nice to meet you!\n",name);
    Sleep(1000);
    printf("My name is... computer, you know...!\n");
    Sleep(1000);
    printf("And right now... I think a number...\n");
    Sleep(1000);
    printf("Can you guessing what number i think?\n");
    Sleep(1000);
    printf("So. let's go, but... if you lose...\n");
    Sleep(2000);
    printf("YOU...\n");
    Sleep(2000);
    printf("DIE\n");
    Sleep(2000);
     printf("      _.-'''''-._\n");
printf("    .'  _     _  '.\n");
printf("   /   (_)   (_)   \\\n");
printf("  |  ,           ,  |\n");
printf("  |  \\`.       .`/  |\n");
printf("   \\  '.`'\"\"'\"`.'  /\n");
printf("    '.  `'---'`  .'\n");
printf("      '-._____.-'\n");
    Sleep(2000);
    printf("Press any button, to start the game: ");
    getch();

    int right = 0;

    for(int i = life; i >= 1; i-- ) {
        int shoot;
        printf("\nLIFE : %d \n",i);
        printf("Guess a number: \n");
        scanf("%d",&shoot);

        if(shoot == num_secret) {
            right = 1;
            printf("ohh...\n");
            Sleep(1200);
            printf("Congratulations! You survived \n");
            Sleep(1000);
            printf("Thanks for playing with me \n");
            Sleep(1000);
            printf("     .-\"\"\"\"\"\"-.\n");
printf("   .'          '.\n");
printf("  /   O    -=-   \\\n");
printf(" :                :\n");
printf(" |                |\n");
printf(" : ',          ,' :\n");
printf("  \\  '-......-'  /\n");
printf("   '.          .'\n");
printf("jgs  '-......-'\n");
            break;
        }
        else if (shoot > num_secret) {
            printf("ohh...\n");
            Sleep(1200);
            printf("You made a mistake\n");
            Sleep(800);
            printf("I'll give you a tip...");
            printf("Guess a lower number. \n");
        }
        else {
            printf("ohh...\n");
            Sleep(1200);
            printf("You made a mistake\n");
            Sleep(800);
            printf("I'll give you a tip... ");
            printf("Guess a HIGHER number. \n");
        }

    }
    if(!right){
        printf("                .---.\n");
printf("            '-.  |   |  .-'\n");
printf("              ___|   |___\n");
printf("        -=  [            ]  =-\n");
printf("            `---.   .---'\n");
printf("         __||__ |   | __||__\n");
printf("         '-..-' |   | '-..-'\n");
printf("           ||   |   |   ||\n");
printf("           ||_.-|   |-,_|| \n");
printf("         .-\"`   `\"'\"`   `\"-.\n");
printf("jgs    .'                   '.\n");
        printf("\n\nYOU DIE \n");
            Sleep(1000);
            printf("R.I.P \n");
            printf("%s",name);
            Sleep(800);
            printf("the secret number is: %d",num_secret);
    }
    
    return 0;

}



