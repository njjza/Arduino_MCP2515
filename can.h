//NOTE This file needs to be redesigned after I got my design pattern book back.
#include <stdint.h>
#include <stdbool.h>

#define id_stand_mask   2047
#define id_extend_mask  262143

enum msg_type {
    STANDARD, EXTENDED, REMOTE, ERROR
};

struct can_type {
    unsigned int id;
    bool extend;
}CAN;

/* CAN function prototype */
CAN can_init(int id);
void can_reset();

bool can_tx();
bool can_rx();
int can_rx_mode();
bool can_tx_cancel();
bool can_spi_tx();
bool can_spi_rx();

int can_msg_construct();
int can_msg_extract(msg_type msg);

void can_id_concat(int high, int low);
