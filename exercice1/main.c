#include <stdio.h>
#include "struct.h"

int main(){
    character ent;
    ent.strength = 3;
    ent.intelligence = 5;
    ent.wisdom = 1;
    ent.agility = 4;
    ent.endurance = 2;
    
    printf("Voici les stats de votre personnage : \n");
    printf("Force : %d\nIntelligence : %d\nSagesse : %d\nAgilité : %d\nEndurance : %d", ent.strength, ent.intelligence, ent.wisdom, ent.agility, ent.endurance);
}
