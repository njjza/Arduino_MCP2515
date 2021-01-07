#include "can.h"
#include "2515.h"
#include "spi.h"

int can_id;
MSG_TYPE msg_type;
bool can_construct_flag = false; //flag of factory pattern

/** 
 * Function Name: can_init
 * Method       : Construct can_type
 *                Initialize CAN controller
 * 
 * Input        : int identifier
 * Output       : CAN struct holding can identifier 
*/
bool can_init(int id) {
    CSPIN = 1;

    if (can_construct_flag) {
        return false;
    }

    if (id > 2047) {
        msg_type = EXTENDED;
    }
    can_id = id;
    
    
    //SPI.init();
    can_reset();

    can_speed(10000, , );
    uint8_t[4] bytebuf

    uint8_t msg = 1 << 7;
    //spi transmit msg;

    msg = 0x80;
    //can write register

    msg = CANINTE_RX0IE | CANINTE_RX1IE | CANINTE_ERRIE | CANINTE_MERRE;
    //can write register

    
    can_construct_flag = true;
    return true;
}

int can_speed(uint32_t bitrate, uint8_t propseg_hint, uint8_t syncjump) {
    

    if (!bitrate || bitrate > 1000000 || syncjump > 4)
		return -1;
	if (!propseg_hint)
		propseg_hint = 1;
	if (!syncjump)
		syncjump = 1;

}

void can_id_std(int id, uint8_t *buffer) {

}

void can_id_ext(int id, uint8_t *buffer) {

}

/**
 * Function Name: can_reset
 * Method       : Reset CAN protocol controller
 * 
 * Input        : void
 * Output       : void
 */
void can_reset() {
    CSPIN = 0;
    //spi_transfer(SPI_RESET)
    CSPIN = 1;
}

/**
 * Function Name: can_tx
 * Method       : Transmit message to transmission buffer
 * 
 * Input        : Messages;
 * Output       : boolean:  True -> Success
 *                          Flase -> Failed 
 */
bool can_tx() {

}

/**
 * Function Name: can_rx()
 * Method       : Receive messages that is in receiving buffer
 * 
 * Input        : void
 * Output       : 
 */
bool can_rx() {

}

int can_rx_mode() {

}

bool can_tx_cancel() {

}

bool can_spi_tx() {

}

bool can_spi_rx() {

}


int can_msg_construct() {

}

int can_msg_extract(msg_type msg) {
    switch (msg)
    {
    case REMOTE:

        break;

    case ERROR:

        break;

    default:

        break;
    }
}

void can_id_concat(int high, int low)  {

}


