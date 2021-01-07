//NOTE This file needs to be redesigned after I got my design pattern book back.
#include <stdint.h>
#include <stdbool.h>

#define id_stand_mask       2047
#define id_extend_mask      262143

/* Pin Map */
#define CSPIN               123
#define SOPIN               123
#define SIPIN               123
#define SCKPIN              123
#define INTPIN              123

enum MSG_TYPE {
    STANDARD, EXTENDED, REMOTE, ERROR
};

/* CAN function prototype */
bool can_init(int id);
int can_speed(uint32_t bitrate, uint8_t propseg_hint, uint8_t syncjump);
void can_id_std(int id, uint8_t *buffer);
void can_id_ext(int id, uint8_t *buffer);

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
