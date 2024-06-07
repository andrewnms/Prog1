#include <stdio.h>
#include <stdlib.h>

// CHECKS FOR OS, makes CLEAR better lol makes output cleaner instead of one whole block.
#ifdef _WIN332
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif

int main()
{
    int budget, amnt, hold, i = 1, j = 1;
    char choice;

    system(CLEAR);
    printf("\n\nBUDGET CHECKER!\n\nWhat's your Initial Budget?\n");
    scanf(" %d", &budget);
    system(CLEAR);

    printf("\n\nHow about the Initial Deposit Amount?\n");
    scanf(" %d", &amnt);
    system(CLEAR);

    //CHECKS IF I is still TRUE aka 1
    while(i)
    {
        //Checks Deposit and Budget
        if(amnt < budget)
        {
            printf("\n\nLooks like the Deposit's less than your budget,\nDo you wish to add more? (Y/N)\n");
            scanf(" %c", &choice);
            system(CLEAR);

            if(choice == 'Y' || choice == 'y')
            {
                j = 1;
                while(j)
                {
                    printf("\n\nEnter your Deposit Amount:\n");
                    scanf(" %d", &hold);
                    if(hold > 0)
                    {
                        j = 0;
                        amnt += hold;

                    } else {
                        printf("\n\nInvalid Amount. Please enter an actual amount.\n\n");
                    }
                }
            } else if (choice == 'N' || choice == 'n') {
                system(CLEAR);
                printf("\n\nThank you for using the App!\n\n");
                i = 0;
            } else {
                printf("\n\nInvalid Choice!\n\n");
            }
        }
        else
        {
            i = 0;
        }
    }

    if(amnt >= budget)
    {
        system(CLEAR);
        printf("\n\nYour Deposit is Greater or Equal to the Budget!\n\nOVERBUDGET!!\n\n");
    }
    return 0;
}
