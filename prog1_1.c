#include <stdio.h>
#define PI 3.1416

int main()
{
    double radUser,resRad;
    printf("Hello! What's the Radius of your Circle?\n::\t");
    scanf(" %lf", &radUser);
    resRad = PI * (radUser * radUser);
    printf("Here is the given Area of your Circle!\n::\t%lf\n", resRad);
    return 0;
}
