#include "main.h"

struct Person person;

int main(void){
    set_fullname(&person, "Mathieu", "LE DIMNA");
    person.age = 24;
    person.life_state = ALIVE;

    print_person(&person);

    return 0;
}