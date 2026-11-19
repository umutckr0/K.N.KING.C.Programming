#include <stdio.h>

#define SPHERE_FORMULA 4.0f/3.0f
#define PI 3.14

int main (void)
{

    float radius , volume;

    printf("Enter radius: \n");
    scanf("%f", &radius);

    volume = PI * SPHERE_FORMULA * radius * radius * radius;

    printf("The volume is: \n %.2f", volume);


}