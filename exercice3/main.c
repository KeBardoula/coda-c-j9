#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

int main(){
    character *ent = malloc(sizeof(*ent));
    
    ent->strength = 1;
    ent->intelligence = 2;
    ent->wisdom = 3;
    ent->agility = 4;
    ent->endurance = 5;
    
    printf("L'adresse de la structure de votre personnage est : %p\n",ent);
    printf("Les stats de votre perso sont : \n");
    printf("Force : %d\nIntelligence : %d\nSagesse : %d\nAgilité : %d\nEndurance : %d", ent->strength, ent->intelligence, ent->wisdom, ent->agility, ent->endurance);
    
    exit(0);
}
