#include<stdio.h>
void main()
{
int age;
char gender;
printf("Enter the gender of a person:");
scanf("%d ",&gender);
printf("Enter the age of a person:");
scanf("%s ",&age);
if(age>=1 && age<60)
{
    if(gender=='M' || gender=='m')
    printf("He is not a senior citizen");
else
    printf("She is not a senior citizen");

}
else if(age>60 && age<80)
{
    if(gender=='M' || gender=='m')
        printf("He is a senior citizen");
    else
        printf("she is  senior citizen");
}
else if(age>80 && age<120)
{
    if(gender=='M' || gender=='m')
        printf("He is a super senior citizen");
    else
        printf("She is super senior citizen");
}
else
    printf("Invalid age");
}
