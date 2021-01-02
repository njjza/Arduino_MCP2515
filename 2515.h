#ifndef MCP2515_H
#define MCP2515_H

#include <stdint.h>



/* CAN Control Register MAP */
#define RXF0SIDH            0x00
#define RXF0SIDL            0x01
#define RXF0EID8            0x02
#define RXF0EID0            0x03
#define RXF1SIDH            0x04
#define RXF1SIDL            0x05
#define RXF1EID8            0x06
#define RXF1EID0            0x07
#define RXF2SIDH            0x08
#define RXF2SIDL            0x09
#define RXF2EID8            0x0A
#define RXF2EID0            0x0B
#define BFPCTRL             0x0C
#define TXRTSCTRL           0x0D
#define CANSTAT             0x0E
#define CANCTRL             0x0F

#define RXF3SIDH            0x10
#define RXF3SIDL            0x11
#define RXF3EID8            0x12
#define RXF3EID0            0x13
#define RXF4SIDH            0x14
#define RXF4SIDL            0x15
#define RXF4EID8            0x16
#define RXF4EID0            0x17
#define RXF5SIDH            0x18
#define RXF5SIDL            0x19
#define RXF5EID8            0x1A
#define RXF5EID0            0x1B
#define TEC                 0x1C
#define REC                 0x1D

#define RXM0SIDH            0x20
#define RXM0SIDL            0x21
#define RXM0EID8            0x22
#define RXM0EID0            0x23
#define RXM1SIDH            0x24
#define RXM1SIDL            0x25
#define RXM1EID8            0x26
#define RXM1EID0            0x27
#define CNF3                0x28
#define CNF2                0x29
#define CNF1                0x2A
#define CANINTE             0x2B
#define CANINTF             0x2C
#define EFLG                0x2D

#define TXB0CTRL            0x30
#define TXB0SIDH            0x31
#define TXB0SIDL            0x32
#define TXB0EID8            0x33
#define TXB0EID0            0x34
#define TXB0DLC             0x35
#define TXB0D0              0x36
#define TXB0D1              0x37
#define TXB0D2              0x38
#define TXB0D3              0x39
#define TXB0D4              0x3A
#define TXB0D5              0x3B
#define TXB0D6              0x3C
#define TXB0D7              0x3D

#define TXB1CTRL            0x40
#define TXB1SIDH            0x41
#define TXB1SIDL            0x42
#define TXB1EID8            0x43
#define TXB1EID0            0x44
#define TXB1DLC             0x45
#define TXB1D0              0x46
#define TXB1D1              0x47
#define TXB1D2              0x48
#define TXB1D3              0x49
#define TXB1D4              0x4A
#define TXB1D5              0x4B
#define TXB1D6              0x4C
#define TXB1D7              0x4D

#define TXB2CTRL            0x50
#define TXB2SIDH            0x51
#define TXB2SIDL            0x52
#define TXB2EID8            0x53
#define TXB2EID0            0x54
#define TXB2DLC             0x55
#define TXB2D0              0x56
#define TXB2D1              0x57
#define TXB2D2              0x58
#define TXB2D3              0x59
#define TXB2D4              0x5A
#define TXB2D5              0x5B
#define TXB2D6              0x5C
#define TXB2D7              0x5D

#define RXB0CTRL            0x60
#define RXB0SIDH            0x61
#define RXB0SIDL            0x62
#define RXB0EID8            0x63
#define RXB0EID0            0x64
#define RXB0DLC             0x65
#define RXB0D0              0x66
#define RXB0D1              0x67
#define RXB0D2              0x68
#define RXB0D3              0x69
#define RXB0D4              0x6A
#define RXB0D5              0x6B
#define RXB0D6              0x6C
#define RXB0D7              0x6D

#define RXB1CTRL            0x70
#define RXB1SIDH            0x71
#define RXB1SIDL            0x72
#define RXB1EID8            0x73
#define RXB1EID0            0x74
#define RXB1DLC             0x75
#define RXB1D0              0x76
#define RXB1D1              0x77
#define RXB1D2              0x78
#define RXB1D3              0x79
#define RXB1D4              0x7A
#define RXB1D5              0x7B
#define RXB1D6              0x7C
#define RXB1D7              0x7D

/* CAN Control Reigster Bit Mask */
#define BFPCTRL_B0BFM       0x01
#define BFPCTRL_B1BFM       0x02
#define BFPCTRL_B0BFE       0x04
#define BFPCTRL_B1BFE       0x08
#define BFPCTRL_B0BFS       0x10
#define BFPCTRL_B1BFS       0x20

#define TXRTSCTRL_B1BFM     0x01
#define TXRTSCTRL_B2BFM     0x02
#define TXRTSCTRL_B1BFE     0x04
#define TXRTSCTRL_B2BFE     0x08
#define TXRTSCTRL_B1BFS     0x10
#define TXRTSCTRL_B2BFS     0x20

#define CANSTAT_ICOD0       0x02
#define CANSTAT_ICOD1       0x04
#define CANSTAT_ICOD2       0x08
#define CANSTAT_OPMOD0      0x20
#define CANSTAT_OPMOD1      0x40
#define CANSTAT_OPMOD2      0x80

#define CANCTRL_CLKPRE0     0x01
#define CANCTRL_CLKPRE1     0x02
#define CANCTRL_CLKEN       0x04
#define CANCTRL_OSM         0x08
#define CANCTRL_ABAT        0x10
#define CANCTRL_PREQOP0     0x20
#define CANCTRL_PREQOP1     0x40
#define CANCTRL_PREQOP2     0x80

#define CNF3_PHSEG20        0x01
#define CNF3_PHSEG21        0x02
#define CNF3_PHSEG22        0x04
#define CNF3_WAKFIL         0x40
#define CNF3_SOF            0x80

#define CNF2_PRSE0          0x01
#define CNF2_PRSE1          0x02
#define CNF2_PRSE2          0x04
#define CNF2_PRSE10         0x08
#define CNF2_PRSE11         0x10
#define CNF2_PRSE12         0x20
#define CNF2_SAM            0x40
#define CNF2_BTLMODE        0x80

#define CNF1_BPR0           0x01
#define CNF1_BPR1           0x02
#define CNF1_BPR2           0x04
#define CNF1_BPR3           0x08
#define CNF1_BPR4           0x10
#define CNF1_BPR5           0x20
#define CNF1_SJW0           0x40
#define CNF1_SJW1           0x80

#define CANINTE_RX0IE       0x01
#define CANINTE_RX1IE       0x02
#define CANINTE_TX0IE       0x04
#define CANINTE_TX1IE       0x08
#define CANINTE_TX2IE       0x10
#define CANINTE_ERRIF       0x20
#define CANINTE_WAKIF       0x40
#define CANINTE_MERRF       0x80

#define CANINTF_RX0IE       0x01
#define CANINTF_RX1IE       0x02
#define CANINTF_TX0IE       0x04
#define CANINTF_TX1IE       0x08
#define CANINTF_TX2IE       0x10
#define CANINTF_ERRIF       0x20
#define CANINTF_WAKIF       0x40
#define CANINTF_MERRF       0x80

#define EFLG_EWARN          0x01
#define EFLG_RXWAR          0x02
#define EFLG_TXWAR          0x04
#define EFLG_RXEP           0x08
#define EFLG_TXEP           0x10
#define EFLG_TXBO           0x20
#define EFLG_RX0OVR         0x40
#define EFLG_RX1OVR         0x80

#define TXBCTRL_TXP0        0x01
#define TXBCTRL_TXP1        0x02
#define TXBCTRL_TXREQ       0x08
#define TXBCTRL_TXERR       0x10
#define TXBCTRL_MLOA        0x20
#define TXBCTRL_ABTF        0x40

#define RXB0CTRL_FILHIT0    0x01
#define RXB0CTRL_BUKT1      0x02
#define RXB0CTRL_BUKT       0x04
#define RXB0CTRL_RXRTR      0x08
#define RXB0CTRL_RXM0       0x20
#define RXB0CTRL_RXM1       0x40

#define RXB1CTRL_FILHIT0    0x01
#define RXB1CTRL_BUKT1      0x02
#define RXB1CTRL_BUKT       0x04
#define RXB1CTRL_RXRTR      0x08
#define RXB1CTRL_RXM0       0x20
#define RXB1CTRL_RXM1       0x40

/* CAN */
#define CAN_STATUS uint8_t

struct can_type {

};
void can_init();
int can_send();
int can_rx();
int can_speed();
int can_spi_tx();
int can_spi_rx();

#endif