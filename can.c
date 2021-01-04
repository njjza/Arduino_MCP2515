#include "can.h"
#include "2515.h"

bool can_construct_flag = false; //flag of factory pattern

/** 
 * Function Name: can_init
 * Method       : Construct can_type
 *                Initialize CAN controller
 * 
 * Input        : int identifier
 * Output       : CAN struct holding can identifier 
 */
CAN can_init(int id) {
    CAN can_id;
    can_construct_flag = true;

    //Following code set can 
    can_reset();

    return can_id;
}

void can_reset() {
    // LOW on RESET Pin
    
}

bool can_tx() {

}

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


