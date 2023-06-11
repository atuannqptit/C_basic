

#include <stdio.h>
#include <stdint.h>

uint8_t PORTA = 0x000000000;

typedef enum 
{
    PORT0       = 1 << 0,
    PORT1       = 1 << 1,
    PORT2       = 1 << 2,
    PORT3       = 1 << 3,
    PORT4       = 1 << 4,
    PORT5       = 1 << 5,
    PORT6       = 1 << 6,
    PORT7       = 1 << 7

}Pin;

typedef enum
{
    RESET,
    SET
}Status;

void pinHigh(uint8_t *port, Pin pin)
{
    *port |= pin;
}

void pinLow(uint8_t *port, Pin pin)
{
    *port &= ~pin;
}

void digital(Pin pin, Status status )
{
    if(status == SET)
    {
        uint8_t temp = 0b10000000;
        temp = temp >> pin;
        PORTA = PORTA | temp;

    }
    else
    {
        uint8_t temp = 0b10000000;
        temp = ~(temp >> pin);
        PORTA = PORTA & temp;

    }

}

int main(int argc, char *argv[])
{
    uint8_t PORTA = 0b00000000;
    pinHigh(&PORTA, PORT0 | PORT3);

    
    return 0;
}
