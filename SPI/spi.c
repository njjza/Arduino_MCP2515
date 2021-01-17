#include "spi.h"

void spi_init() {
    DDR_SPI = (1<<DD_MOSI)|(1<<DD_SCK)
    SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}

uint8_t spi_tx (uint8_t msg, int len) {
    
    SPDR = msg;
    while(!(SPSR & (1<<SPIF)))
        ;
        
    return SPDR;
}