//NOTE This file needs to be redesigned after I got my design pattern book back.
#include "2515.h"
#include <stdint.h>

#define CAN_STATUS uint8_t

struct can_type {

};

/* CAN function prototype */
void can_init();
int can_send();
int can_rx();
int can_speed();
int can_spi_tx();
int can_spi_rx();
