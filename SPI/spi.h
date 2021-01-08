/*
 * spi.h
 *
 * A simple SPI implementation, code is directly from datasheet.
 * It only considered of Master module.
 * 
 * Created: 06-Dec-16 10:45:00
 *  Author: HJ
 */ 


#ifndef SPI_H_
#define SPI_H_

#include <avr/iom328p.h>

#define SPI_HIGH        1

/* Pin Map */
#define SPIPORT			PORTB
#define DDR_SPI			DDRB
#define DD_SCK			
#define DD_MISO		    
#define DD_MOSI		    
#define DD_SS			

void spi_init();
uint8_t spi_tx (uint8_t * out);

#endif /* SPI_H_ */