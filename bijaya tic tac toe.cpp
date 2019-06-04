#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char player='X';
int playerno=1;
char button[3][3]={'1','2','3','4','5','6','7','8','9'};
void printplayboard()
{
	printf("Tic Tac Toe    !!!!!!!!!!     Tic Tac Toe    \n\n\n");
	printf("     |      |       | \n");
	printf("  %c  |   %c  |   %c   | \n",button[0][0],button[0][1],button[0][2]);
	printf(" ---------------------\n");
	printf("     |      |       | \n");
	printf("  %c  |   %c  |   %c   | \n",button[1][0],button[1][1],button[1][2]);
	printf(" ---------------------\n");
	printf("     |      |       | \n");
	printf("  %c  |   %c  |   %c   | \n",button[2][0],button[2][1],button[2][2]);
}
int Acess()
{
	int acess;
	start:
	printf("enter the numbers between 1 to 9:\n");
	scanf("%d",&acess);
	switch(acess)
	{
		case 1:
		button[0][0]=player;
		break;
		case 2:
		button[0][1]=player;
		break;
		case 3:
		button[0][2]=player;
		break;
		case 4:
		button[1][0]=player;
		break;
		case 5:
		button[1][1]=player;
		break;
		case 6:
		button[1][2]=player;
		break;
		case 7:
		button[2][0]=player;
		break;
		case 8:
		button[2][1]=player;
		break;
		case 9:
		button[2][2]=player;
		break;
		defalut:
		printf("invalid number please enter again !!!!!!!!!!!!\n");
		goto start;
	}
}
void Player()
{
	printf("player(%d):",playerno );
	if(playerno==1)
	{
		player='X';
		system("color 3A");
		playerno++;
    }
    else if(playerno==2)
    {
		player='O';
    system("color A3");
		playerno--;
    }
}
bool win()
{
	if(
	(button[0][0]==button[0][1]&&button[0][1]==button[0][2])||
	(button[0][0]==button[1][0]&&button[1][0]==button[2][0])||
	(button[0][1]==button[1][1]&&button[1][1]==button[2][1])||
	(button[0][2]==button[1][2]&&button[1][2]==button[2][2])||
	(button[1][0]==button[1][1]&&button[1][1]==button[1][2])||
	(button[2][0]==button[2][1]&&button[2][1]==button[2][2])||
	(button[0][0]==button[1][1]&&button[1][1]==button[2][2])||
	(button[0][2]==button[1][1]&&button[1][1]==button[2][0])
	)
	{
		return 1;
	}
    else
    {
    	return 0;
	}
}
int main()
{
	restart:
	int a=0,b;
	printplayboard();
while(a<9)
{
	Player();
	Acess();
	system("CLS");
	printplayboard();

	if(win())
    {
    	printf("player %c wins\n",player);
    	goto end;
	}
	a++;
  }
    end:
	printf("press 1 to restart the game 0r any other key to exit the game: ");
	scanf("%d",&b);
	if(b==1)
	{
		goto restart;
	}
	else{
		return 0;
	}
}
