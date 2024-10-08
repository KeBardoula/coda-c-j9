#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"

int main(){
    character *perso = malloc(sizeof(*perso));
    
    perso->name = malloc(20 * sizeof(char));
    
    perso->strength = 1;
    perso->intelligence = 2;
    perso->wisdom = 3;
    perso->agility = 4;
    perso->endurance = 5;
    
    strcpy(perso->name, "Chibraxor");
    
    printf("L'adresse de %s est : %p\n", perso->name, (void *)perso);
    printf("Voici les stats de %s :\n", perso->name);
    printf("Force : %d\nIntelligence : %d\nSagesse : %d\nAgilité : %d\nEndurance : %d\n", perso->strength, perso->intelligence, perso->wisdom, perso->agility, perso->endurance);
    
    free(perso->name);
    free(perso);
    exit(0);
}
