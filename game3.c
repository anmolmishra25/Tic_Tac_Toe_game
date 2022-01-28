#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void box(void);
void box1(void);
void input1(void);
void input2(void);
char choose1,choose2;
int t=1,g=0,z=1;
char p1[30],p2[30],s1,s2,num[3][3],n=49,ex;
int main()
{
    int c1=0,c2=0;
    printf("enter the name of player 1\n");
    gets(p1);
    printf("enter the name of player 2\n");
    gets(p2);
    printf("enter the symbol which %s want to use\n",p1);
    scanf("%c",&s1);
    printf("enter the symbol which %s want to use\n",p2);
    fflush(stdin);
    scanf("%c",&s2);
    while(1)
    {
        begin:
        printf("GAME %d\n",z);
        while(1)
        {
            printf("enter the number which %s you want to choose(except numeric symbols)\n",p1);
            if(t==1)
            {
                box1();
            }
            box();
            choose1=getch();
            if(choose1>=49&&choose1<=57)
                input1();
            else
                continue;
            if(s1==num[0][0]&&s1==num[0][1]&&s1==num[0][2])
            {
                printf("%s have won game %d\n",p1,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c1++;
                    goto end;
                }
                else
                {
                    z++;
                    c1++;
                    t=1;
                    continue;
                }
            }
            else if(s1==num[1][0]&&s1==num[1][1]&&s1==num[1][2])
            {
                printf("%s have won game %d\n",p1,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c1++;
                    goto end;
                }
                else
                {
                    z++;
                    c1++;
                    t=1;
                    continue;
                }
            }
            else if(s1==num[2][0]&&s1==num[2][1]&&s1==num[2][2])
            {
                printf("%s have won game %d\n",p1,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c1++;
                    goto end;
                }
                else
                {
                    z++;
                    c1++;
                    t=1;
                    continue;
                }
            }
             else if(s1==num[0][0]&&s1==num[1][0]&&s1==num[2][0])
            {
                printf("%s have won game %d\n",p1,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    break;
                }
                else
                {
                    z++;
                    t=1;
                    continue;
                }
            }
            else if(s1==num[0][1]&&s1==num[1][1]&&s1==num[2][1])
            {
                printf("%s have won game %d\n",p1,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c1++;
                    goto end;
                }
                else
                {
                    z++;
                    c1++;
                    t=1;
                    continue;
                }
            }
            else if(s1==num[0][2]&&s1==num[1][2]&&s1==num[2][2])
            {
                printf("%s have won game %d\n",p1,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c1++;
                    goto end;
                }
                else
                {
                    z++;
                    c1++;
                    t=1;
                    continue;
                }
            }
             else if(s1==num[0][0]&&s1==num[1][1]&&s1==num[2][2])
            {
                printf("%s have won game %d\n",p1,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c1++;
                    goto end;
                }
                else
                {
                    z++;
                    c1++;
                    t=1;
                    continue;
                }
            }
            else if(s1==num[0][2]&&s1==num[1][1]&&s1==num[2][0])
            {
                printf("%s have won game %d\n",p1,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c1++;
                    goto end;
                }
                else
                {
                    z++;
                    c1++;
                    t=1;
                    goto begin;
                }
            }
            if((num[0][0]==s1 || num[0][0]==s2) && (num[0][1]==s1 || num[0][1]==s2) && (num[0][2]==s1 || num[0][2]==s2) && (num[1][0]==s1 || num[1][0]==s2) && (num[1][1]==s1 || num[1][1]==s2) && (num[1][2]==s1 || num[1][2]==s2) && (num[2][0]==s1 || num[2][0]==s2) && (num[2][1]==s1 || num[2][1]==s2) && (num[2][2]==s1 || num[2][2]==s2))
            {
                printf("Game %d is drawn\n",z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
            printf("enter the number of box %s you want to choose (except numeric symbols)\n",p2);
            box();
            restart:
            choose2=getch();
            if(choose2>=49&&choose2<=57){
                input2();
            }
            else
                goto restart;
            t++;
            if(s2==num[0][0]&&s2==num[0][1]&&s2==num[0][2])
            {
                printf("%s have won game %d\n",p2,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
            else if(s2==num[1][0]&&s2==num[1][1]&&s2==num[1][2])
            {
                printf("%s have won game %d\n",p2,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
             else if(s2==num[0][2]&&s2==num[1][1]&&s2==num[2][0])
            {
                printf("%s have won game %d\n",p2,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
            else if(s2==num[2][0]&&s2==num[2][1]&&s2==num[2][2])
            {
                printf("%s have won game %d\n",p2,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
            else if(s2==num[0][2]&&s2==num[1][2]&&s2==num[2][2])
            {
                printf("%s have won game %d\n",p2,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
            else if(s2==num[0][1]&&s2==num[1][1]&&s2==num[2][1])
            {
                printf("%s have won game %d\n",p2,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
            else if(s2==num[0][0]&&s2==num[1][0]&&s2==num[2][0])
            {
                printf("%s have won game %d\n",p2,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }

            else if(s2==num[0][0]&&s2==num[1][1]&&s2==num[2][2])
            {
                printf("%s have won game %d\n",p2,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
            else if(s2==num[0][0]&&s2==num[1][1]&&s2==num[2][2])
            {
                printf("%s have won game %d\n",p2,z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
            if((num[0][0]==s1 || num[0][0]==s2) && (num[0][1]==s1 || num[0][1]==s2) && (num[0][2]==s1 || num[0][2]==s2) && (num[1][0]==s1 || num[1][0]==s2) && (num[1][1]==s1 || num[1][1]==s2) && (num[1][2]==s1 || num[1][2]==s2) && (num[2][0]==s1 || num[2][0]==s2) && (num[2][1]==s1 || num[2][1]==s2) && (num[2][2]==s1 || num[2][2]==s2))
            {
                printf("Game %d is drawn\n",z);
                printf("if you both of them want to continue the game please press any key and to exit the game press e\n");
                ex=getch();
                if(ex=='e')
                {
                    c2++;
                    goto end;
                }
                else
                {
                    z++;
                    c2++;
                    t=1;
                    continue;
                }
            }
        }
        g++;
    }
    end:
        printf("%s won %d times and %s won %d times.\n",p1,c1,p2,c2);
        if(c1>c2)
            printf("%s is the winner of the series\n",p1);
        else if(c2>c1)
            printf("%s is the winner of the series\n",p2);
        else
            printf("the series of games is drawn\n");
        printf("THANKS FOR PLAYING THE GAME\n");
    return(0);
}
void box1(void)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            num[i][j]=n;
            n++;
        }
    }
    n=49;
}
void input1(void)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(num[i][j]==choose1)
            {
                num[i][j]=s1;
            }
        }
    }
}
void input2(void)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(num[i][j]==choose2)
            {
                num[i][j]=s2;
            }
        }
    }
}
void box(void)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j<=1)
            printf(" %c |",num[i][j]);
            else
                printf(" %c ",num[i][j]);
        }
        if(i<=1){
            printf("\n");
            for(int k=1;k<=10;k++)
            {
                if(k%4==0)
                    printf("|");
                else
                    printf("-");
            }
            printf("\n");
        }
        else
            printf("\n");
    }
}
