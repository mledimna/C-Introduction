#include <stdio.h>

/* States enumeration */
typedef enum
{
    STATE_START = 0,
    STATE_USER_INPUT,
    STATE_PRINT_INPUT,
    STATE_PRINT
} States_Enum;

/* FSM handle */
typedef struct
{
    States_Enum state;
    void (*callback)(void);
} FSM_Handle_TypeDef;

typedef struct{
    int INPUT;
} FSM_Inputs;

FSM_Inputs fsm_inputs = {0};

/* Callbacks */
void start_callback(void)
{
    printf("Starting FSM...\r\n");
}

void user_input_callback(void)
{
    printf("Entrez un chiffre : ");
    scanf("%d", &(fsm_inputs.INPUT));
}

void print_callback(void)
{
    printf("PRIIIINT\r\n");
}

void print_input_callback(void){
    printf("Input : %d\r\n", fsm_inputs.INPUT);
}

// Tableau de lien entre valeurs d'énumération et callbacks associés
FSM_Handle_TypeDef fsm_states[] = {
    {STATE_START, &start_callback},
    {STATE_USER_INPUT, &user_input_callback},
    {STATE_PRINT_INPUT, &print_input_callback},
    {STATE_PRINT, &print_callback}
};

// Petit affichage de notre FSM
void print_state()
{
    // printf("State : %d, callback address : %p\r\n", hfsm.state, hfsm.callback);
}

void main(void)
{
    FSM_Handle_TypeDef hfsm = fsm_states[STATE_START];
    fsm_inputs.INPUT = 4;

    for (;;)
    {
        // Exécuter le callback
        hfsm.callback();

        // Exécuter les transitions
        switch (hfsm.state)
        {
        case STATE_START:
            hfsm = fsm_states[STATE_USER_INPUT];
            break;

        case STATE_USER_INPUT:
            if (fsm_inputs.INPUT == 4){
                hfsm = fsm_states[STATE_PRINT_INPUT];
            }
            else{
                hfsm = fsm_states[STATE_PRINT];
            }
            break;

        case STATE_PRINT:
            hfsm = fsm_states[STATE_USER_INPUT];
            break;

        case STATE_PRINT_INPUT:
            hfsm = fsm_states[STATE_USER_INPUT];
            break;
        }
    }
}