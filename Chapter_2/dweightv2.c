#include <stdio.h>

int main (void){
    int height, lenght, width, volume, weight;
    
    printf("Enter height of a box:" );
    scanf("%d", &height);
    
    printf("Enter lenght of a box:" );
    scanf("%d", &lenght);

    printf("Enter width of a box:" );
    scanf("%d", &width);

    volume = height * lenght * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n ", weight);


    return 0;
}