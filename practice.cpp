#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char player='X';
char playboard[8][20]={
	"    |     |      | ",
	"  1 |   2 |   3  | ",
	" ------------------",
	"    |     |      | ",
	"  4 |   5 |   6  | ",
	"-------------------",
	"    |     |      | ",
	"  7 |   8 |   9  | ",
};
void printplayboard()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<20;j++)
		{
			printf("%c",playboard[i][j]);
		}
		printf("\n");
	}
}
int Acess()
{
	int acess;
	start:
	printf("enter the numbers between 1 to 9:\n");
	scanf("%d",&acess);
	if(acess>=9)
	{
		printf("enter the valid number\n");
		goto start;
	}
	switch(acess)
	{
		case 1:
		playboard[1][2]=player;
		break;
		case 2:
		playboard[1][8]=player;
		break;
		case 3:
		playboard[1][14]=player;
		break;
		case 4:
		playboard[4][2]=player;
		break;
		case 5:
		playboard[4][8]=player;
		break;
		case 6:
		playboard[4][14]=player;
		break;
		case 7:
		playboard[7][2]=player;
		break;
		case 8:
		playboard[7][8]=player;
		break;
		case 9:
		playboard[7][14]=player;
		break;
	}
}
void Player()
{
	int playerno ;
    playerno=1;
	printf("player(%d):",playerno );
	switch(playerno)
	{
		case 1:
		player='X';
		system("color 1A");
		playerno=2;
		break;
		case 2:
		player='O';
		system("color A1");
		playerno=1;
		break;
	}
		
}
int win()
{
	if
	(
	((playboard[1][2]='X')&&(playboard[1][8]='X')&&(playboard[1][14]='X'))||
	((playboard[4][2]='X')&&(playboard[4][8]='X')&&(playboard[4][14]='X'))||
	((playboard[7][2]='X')&&(playboard[7][8]='X')&&(playboard[7][14]='X'))||
	((playboard[1][2]='X')&&(playboard[4][8]='X')&&(playboard[7][14]='X'))||
	((playboard[1][14]='X')&&(playboard[4][8]='X')&&(playboard[7][2]='X'))||
	((playboard[1][2]='X')&&(playboard[4][2]='X')&&(playboard[7][2]='X'))||
	((playboard[1][8]='X')&&(playboard[4][8]='X')&&(playboard[7][8]='X'))||
	((playboard[1][14]='X')&&(playboard[4][14]='X')&&(playboard[7][14]='X')))
	{
		return 1;
	}
	else if
	(
	((playboard[1][2]='O')&&(playboard[1][8]='O')&&(playboard[1][14]='O'))||
	((playboard[4][2]='O')&&(playboard[4][8]='O')&&(playboard[4][14]='O'))||
	((playboard[7][2]='O')&&(playboard[7][8]='O')&&(playboard[7][14]='O'))||
	((playboard[1][2]='O')&&(playboard[4][8]='O')&&(playboard[7][14]='O'))||
	((playboard[1][14]='O')&&(playboard[4][8]='O')&&(playboard[7][2]='O'))||
	((playboard[1][2]='O')&&(playboard[4][2]='O')&&(playboard[7][2]='O'))||
	((playboard[1][8]='O')&&(playboard[4][8]='O')&&(playboard[7][8]='O'))||
	((playboard[1][14]='O')&&(playboard[4][14]='O')&&(playboard[7][14]='O')))
	{
	return 2; 
    }  
 else
 {
 	return 3;
 }
}
int main()
{
	restart:
	int a=0,b;
	printplayboard();
while(a<9)
{
    back:
	Player();
	Acess();
	printplayboard();
	if(win()==1)
    {
    	printf("player 1 wins\n");
    	goto end;
	}
	else if(win()==2)
	{
		printf("player 2 wins\n");
		goto end;
	}
	    else if(win()==3)
	{
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
