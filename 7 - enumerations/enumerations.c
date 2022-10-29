#include <stdio.h>

enum State{
    STATE_STOPPED,
    STATE_ASCENDING,
    STATE_DESCENDING
};

struct Lift{
    enum State state;
    int actual_floor;
    int target_floor;
};

void select_floor(int _floor){

}

void lift_fsm(struct Lift * const _lift){
    switch (_lift->state){
        case STATE_STOPPED:
        break;

        case STATE_ASCENDING:
        (_lift->actual_floor)++;
        break;

        case STATE_DESCENDING:
        (_lift->actual_floor)--;
        break;
    }

    if (_lift->actual_floor > _lift->target_floor) _lift->state = STATE_DESCENDING;
    else if (_lift->actual_floor < _lift->target_floor) _lift->state = STATE_ASCENDING;
    else if (_lift->actual_floor == _lift->target_floor) _lift->state = STATE_STOPPED;
}

void print_lift(const struct Lift * const _lift){
    char state[30];

    switch (_lift->state){
        case STATE_STOPPED:
        sprintf(state, "stopped");
        break;

        case STATE_ASCENDING:
        sprintf(state, "ascending");
        break;

        case STATE_DESCENDING:
        sprintf(state, "descending");
        break;
    }

    printf("Lift is %s, actual floor is %d and target floor is %d\r\n", state, _lift->actual_floor, _lift->target_floor);
}

int main(void){
    struct Lift lift;
    lift.actual_floor = 0;
    lift.target_floor = 3;
    lift.state = STATE_STOPPED;
    
    // Print initial state
    print_lift(&lift);

    // Run while lift as not reached target floor
    while (lift.actual_floor != lift.target_floor){
        lift_fsm(&lift);
        print_lift(&lift);
    }

    return 0;
}

/*
Output
Lift is stopped, actual floor is 0 and target floor is 3
Lift is ascending, actual floor is 0 and target floor is 3
Lift is ascending, actual floor is 1 and target floor is 3
Lift is ascending, actual floor is 2 and target floor is 3
Lift is stopped, actual floor is 3 and target floor is 3
*/