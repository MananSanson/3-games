
                //  CP PROJECT
            // MANAN SANSON,2020BECE039






#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>  change colour of text   system("COLOR 15");    textcolor(RED); cprint("hello");
#include <time.h>
void dice();
void player_1();
void computer_1();
int tic_tac();
char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int checkwin();
void board();
void odd_even();
void comp();
int batting();
int bowling();
int batting2();
int bowling2();
int q = 1, over;     //{not working if it is intialized inside the function
int f=1;             //not working if it is intialized inside the function}                
int qq,ww;
//void out();

  int main()
  {
    int n;
    printf("_______________________________________");
    printf("\n");
    printf("\n\nEntre the game number you want to play.\n");
    printf("_______________________________________");
    printf("\n\n1.Rolling a dice\n2.Tic-tac-toe\n3.odd-even game\n4.EXIT\n\n");
    printf("Entre your game no.:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        printf("\n\nYou entered rolling dice =>\n");
        dice();
        break;
    }
    case 2:
    {
        printf("\n\nYou entered tic-tac toe =>\n");
        tic_tac();
        break;
    }
    case 3:
    {
        printf("\n\nYou entered Odd-even game =>\n");
        odd_even();
        break;
    }
    case 4:
    {
        printf("\n\nYou entered EXIT\n");
        printf("\n\n\t\t**Have a good day**\n\n\n");
        break;
    }
    }
    return 0;
}










void odd_even()
{
    int o;
    printf("\n\t*****************************************************************");
    printf("\n\t\t\t***RULES***\n\n\t==> Valid entries are only 1,2,3,4,5,6.\n\t==> Batsman on getting same no. as of bowler will get OUT.\n\t==> 1-1 over match\n");
    printf("\t*******************************************************************\n\n");
    comp();
    
    return;
}

/*void out()
{
    qq=batting;
    ww=bowling;
    printf("%d %d\n",qq,ww);
    return;

}*/


void comp()
{
    int n, t, x;
    time_t u, b;
    srand(time(&u));
    t = rand();
    char name1[20];
    printf("\nEntre your name:");
    scanf("%s", &name1);
    printf("\n(TOSS)\n");
    n = t % 2 == 0 ? 1 : 2;

    if (n == 1) //player wins toss
    {
        printf("**%s wins the toss**\n", name1);
        printf("%s press 1 for batting and 2 for bowling:", name1);
        scanf("%d", &x);
        if (x == 1)
        {
            printf("\n");
            qq=batting();
          printf("\n\t\tone innings ended\n");
          printf("\t\tTARGET for computer:%d\n",qq);
           ww=bowling2();
           if(qq>ww)
           printf("\n\n**%s wins the game by %d runs**\n\n",name1,qq-ww);
           else if(qq<ww)
           printf("\n**computer wins the game**\n\n");

            goto end;
        }
        else if (x == 2)
        {
            printf("\n");
            ww=bowling();
            printf("\n\t\tone innings ended\n");
            //printf("manan");
            printf("\t\tTARGET for %s is:%d\n",name1,ww);
            //printf("manan2");
            qq=batting2();
            if(qq>ww)

            printf("\n\n**%s wins the game**\n\n",name1);
            else if(qq<ww)
            printf("\n**computer wins the game by %d runs**\n\n",ww-qq);
            goto end;
        }
    }

    else if (n == 2) //computer wins toss
    {
        int y;
        // time_t b;
        srand(time(&b));
        y = rand();
        printf("**Computer wins the toss**\n");
        
        switch (y % 2)
        {
        case 0:
        {
            printf("computer choosed batting");
            ww=bowling();
            printf("\n\t\tone innings ended\n");
           printf("\t\tTARGET for %s is:%d\n",name1,ww);
            qq=batting2();
            if(ww>qq)
            printf("\n**computer wins the game by %d runs**\n\n",ww-qq);
            else if(ww<qq)
            printf("\n**%s wins the game**\n\n",name1);
            goto end;

        }

        case 1:
        {
            printf("computer choosed bowling");
            qq=batting();
            printf("\n\t\tone innings ended\n");
          printf("\t\tTARGET for computer:%d\n",qq);
            ww=bowling2();
            if(qq>ww)
            printf("\n**%s wins the game by %d runs**\n\n",name1,qq-ww);
            else
            printf("\n**computer wins the game**\n\n");
            goto end;

        }
        }
    }end:
    return;
}

int batting()
{
   
    int a, sum = 0;
    int g;
    printf("\n\nBatting TIME:\n");
    while (q <= 6)
    {
        time_t y;
        srand(time(&y));
        g = rand() % 6 + 1;
        printf("\n\nEntre your move:");
        scanf("%d", &a);
        if (a>6)
        {
            printf("\nINVALID MOVE(choose between (0-6)\n");
            continue;
        }
        printf("computer's move:%d", g);

        if (a != g)
            sum += a;
        if (g == a)
        {
            printf("\n\t**OUT**");
            break;
        }
       /* else if(sum>ww){
        printf("\n GAME OVER in %d balls",q);
        break;}*/
    
        printf("\n%d balls left", 6 - q); //over
        q++;
        //if(sum>ww)
        
    
    }
    printf("\n_____________________");
    printf("\nYour score is %d:\n\n", sum);
 return sum;
}












int batting2()
{
   
    int a, sum = 0;
    int g;
    printf("\n\nBatting TIME:\n");
    while (q <= 6)
    {
        time_t y;
        srand(time(&y));
        g = rand() % 6 + 1;
        printf("\n\nEntre your move:");
        scanf("%d", &a);
        if (a>6)
        {
            printf("\nINVALID MOVE(choose between (0-6)\n");
            continue;
        }
        printf("computer's move:%d", g);

        if (a != g)
            sum += a;
        if (g == a)
        {
            printf("\n\t**OUT**");
            break;
        }
        else if(sum>ww){
        printf("\n\n** GAME OVER in %d balls**\n",q);
        break;}
    
        printf("\n%d balls left", 6 - q); //over
        q++;
        //if(sum>ww)
        
    
    }
    printf("\n_____________________");
    printf("\nYour score is %d:\n\n", sum);
 return sum;
}













int bowling()
{
   
    
    int aa, bb, summ = 0;
    printf("\n\nBowling TIME:\n");
    
    
    while (f <= 6)
    {
        time_t yy;
        srand(time(&yy));
        aa = rand() % 6 + 1;
        printf("\nyour turn:");
        scanf("%d", &bb);
       if (bb>6)
        {
            printf("\nINVALID MOVE(choose between (0-6)\n");
            continue;
        }
        printf("computer's move:%d\n", aa);
        if (aa != bb)
            summ += aa;
        if (aa == bb)
        {
            printf("\n\t**OUT**");
            break;
        }
        /*else if(summ>qq){
        printf("\nGAME OVER in %d balls",f);
        break;}*/
        printf("%d balls left\n", 6 - f);
        f++;
    }
    printf("\n_____________________");
    printf("\ncomputers's score is %d:\n\n", summ);
  return summ;
}












int bowling2()
{
   
    
    int aa, bb, summ = 0;
    printf("\n\nBowling TIME:\n");
    
    
    while (f <= 6)
    {
        time_t yy;
        srand(time(&yy));
        aa = rand() % 6 + 1;
        printf("\nyour turn:");
        scanf("%d", &bb);
       if (bb>6)
        {
            printf("\nINVALID MOVE(choose between (0-6)\n");
            continue;
        }
        printf("computer's move:%d\n", aa);
        if (aa != bb)
            summ += aa;
        if (aa == bb)
        {
            printf("\n\t**OUT**");
            break;
        }
        else if(summ>qq){
        printf("\n\n**GAME OVER in %d balls**\n",f);
        break;}
        printf("%d balls left\n", 6 - f);
        f++;
    }
    printf("\n_____________________");
    printf("\ncomputers's score is %d:\n\n", summ);
  return summ;
}

































void dice()
{
    int n;
    printf("\t\t\t\t***RULE***\n\n(PLAYER WHO FIRST GETS A 6 WINS THE GAME.)\n ");
    printf("\nPlay with computer or player:\n");
    printf("1.player\n2.computer\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("\n\nYou choosed to play with 2nd player.\n");
        player_1();
    }
    if (n == 2)
    {
        printf("You choosed to play with computer.\n");
        computer_1();
    }
}

void player_1()
{
    char u, Y, N;
    char name[20];
    char name2[20];
    printf("Entre player 1 name:");
    scanf("%s", name);
    printf("Entre player 2 name: ");
    scanf("%s", name2);

    int n, t, x;

    time_t o;
    srand(time(&o));

    int i = 1;
again:
    while (1)
    {
        fflush(stdin);
        n = (rand() % 6) + 1;
        t = (rand() % 6) + 1;
        printf("\n\n%s's turn:", name);
        printf("%d", n);
        if (n == 6)
        {

            printf("\n %s wins the game in %d turns", name, i);

            goto end;
        }

        else
        {

            printf("\n%s's turn:", name2);
            printf("%d\n\n", t);

            if (t == 6)
            {
                printf(" %s wins the game in %d turns", name2, i);

                goto end;
            }
            else
                printf("-->press any key to roll the dice again.\n-->press 'N' to EXIT.");
            scanf("%c", &u);
            switch (u)
            {
            case 'Y':
                goto again;
            case 'N':
                goto end;
            }
        }
        i++;
        /*printf("\n-->press any key to roll the dice again.\n-->press 'N' to EXIT.");
        scanf("%c", &u);
        switch (u)
        {
        case 'Y':
            goto again;
        case 'N':
            goto end;
        
        }*/
    }
end:
    printf("\n\n**HAVE A GOOD DAY**\n\n");

    return;
}

void computer_1()
{
    char name[20], u;
    printf("Entre your name:");
    scanf("%s", name);
    time_t o;
    srand(time(&o));
    int i = 1, n, t;
again:
    while (1)
    {
        fflush(stdin);
        n = (rand() % 6) + 1;
        t = (rand() % 6) + 1;
        printf("\n%s's turn:", name);
        printf("%d", n);
        if (n == 6)
        {
            printf("\n%s wins the game in %d turns", name, i);
            break;
        }

        printf("\ncomputer,s turn");
        printf("%d", t);
        if (t == 6)
        {
            printf("\ncomputer wins the game in %d turns", i);
            break;
        }
        printf("\n\n--> press any key to roll dice again.\n--> press 'N' to EXIT.");
        scanf("%c", &u);
        i++;
        if (u == 'N')
            goto end;
        else
            goto again;
    }
end:
    printf("\n\n**HAVE A NICE DAY**\n\n");
    
    return;
}

//  taken help from google

int tic_tac()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    } while (i == -1);

    board();

    if (i == 1)
        printf("==>\a Player %d win ", --player);
    else
        printf("==>\a Game draw");

    
    

    return 0;
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7]) // last else-if is for draw condition when none of the boxes is vaccant.
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}
