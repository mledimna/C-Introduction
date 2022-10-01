#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define FIRSTNAME_LEN   ((int)30)
#define LASTNAME_LEN    ((int)30)

enum LifeState{
    ALIVE,
    DEAD
};

struct Person{
    char firstname[FIRSTNAME_LEN];
    char lastname[LASTNAME_LEN];
    uint8_t age;
    enum LifeState life_state;
};

void print_person(struct Person * _person){
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

void kill(struct Person * _person){
    _person->life_state = DEAD;
}

int main(void){
    struct Person sc;
    
    strcpy(sc.firstname, "Sarah");
    strcpy(sc.lastname, "Connor");
    sc.age = 25;
    sc.life_state = ALIVE;

    printf("Size of struct Person : %d bytes\r\n", sizeof(sc));
    printf("Size of address of struct Person : %d bytes\r\n", sizeof(&sc));

    print_person(&sc);

    kill(&sc);

    print_person(&sc);

    return 0;
}

/*
Output
Size of struct Person : 68 bytes
Size of address of struct Person : 4 bytes
Sarah Connor (25yo) is alive
Sarah Connor (25yo) is dead
*/