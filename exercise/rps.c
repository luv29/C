#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char *name;
    int choice;

    printf("Enter your name\n");
    scanf("%s", name);
    printf("\n");

    int flag=1;
    while(flag==1)
    {
        srand(time(NULL));
        int comp = (rand()%3) +1;

        printf("%s ,it is your turn.\n", name);
        printf("Press 1 for rock\n");
        printf("Press 2 for paper\n");
        printf("Press 3 for scissor\n");
        printf("press 0 to exit.\n");
        scanf("%d", &choice);

        if(choice==0)
            break;        
        if(choice!=0&&choice!=1&&choice!=2&&choice!=3)
        {
            printf("Invalid input.\n\n");
            continue;
        }

        if(choice==comp)
            printf("It is a draw.\n");
        else if((choice==1&&comp==3)||(choice==2&&comp==1)||(choice==3&&comp==1))
            printf("You won.\n");
        else 
            printf("You lost\n");

        if(comp==1)
            printf("Computer chose rock.\n\n");
        if(comp==2)
            printf("Computer chose paper.\n\n");
        if(comp==3)
            printf("Computer chose scissor.\n\n");


    }

    printf("Thanks for playing hope you enjoyed.\n");
    return 0;
}