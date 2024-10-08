#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

void fill_struct(character * ent){
    ent->strength = 1;
    ent->intelligence = 2;
    ent->wisdom = 3;
    ent->agility = 4;
    ent->endurance = 5;
}

int main(){
    character ent;
    fill_struct(&ent);
    
    printf("Force : %d\nIntelligence : %d\nSagesse : %d\nAgilité : %d\nEndurance : %d", ent.strength, ent.intelligence, ent.wisdom, ent.agility, ent.endurance);
    
    exit(0);
}
