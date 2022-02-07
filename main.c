/*
county library system
by Joshua
Feb 2022
MIT License
c99 compiler
*/
#include <stdio.h>
#include <stdlib.h>
int menu() {
 int action;
printf("Select an action below\n");
printf("1.Add new Patron\n");
printf("2.View all patrons\n");
printf("3.Add new Resource\n");
printf("4.View all resources\n");
printf("Your action:");
scanf("%d",&action);
return action;
}

int main()
{
    int action;
    printf("county library system\n");
    printf("welcome Mr Joshua\n");
    action=menu();
    printf("you selected action %d\n",action);
    return 0;
}
