#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define N 100
char ara[N],str[N];
char arr[5][5][15]= {"iit","bit","now","bug","log","game","team","love","code","play","bliss","space","magic","study","happy",
                     "analog","google","binary","compile","digital","windows","database","software","programming","jahangirnagar"
                    };
void delay(int n)
{
    int count=0;
    double i;
    for(i=0; i<n; i+=0.00001)
        count=0;
}
void load()
{
    printf("\t\t\t\t\tLoading....\n\t\t\t\t\tPlease Wait\n\n\n\t");
    int i;
    for(i=0; i<N; i++)
    {
        printf("|");
        delay(100);
    }
    system("cls");
    printf("\t\t\t\t\tThe Game Begins in....\n");
    delay(1000);
    for(i=3; i>=1; i--)
    {
        printf("\t\t\t\t\t\t%d\r",i);
        delay(1000);
    }
    system("cls");
}
void lvl(int);


int main()
{
    while(1)
    {


        char x[] = "IIT TYPEMASTER GAME";
          int i;
          printf("\t\t\t\t\tWelcome To\n\t\t\t\t   ");
          delay(2000);
          for(i=0; i<19; i++)
          {
              printf("%c",x[i]);
              delay(200);
          }
          delay(1000);

        printf("\nSTART MENU\n\n");
        delay(1000);
        printf("1.Play Game\n2.Exit\nEnter your choice:");
        char ch=getchar();
        if(ch=='2')
            return 0;
        system("cls");
        load();

        double point=0;
        int flag=0,level=0,j;
        for(level=0; level<5&&!flag; level++)
        {
            lvl(level+1);
            for(j=0; j<5; j++)
            {
                printf("\n\n\n\t\t\t\t\t\"%s\"",arr[level][j]);
                Sleep(1000);
                system("cls");

                printf("\n\n\n\t\t\t\t\t");
                scanf("%s",str);
                system("cls");
                if(strcmp(arr[level][j],str)==0)
                    point+=strlen(str);
                else
                {
                    printf("\t\t\t\t\t  LEVEL 0%d FAILED!!!!\n",level+1);
                    delay(1000);
                    printf("\t\t\t\t\tYour total score is : %0.0lf\n",point);
                    delay(1000);
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                printf("\t\t\t\t\tLEVEL 0%d passed!!!\n",level+1);
                delay(1000);
                printf("\t\t\t\t\tCURRENT SCORE : %0.0lf\n",point);
                delay(3000);

                system("cls");
            }
        }
        if(!flag)
        {
            printf("\t\t\t\tCONGRATULATIONS!!!You are a winner!!!\n",point);
            Sleep(1000);
            printf("\t\t\t\t\tYour total score is : %0.0lf\n",point);
        }
        Sleep(1000);
        printf("\n\n\t\t\t\t\t\tGAME OVER");
        delay(5000);
        system("cls");


        getchar();
    }
}


void lvl(int level)
{
    char a[]="Level    ";
    printf("\t\t\t\t\t");
    int i;
    for(i=0; i<9; i++)
    {
        printf("%c",a[i]);
        delay(200);
    }
    printf("0%d",level);
    char b[]="Enter the following words....";
    printf("\n\t\t\t\t");
    for(i=0; i<30; i++)
    {
        printf("%c",b[i]);
        delay(100);
    }
    system("cls");
}












