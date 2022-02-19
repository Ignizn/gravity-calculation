#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* G*(mass1 * mass2)/ power(radius, 2) */
    /* 6.67408 * pow(10, -11) */

    double G;
    G = 6.67408 * pow(10, -11);
    int mass1;
    printf("Enter the first object's mass: ");
    scanf("%d", &mass1);

    int mass2;
    printf("Enter the second object's mass: ");
    scanf("%d", &mass2);

    int radius;
    printf("Enter the distance between the centers of their mass: ");
    scanf("%d", &radius);

    double force;
    force = G * mass1 * mass2 / pow(radius, 2);




    printf("%d,%d,%d,%0.16f\n", mass1,mass2,radius,force);
    printf("%0.16f \n", G);
    printf("  _-----_                            _-----_ \n");
    printf(" |       |                          |       | \n");
    printf("(  %dkg  )------->         <-------(  %dkg  )\n", mass1, mass2);
    printf(" |       |                          |       |\n");
    printf("  --___--           r=%dm            --___--  \n", radius);
    printf(" \n");
    printf("These objects attract each other for about: %0.16fN of force \n", force);
    printf("Yes gravity is indeed a tiny force \n", force);

    return 0;
}
