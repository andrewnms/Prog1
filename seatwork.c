#include <stdio.h>

void ask();

//std number,
int main()
{
    int stnum, i, res = 0;
    double Output = 0.0, Holder = 0.0, Ave = 0.0;
    printf("Hello, Could you give me your Student Number? ");
    scanf(" %d", &stnum);

    printf("\n\n\tGrading System\n");

    for(i = 0; i <= 5; ++i)
    {
        ask(i);
        scanf(" %lf", &Holder);
        if(i == 0 || i == 1)
        {
            Ave += Holder;
        }
        else
            Output += Holder;
        Holder = 0;
    }

    Ave /= 2;
    Output += Ave;
    Output /= 5;

    printf("\n\n\tStudent Num: %d\n\tOutput GPA: %.2lf\n\n\n",stnum , Output);
    return 0;
}

void ask(int i)
{
    switch(i)
    {
        case(0):
            printf("\tHO1: ");
            break;
        case(1):
            printf("\tHO2: ");
            break;
        case(2):
            printf("\tCourse Activity: ");
            break;
        case(3):
            printf("\tMidterms: ");
            break;
        case(4):
            printf("\tFinals: ");
            break;
        case(5):
            printf("\tMachine Project: ");
            break;
    }
}
