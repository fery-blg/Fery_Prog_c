#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

void saisie(struct Point *p) {
    printf("Donnez X: ");
    scanf("%f", &p->x);
    printf("Donnez Y: ");
    scanf("%f", &p->y);
}

void affichage_point(struct Point p) {
    printf("Les coordonnées du point sont : %f %f\n", p.x, p.y);
}

float distance(struct Point p1, struct Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main() {
    struct Point PA, PB;

    saisie(&PA);
    saisie(&PB);    
    affichage_point(PA);
    affichage_point(PB);
    distance(p1:PA,p2: PB);

}