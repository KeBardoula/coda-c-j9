#ifndef STRUCT_H
#define STRUCT_H

struct s_char {
    char *name;
    int strength;
    int intelligence;
    int wisdom;
    int agility;
    int endurance;
};

typedef struct s_char character;

#endif //STRUCT_H
