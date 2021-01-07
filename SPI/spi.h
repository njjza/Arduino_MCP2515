/*
 * spi.h
 *
 * A simple SPI implementation, code is directly from datasheet.
 * 
 * Created: 06-Dec-16 10:45:00
 *  Author: HJ
 */ 


#ifndef SPI_H_
#define SPI_H_

#include <avr/iom328p.h>

#define SPIPORT			PORTB
#define DDR_SPI			DDRB
#define DD_SCK			(1 << 7) /* PB7 */
#define SPI_MISO		(1 << 6) /* PB6 SD card DO */
#define DD_MOSI		    (1 << 5) /* PB5 SD card DI */
#define SPI_CS			(1 << 4) /* PB4 */

void spi_init();
uint8_t spi_tx (uint8_t * out);

#endif /* SPI_H_ */