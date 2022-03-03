/*
A County Library Management System
Created by Vincent Mburu
on,Feb 2022
C89 Compiler
MIT license
*/
#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int action;
    printf("select an action:\n");
    printf("1.add new patron\n");
    printf("2.view patrons\n");
    printf("3.view books\n");
    printf("4.Add new books.\n");
    printf("Your actions: ");
    scanf("%d",&action);
    if (action< 1 || action>4){;
        printf("invalid action.Try again\n");
     }

     return action;
}
void execute_action(int action) {
    switch (action){
case 1:
        printf("adding a new patron\n");
        break;
case 2:
        printf("here is a list of patrons\n");
        break;
case 3:
        printf("here is a list of all books\n");
        break;
case 4:
        printf("adding a new book\n");
        break;
    default:
        printf("invalid action.\n");
  }
}

int main()
{
        printf("COUNTY LIBRARY SYSTEM.\n");
        printf("Welcome Mr Vincent Mburu.\n");
        execute_action (menu());
        return 0;
}


