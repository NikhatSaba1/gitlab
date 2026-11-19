#include<stdio.h>
#include<stdlib.h>
struct day
{
    char*dayname;
    int*date;
    char*activity;
};

void create(struct day*day)
{
    day->dayname=(char)malloc(sizeof(char)*20);
    day->activity=(char)malloc(sizeof(char)*100);
    printf("Enter the day name :");
    scanf("%s",day->dayname);
    printf("Enter the date :");
    scanf("%d",day->date);
    printf("Enter the activity of day:");
    scanf("%[^\n]s",day->activity);
}

void read(struct day*calendar,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("enter the day details:");
        create(&calendar[i]);
    }
}

void display(struct day*calendar,int size)
{
    printf("\n weeks activity details:");
    for(int i=0;i<size;i++)
    {
        printf("day %d\n",i+1);
        printf("dayname :%s\n",calendar[i].dayname);
        printf("date :%d\n",calendar[i].date);
        printf("activity :%s\n",calendar[i].activity);
        printf("\n");
    }
}

void freememory(struct day*calendar,int size)
{
    for(int i=0;i<size;i++)
    {
        free(calendar[i].dayname);
        free(calendar[i].activity);
    }
}

void main(int size)
{
   int n;
    printf("\nEnter the number of days in week:");
    scanf("%d",&n);
    struct day*calendar=(struct day)malloc(sizeof(struct day)*n);
    if(calendar==NULL)
    {
        printf("\n memory allocation failed ,exiting program:");
        return 0;
    }

    read(calendar,size);
    display(calendar,size);
    freememory(calendar,size);
    free(calendar);
    return 1;

}
