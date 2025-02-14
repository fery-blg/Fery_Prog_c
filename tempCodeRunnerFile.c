#include <stdio.h>
#include <math.h>
struct Point {
    float x;
    float y;
};

void  saisie1(){
    struct Point PA;
    printf ("Donnez X:");
    scanf ("%f", &PA.x);
    printf ("Donnez Y:");
    scanf ("%f", &PA.y);
}

void saisie2(){
    struct Point PB;
    printf ("Donnez X:");
    scanf ("%f", &PB.x);