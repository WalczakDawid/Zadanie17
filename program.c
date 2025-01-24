#include <stdio.h>
#include <stdlib.h>
float cuboid_volume(float a, float b, float h){
return (a*b*h);
}
float ball_volume(float r){
return(((4.0/3.0)*3.14)*(r*r*r));
}
int main()
{
    float a, b, h,r;
    int wybor;
    while (1)
    {


    printf("Wybierz bryle ktora chcesz obliczyc\n");
    printf("0. Wyjscie\n");
    printf("1. Objetosc prostopadloscianu\n");
    printf("2. Objetosc kuli\n");
    printf("Wybor:");
    scanf("%i", &wybor);

    if (wybor==2){

    printf ("Podaj promien kuli\n");
    scanf ("%f", &r);

    printf("\nObjetosc kuli: %f", ball_volume(r));
    printf("\n");
    }


    else if (wybor==1)
    {

    printf("Podaj dlugosc podstawy prostopadloscianu\n");
   scanf("%f", &a);

   printf("Podaj szerokosc podstawy prostopadloscianu\n");
   scanf("%f", &b);

   printf("Podaj wysokosc podstawy prostopadloscianu\n");
   scanf("%f", &h);

   printf("\nObjetosc prostopadloscianu: %f\n", cuboid_volume(a, b, h));
    printf("\n");
     }
else{
    return 0;

}
}
    return 0;
}
