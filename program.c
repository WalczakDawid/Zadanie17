#include <stdio.h>
#include <stdlib.h>
float cuboid_volume(float a, float b, float h){
return (a*b*h);
}
int main()
{
    float a, b, h;
    printf("Podaj dlugosc podstawy prostopadloscianu\n");
   scanf("%f", &a);

   printf("Podaj szerokosc podstawy prostopadloscianu\n");
   scanf("%f", &b);

   printf("Podaj wysokosc podstawy prostopadloscianu\n");
   scanf("%f", &h);

   printf("\nObjetosc prostopadloscianu: %f\n", cuboid_volume(a, b, h));
    return 0;
}
