#include <avr/iom328p.h>
#include <avr/delay.h>

#define trigPin
#define trigPin_HIGH
#define trigPin_LOW

#define echoPin
#define echoPin_HIGH
#define echoPin_LOW

long duration;
int distance;
int ticks;

void setup() {
    //can_init();
    ticks = 0;
    DDRD = 0xff;
    TCCR0 = (1 << CS01) | (1 << CS02);
}

void loop() {

    trigPin_LOW;
    _delay_ms(2);
    trigPin_HIGH;
    _delay_ms(10);
    trigPin_LOW;

    
    TCNT0 = 0x00;
    TIFR = 0x01;
    echoPin_HIGH;
    while(echoPin != 0) {
        while((TIFR & 0x01) == 0);
        TCNT0 = 0x00;
        TIFR = 0x01;
        tick += 1;
    };

    distance = tick * 0.034 / 2;
    tick = 0;
}