#include "person.h"

/**
 * @brief Set person fullname
 * 
 * @param _person Person pointer
 * @param _firstname Firstname string
 * @param _lastname Lastname string
 */
void set_fullname(struct Person * const _person, const char* _firstname, const char* _lastname){
    if ((strlen(_firstname)>=FIRSTNAME_LEN) || (strlen(_lastname)>=LASTNAME_LEN)) return;
    strcpy(_person->firstname, _firstname);
    strcpy(_person->lastname, _lastname);
}

/**
 * @brief Print person structure
 * 
 * @param _person Person struct pointer
 */
void print_person(struct Person * const _person){
    char life_state[10];

    switch (_person->life_state){
        case ALIVE :
        strcpy(life_state, "alive");
        break;

        case DEAD :
        strcpy(life_state, "dead");
        break;
    }

    printf("%s %s (%dyo) is %s\r\n", _person->firstname, _person->lastname, _person->age, life_state);
}

/**
 * @brief Kill person
 * 
 * @param _person Person struct pointer
 */
void kill(struct Person * const _person){
    _person->life_state = DEAD;
}