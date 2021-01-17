#include "CAN/can.h"
#include "../2515.h"
#include "SPI/spi.h"

int can_id;
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
    
    
    spi_init();
    can_reset();

    can_speed(10000, , );

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

int can_msg_construct() {

}



/**
 * Function Name: can_reset
 * Method       : Reset CAN protocol controller
 * 
 * Input        : void
 * Output       : void
 */
void can_reset() {
    CSPIN_LOW;

    spi_tx(SPI_RESET);

    CSPIN_HIGH;
}

/**
 * Function Name: can_tx
 * Method       : Transmit value to designed register
 * 
 * Input        : Messages;
 * Output       : boolean:  True -> Success
 *                          Flase -> Failed 
 */
void can_tx_reg(uint8_t register, uint8_t val) {
    CSPIN_LOW;

    spi_tx(SPI_WRITE);
    spi_tx(address);
    spi_tx(val)

    CSPIN_HIGH;
}

/**
 * Function Name: can_rx()
 * Method       : Receive value that is in deisnged register
 * 
 * Input        : void
 * Output       : 
 */
uint8_t can_rx_reg(uint_t addr) {
    CSPIN_LOW;

    spi_tx(SPI_READ)
    uint8_t result = spi_tx(addr);
    CSPIN_HIGH;

    return result;
}


void can_tx_txbuf(uint8_t bufid, uint8_t* buf, uint8_t len) {
    int i;

    CSPIN_LOW;
    spi_tx(SPI_LOAD_TXBUF | (bufid & 0x07));
    for(i = 0; i< len; i++) {
        spi_tx(buf[i]);
    }
    CSPIN_HIGH;
}

int can_rx_rxbuf(uint8_t bufid, uint8_t* buf) {
    int i;

    CSPIN_LOW;
    spi_tx(SPI_READ_RXBUF | (bufid & 0x07));
    for (i = 0; i < len; i++) {
        buf[i] = spi_tx(0xff);
    }
    CSPIN_HIGH;
}

void can_rts(uint8_t bufid) {
    CSPIN_LOW;
    spi_tx(SPI_RTS | (bufid & 0x07));
    CSPIN_HIGH;
}

bool can_tx_cancel() {
    
}

uint8_t can_rx_rxStatus() {
    CSPIN_LOW;
    uint8_t status = spi_tx(SPI_READ_RXBUF);
    CSPIN_HIGH;

    return status;
}

uint8_t can_rx_status() {
    CSPIN_LOW;
    uint8_t status = spi_tx(SPI_READ_STATUS);
    CSPIN_HIGH;

    return status;
}

void can_bitModify(uint8_t addr, uint8_t mask, uint8_t data) {
    CSPIN_LOW;
    spi_tx(SPI_BITMOD);
    spi_tx(addr);
    spi_tx(mask);
    spi_tx(data);
    CSPIN_HIGH;
}


