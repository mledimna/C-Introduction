#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>
#include <inttypes.h>
#include <string.h>

#define FIRSTNAME_LEN   ((int)30)
#define LASTNAME_LEN    ((int)30)

/**
 * @brief State of life
 * 
 */
enum LifeState{
    ALIVE,
    DEAD
};

/**
 * @brief Person structure
 * 
 */
struct Person{
    char firstname[FIRSTNAME_LEN];
    char lastname[LASTNAME_LEN];
    uint8_t age;
    enum LifeState life_state;
};

void set_fullname(struct Person * const _person, const char* _firstname, const char* _lastname);
void print_person(struct Person * const _person);
void kill(struct Person * const _person);

#endif /* PERSON_H */