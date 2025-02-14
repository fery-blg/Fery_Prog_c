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
    printf ("Donnez Y:");
    scanf ("%f", &PB.y);
}

void Affichage_point1(){
    struct Point PA ;
    printf("Les coordonnées du point sont : %f %f", PA.x, PA.y);
   

}
void Affichage_point2(){
    struct Point PB ;
    printf("Les coordonnées du point sont : %f %f", PB.x, PB.y);
   

}
float distance () {
    struct Point PA ;
    struct Point PB ;
    float d;
    
    d = sqrt((PA.x - PB.x)*(PA.x - PB.x) + (PA.y - PB.y)*(PA.y - PB.y));
    printf("La distance entre les deux points est : %f", d);


}





int main (){
    saisie1();
    saisie2();
    Affichage_point1();
    Affichage_point2();
    distance();
}