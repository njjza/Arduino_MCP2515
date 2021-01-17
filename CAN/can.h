//NOTE This file needs to be redesigned after I got my design pattern book back.
#ifndef CAN_H
#define CNA_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/iom328p.h>

#define id_stand_mask       2047
#define id_extend_mask      262143

/* Pin Map */
#define CSPIN               123
#define CSPIN_HIGH
#define CSPIN_LOW
#define INTPIN              123

/* CAN function prototype */
bool can_init(int id);
int can_speed(uint32_t bitrate, uint8_t propseg_hint, uint8_t syncjump);
void can_id_std(int id, uint8_t *buffer);
void can_id_ext(int id, uint8_t *buffer);

void can_reset();

void can_tx_reg(uint8_t register, uint8_t val);
uint8_t can_rx_reg(uint8_t addr);

void can_rx_setmask();
void can_rx_setfilter();

int can_msg_construct();
int can_msg_extract(msg_type msg);

#endif
