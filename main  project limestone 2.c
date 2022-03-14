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
    printf("1.View users\n");
    printf("2.add new user\n");
    printf("3.edit user\n");
    printf("4.Delete user.\n");
    printf("5.Change password\n");
    printf("6.Log out\n");
    printf("7.Exit System\n");
    printf("Your actions\n: ");
    scanf("%d",&action);
    if (action< 1 || action>4){;
        printf("invalid action.Try again\n");
     }

     return action;
}
void execute_action(int action) {
    switch (action){
case 1:
        printf("view users\n");
        break;
case 2:
        printf("add new user\n");
        break;
case 3:
        printf("edit User\n");
        break;
case 4:
        printf("Delete user\n");
        break;
case 5:
       printf("Change Password\n");
       break;
case 6:
       printf("Log out\n");
       break;
case 7:
       printf("Exit Action\n");
       break;
case 8:
      printf("Exit System\n");
      break;

    default:
        printf("Selected Action.\n");
  }
}

int main()
{
        printf("COUNTY LIBRARY SYSTEM.\n");
        printf("Welcome Mr Vincent Mburu.\n");
        execute_action (menu());
        return 0;
}


