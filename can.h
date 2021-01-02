#include "2515_register_map.h"
#include <stdint.h>

/* CAN */
#define CAN_STATUS uint8_t

struct can_type {

};
void can_init();
int can_send();
int can_rx();
int can_speed();
int can_spi_tx();
int can_spi_rx();
