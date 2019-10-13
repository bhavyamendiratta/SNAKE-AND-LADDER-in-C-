#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#define size1 2
struct node
{
int info;
struct node * link;
};
struct node *start=NULL;

int rear = -1;
int front = -1;
int queue[size1];
int size =2;
int stack[2];
int top = -1;
void insert1(int);
void display1();
void push(int);
void display();
int dice;
int checkposition();
int position,newposition,above;
void viewlist();
void insertnode();
int choice,count=0;
int final;
char a[20];
struct node * createnode()
{
struct node * n;
n = (struct node*)malloc(sizeof(struct node));
return (n);
}
void gotoxy(int x,int y)
{
COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
    system("color 4E");

    int x=30,y=10,f,z=0;
char ch;
srand(time(NULL));
printf("Before playing the game, lets play a mini game\n");
printf("\n press enter");
printf("\n");
_getch();
printf("enter your name:");
gets(a);
printf("now collide your name's first letter with the given dot using the keys\n\n W for up \n S for down\n A for left\n D for right\n");
gotoxy(x,y);
    printf("%s\n",a);
    gotoxy(10,10);
    printf("*");
while(1)
{

    ch=_getch();
    switch(ch)
    {
    case 'a':
        x--;
        break;
    case 'd':
        x++;
        break;
        case 'w':
        y--;
        break;
        case 's':
        y++;
        break;

        case 27:
            exit(0);
    }
    system("cls");
    gotoxy(x,y);
    printf("%s",a);
    gotoxy(10,10);
    printf("*");
    if(x==10&&y==10)
        {system("cls");
            break;
        }}
        system("color 1F");

printf("\t\t*                                               *\n");
printf(" -----------------------------------------------------------------------------\n");
	printf("|                                                                            |\n");
	printf("|                                                                            |\n");
	printf("| ######   ######  ######  ######  ######  ######  #      #  ######   ###### |\n");
	printf("| #        #    #  #       #         #       #     # #    #  #        #      |\n");
	printf("| #  ####  ######  #####   #####     #       #     #  #   #  #  ####  ###### |\n");
	printf("| #    #   #  #    #       #         #       #     #   #  #  #    #        # |\n");
	printf("| ######   #   #   ######  ######    #     ######  #    # #  ######   ###### |\n");
	printf("|                                                                            |\n");
	printf(" -----------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*        -----------------------------          *\n");
	printf("\t\t*         WELCOME TO SNAKE AND LADDER           *\n");
	printf("\t\t*        -----------------------------          *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*************************************************\n\n\n");
printf("maximum numbers of players can be 3\n\n");
printf("enter number of players");

	scanf("%d",&f);

while(z<f)
{

printf("                      \n\n\nhello , thank you for coming.\n                      what would you like to do: \n                      1.read the rules\n                      2.play the game\n "
       );

scanf("%d",&choice);


{if(choice==1)
{
printf("\n                      The rules are simple \n                      you can press enter to roll the dice");
_getch();
printf("\n\n\n\n\n                      enter your choice");
continue;
}

if(choice==2)
{
printf("                      welcome to snake and ladder \n");
printf(" |100  99  98  97  96  95  94  93  92  91|     1=start          4=ladder to 14\n ");
printf("| 81  82  83  84  85  86  87  88  89  90|     9=ladder to 31   17=snake to  7\n ");

printf("| 80  79  78  77  76  75  74  73  72  71|     21=ladder to 42  46=snake to  13\n ");
printf("| 61  62  63  64  65  66  67  68  69  70|     28=ladder to 84  62=snake to  19\n ");
printf("| 60  59  58  57  56  55  54  53  52  51|     37=ladder to 61  54=snake to  25\n ");
printf("| 41  42  43  44  45  46  47  48  49  50|     51=ladder to 67  87=snake to  36\n ");
printf("| 40  39  38  37  36  35  34  33  32  31|     72=ladder to 91  64=snake to  44\n ");
printf("| 21  22  23  24  25  26  27  28  29  30|     78=ladder to 92  95=snake to  75\n ");
printf("| 20  19  18  17  16  15  14  13  12  11|     80=ladder to 99     100=END\n");
printf(" |  1   2   3   4   5   6   7   8   9  10|      \n");
printf("winner will be the one who gets to 100 first that is minimum number of dice throws");
do
{printf("\npress any key to roll the dice\n\n");
dice-=(getche());
dice =((rand()%6)+1);
printf("you rolled the dice and you got %d ",dice);

position+=dice;
if(dice == 6)
{
    printf("\n you got 6 on your dice as a result of which you get another throw\n");
    printf(" _________\n");
        printf("|         |\n");
        printf("|  O   O  |\n");
        printf("|  O   O  |\n|  O   O  |\n|_________|\n");
    continue;
}
printf("you landed on the poistion %d\n",position);
if(dice==1)
{
    printf(" _________\n");
        printf("|         |\n");
        printf("|         |\n");
         printf("|    O    |\n|         |\n|_________|\n");

}
else if (dice==2)
{


        printf(" _________\n");
        printf("|         |\n");
        printf("|  O      |\n");
        printf("|         |\n|      O  |\n|_________|\n");




}
else if (dice==3)
        {
        printf(" _________\n");
        printf("|         |\n");
        printf("|  O      |\n");
        printf("|    O    |\n|      O  |\n|_________|\n");
        }
else if (dice==4)
    {
        printf(" _________\n");
        printf("|         |\n");
        printf("|  O   O  |\n");
        printf("|         |\n|  O   O  |\n|_________|\n");
        }
else if (dice==5)
    {
        printf(" _________\n");
        printf("|         |\n");
        printf("|  O   O  |\n");
        printf("|    O    |\n|  O   O  |\n|_________|\n");
        }
count++;
checkposition();
position = newposition;
}
while(position<100);
printf("congratulations you have won!! in %d dice throws\n\n\n ",count);
_getch();

push(count);
insert1(count);
insertnode();
z++;
position = 0;
count = 0;
if(f!=1&&z!=f)
{printf("another player's chance\n");}
}
}

_getch();



}
if(top!=0)
{printf("winner of the game is ");
display();}
if(rear!=0)
{
printf("\n\nthe player who losses the game is ");
display1();
printf("\n\n");
printf("\t\t*************************************************\n");
printf("\t\t*                                               *\n");
printf("\t\t*        -----------------------------          *\n");
printf("\t\t*               LEADERSHIP BOARD                *\n");
printf("\t\t*        -----------------------------          *\n");
printf("\t\t*                                               *\n");
printf("\t\t*************************************************\n\n\n");
viewlist();
}
}
checkposition();
{
    switch(position)
    {
    case 4:
        newposition=14;
        {
            printf("\n well done ,you have landed on a ladder,you are now on space %d.\n",newposition);
        }
        break;

    case 9:
         newposition=31;
        {
            printf("\n well done ,you have landed on a ladder,you are now on space %d.\n",newposition);
        }
        break;
    case 17:
        newposition=7;
        {
            printf("sorry but you have landed on a snake and your new position is %d",newposition);

        }
        break;
     case 21:
         newposition=42;
        {
            printf("\n well done ,you have landed on a ladder,you are now on space %d.\n",newposition);
        }
        break;
         case 28:
         newposition=84;
        {
            printf("\n well done ,you have landed on a ladder,you are now on space %d.\n",newposition);
        }
        break;
     case 37:
         newposition=61;
        {
            printf("\n well done ,you have landed on a ladder,you are now on space %d.\n",newposition);
        }
        break;
         case 51:
         newposition=67;
        {
            printf("\n well done ,you have landed on a ladder,you are now on space %d.\n",newposition);
        }
        break;
         case 72:
         newposition=91;
        {
            printf("\n well done ,you have landed on a ladder,you are now on space %d.\n",newposition);
        }
        break;
         case 78:
         newposition=92;
        {
            printf("\n well done ,you have landed on a ladder,you are now on space %d.\n",newposition);
        }
        break;
         case 80:
         newposition=99;
        {
            printf("\n well done ,you have landed on a ladder,you are now on space %d.\n",newposition);
        }
        break;
    case 46:
        newposition=13;
        {
            printf("sorry but you have landed on a snake and your new position is %d",newposition);

        }
        break;
        case 62:
        newposition=19;
        {
            printf("sorry but you have landed on a snake and your new position is %d",newposition);

        }
        break;
    case 54:
        newposition=25;
        {
            printf("sorry but you have landed on a snake and your new position is %d",newposition);

        }
        break;
        case 87:
        newposition=36;
        {
            printf("sorry but you have landed on a snake and your new position is %d",newposition);

        }
        break;
    case 64:
        newposition=44;
        {
            printf("sorry but you have landed on a snake and your new position is %d",newposition);

        }
        break;
        case 95:
        newposition=75;
        {
            printf("sorry but you have landed on a snake and your new position is %d",newposition);

        }
        break;
        default:
            return newposition = position;
}
}

void push(int x)
{
    if(top==size)
    {
        printf("winner can be decided only between 3 players");

    }
    else
    {
        top++;
        stack[top]=x;
    }
    }
    void insert1(int x)
    {
        if(rear==size1)
        {
            printf("winner can be decided only between 3 players");

        }
        else
        {
            if(front ==-1)
                front = 0;
            rear = rear +1;
             queue[rear]= x;
        }
    }


void display()
{
int k=0;
	while(k<10){
		k++;
	}
    if(top==0)
    {
        printf("player 1");
    }
    else if(top==1)



    {
        if (stack[0]<stack[1])
            printf("player 1");
        else
            printf("player 2");
    }

        else if(top==2)

    {
        if(stack[0]<stack[1]&&stack[0]<stack[2])

        printf("player 1 ");
        else
            {
            if(stack[1]<stack[0]&&stack[1]<stack[2])
                printf("player 2");
            else
                printf("player 3");}

    }


    }



    void display1()
{
    if(rear==0)
    {
        printf("player 1");
    }
    else if(rear==1)



    {
        if (queue[0]>queue[1])
            printf("player 1");
        else
            printf("player 2");
    }

        else if(rear==2)

    {
        if(queue[0]>queue[1]&&queue[0]>queue[2])

        printf("player 1 ");
        else
            {
            if(queue[1]>queue[0]&&queue[1]>queue[2])
            printf("player 2");
        else
        printf("player 3");}




    }

    }
    void viewlist()
{
struct node *t;
if(start==NULL)
printf("empty");
else
{
t=start;
if (t!=NULL)
for(int i=1;i<=3;i++)
{
    if(i<=top+1)
{printf("               player%d score is %d \n\n",i,t->info);
t=t->link;}
}}}
void insertnode()
{
struct node* temp,*t;
temp=createnode();
temp->info=count;
temp->link=NULL;
if(start==NULL)
start=temp;
else
{
t=start;
while(t->link!=NULL)
{t=t->link;}
t->link=temp;
}
}
























































































