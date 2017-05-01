#ifndef _MBOX_WLAN_HOST_REG_REG_H_
#define _MBOX_WLAN_HOST_REG_REG_H_

#include "mbox_host_reg.h"

#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_MSB     INT_STATUS_ENABLE_RX_UNDERFLOW_MSB
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB     INT_STATUS_ENABLE_RX_UNDERFLOW_LSB
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK    INT_STATUS_ENABLE_RX_UNDERFLOW_MASK
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_GET(x)  INT_STATUS_ENABLE_RX_UNDERFLOW_GET(x)
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_SET(x)  INT_STATUS_ENABLE_RX_UNDERFLOW_SET(x)

#define ERROR_STATUS_ENABLE_TX_OVERFLOW_MSB      INT_STATUS_ENABLE_TX_OVERFLOW_MSB
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB      INT_STATUS_ENABLE_TX_OVERFLOW_LSB
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK     INT_STATUS_ENABLE_TX_OVERFLOW_MASK
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_GET(x)   INT_STATUS_ENABLE_TX_OVERFLOW_GET(x)
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_SET(x)   INT_STATUS_ENABLE_TX_OVERFLOW_SET(x)

#define HOST_INT_STATUS_ERROR_MSB                HOST_INT_STATUS_HOST_INT_ERROR_MSB
#define HOST_INT_STATUS_ERROR_LSB                HOST_INT_STATUS_HOST_INT_ERROR_LSB
#define HOST_INT_STATUS_ERROR_MASK               HOST_INT_STATUS_HOST_INT_ERROR_MASK
#define HOST_INT_STATUS_ERROR_GET(x)             HOST_INT_STATUS_HOST_INT_ERROR_GET(x)
#define HOST_INT_STATUS_ERROR_SET(x)             HOST_INT_STATUS_HOST_INT_ERROR_SET(x)

#define HOST_INT_STATUS_CPU_MSB                  HOST_INT_STATUS_HOST_INT_CPU_MSB
#define HOST_INT_STATUS_CPU_LSB                  HOST_INT_STATUS_HOST_INT_CPU_LSB
#define HOST_INT_STATUS_CPU_MASK                 HOST_INT_STATUS_HOST_INT_CPU_MASK
#define HOST_INT_STATUS_CPU_GET(x)               HOST_INT_STATUS_HOST_INT_CPU_GET(x)
#define HOST_INT_STATUS_CPU_SET(x)               HOST_INT_STATUS_HOST_INT_CPU_SET(x)

#define HOST_INT_STATUS_INT_MSB                  HOST_INT_STATUS_HOST_INT_INT_MSB
#define HOST_INT_STATUS_INT_LSB                  HOST_INT_STATUS_HOST_INT_INT_LSB
#define HOST_INT_STATUS_INT_MASK                 HOST_INT_STATUS_HOST_INT_INT_MASK
#define HOST_INT_STATUS_INT_GET(x)               HOST_INT_STATUS_HOST_INT_INT_GET(x)
#define HOST_INT_STATUS_INT_SET(x)               HOST_INT_STATUS_HOST_INT_INT_SET(x)

#define HOST_INT_STATUS_COUNTER_MSB              HOST_INT_STATUS_HOST_INT_COUNTER_MSB
#define HOST_INT_STATUS_COUNTER_LSB              HOST_INT_STATUS_HOST_INT_COUNTER_LSB
#define HOST_INT_STATUS_COUNTER_MASK             HOST_INT_STATUS_HOST_INT_COUNTER_MASK
#define HOST_INT_STATUS_COUNTER_GET(x)           HOST_INT_STATUS_HOST_INT_COUNTER_GET(x)
#define HOST_INT_STATUS_COUNTER_SET(x)           HOST_INT_STATUS_HOST_INT_COUNTER_SET(x)

#define HOST_INT_STATUS_MBOX_DATA_MSB            HOST_INT_STATUS_HOST_INT_MBOX_DATA_MSB
#define HOST_INT_STATUS_MBOX_DATA_LSB            HOST_INT_STATUS_HOST_INT_MBOX_DATA_LSB
#define HOST_INT_STATUS_MBOX_DATA_MASK           HOST_INT_STATUS_HOST_INT_MBOX_DATA_MASK
#define HOST_INT_STATUS_MBOX_DATA_GET(x)         HOST_INT_STATUS_HOST_INT_MBOX_DATA_GET(x)
#define HOST_INT_STATUS_MBOX_DATA_SET(x)         HOST_INT_STATUS_HOST_INT_MBOX_DATA_SET(x)

#define ERROR_INT_STATUS_ADDRESS                 HOST_INT_STATUS_ADDRESS+2
//#define ERROR_INT_STATUS_OFFSET                  0x00000402
#define ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_MSB HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_MSB
#define ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_LSB HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_LSB
#define ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_MASK HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_MASK
#define ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_GET(x) HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_GET(x)
#define ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_SET(x) HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_SYNC_ERROR_SET(x)

#define ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_MSB HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_MSB
#define ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_LSB HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_LSB
#define ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_MASK HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_MASK
#define ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_GET(x) HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_GET(x)
#define ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_SET(x) HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_OVERFLOW_SET(x)

#define ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_MSB HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_MSB
#define ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_LSB HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_LSB
#define ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_MASK HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_MASK
#define ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_GET(x) HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_GET(x)
#define ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_SET(x) HOST_INT_STATUS_ERROR_INT_STATUS_UART_HCI_FRAMER_UNDERFLOW_SET(x)

#define ERROR_INT_STATUS_WAKEUP_MSB              HOST_INT_STATUS_ERROR_INT_STATUS_WAKEUP_MSB
#define ERROR_INT_STATUS_WAKEUP_LSB              HOST_INT_STATUS_ERROR_INT_STATUS_WAKEUP_LSB
#define ERROR_INT_STATUS_WAKEUP_MASK             HOST_INT_STATUS_ERROR_INT_STATUS_WAKEUP_MASK
#define ERROR_INT_STATUS_WAKEUP_GET(x)           HOST_INT_STATUS_ERROR_INT_STATUS_WAKEUP_GET(x)
#define ERROR_INT_STATUS_WAKEUP_SET(x)           HOST_INT_STATUS_ERROR_INT_STATUS_WAKEUP_SET(x)

#define ERROR_INT_STATUS_RX_UNDERFLOW_MSB        HOST_INT_STATUS_ERROR_INT_STATUS_RX_UNDERFLOW_MSB
#define ERROR_INT_STATUS_RX_UNDERFLOW_LSB        HOST_INT_STATUS_ERROR_INT_STATUS_RX_UNDERFLOW_LSB
#define ERROR_INT_STATUS_RX_UNDERFLOW_MASK       HOST_INT_STATUS_ERROR_INT_STATUS_RX_UNDERFLOW_MASK
#define ERROR_INT_STATUS_RX_UNDERFLOW_GET(x)     HOST_INT_STATUS_ERROR_INT_STATUS_RX_UNDERFLOW_GET(x)
#define ERROR_INT_STATUS_RX_UNDERFLOW_SET(x)     HOST_INT_STATUS_ERROR_INT_STATUS_RX_UNDERFLOW_SET(x)

#define ERROR_INT_STATUS_TX_OVERFLOW_MSB         HOST_INT_STATUS_ERROR_INT_STATUS_TX_OVERFLOW_MSB
#define ERROR_INT_STATUS_TX_OVERFLOW_LSB         HOST_INT_STATUS_ERROR_INT_STATUS_TX_OVERFLOW_LSB
#define ERROR_INT_STATUS_TX_OVERFLOW_MASK        HOST_INT_STATUS_ERROR_INT_STATUS_TX_OVERFLOW_MASK
#define ERROR_INT_STATUS_TX_OVERFLOW_GET(x)      HOST_INT_STATUS_ERROR_INT_STATUS_TX_OVERFLOW_GET(x)
#define ERROR_INT_STATUS_TX_OVERFLOW_SET(x)      HOST_INT_STATUS_ERROR_INT_STATUS_TX_OVERFLOW_SET(x)

#define CPU_INT_STATUS_ADDRESS                   HOST_INT_STATUS_ADDRESS+1
//#define CPU_INT_STATUS_OFFSET                    0x00000401
#define CPU_INT_STATUS_BIT_MSB                   HOST_INT_STATUS_CPU_INT_STATUS_BIT_MSB
#define CPU_INT_STATUS_BIT_LSB                   HOST_INT_STATUS_CPU_INT_STATUS_BIT_LSB
#define CPU_INT_STATUS_BIT_MASK                  HOST_INT_STATUS_CPU_INT_STATUS_BIT_MASK
#define CPU_INT_STATUS_BIT_GET(x)                HOST_INT_STATUS_CPU_INT_STATUS_BIT_GET(x)
#define CPU_INT_STATUS_BIT_SET(x)                HOST_INT_STATUS_CPU_INT_STATUS_BIT_SET(x)

//#define CPU_INT_STATUS_ENABLE_ADDRESS            0x00000419
//#define CPU_INT_STATUS_ENABLE_OFFSET             0x00000419
#define CPU_INT_STATUS_ENABLE_BIT_MSB            INT_STATUS_ENABLE_CPU_INT_STATUS_ENABLE_MSB
#define CPU_INT_STATUS_ENABLE_BIT_LSB            INT_STATUS_ENABLE_CPU_INT_STATUS_ENABLE_LSB
#define CPU_INT_STATUS_ENABLE_BIT_MASK           INT_STATUS_ENABLE_CPU_INT_STATUS_ENABLE_MASK
#define CPU_INT_STATUS_ENABLE_BIT_GET(x)         INT_STATUS_ENABLE_CPU_INT_STATUS_ENABLE_GET(x)
#define CPU_INT_STATUS_ENABLE_BIT_SET(x)         INT_STATUS_ENABLE_CPU_INT_STATUS_ENABLE_SET(x)

//#define COUNTER_INT_STATUS_ENABLE_ADDRESS        0x0000041b
//#define COUNTER_INT_STATUS_ENABLE_OFFSET         0x0000041b
#define COUNTER_INT_STATUS_ENABLE_BIT_MSB        INT_STATUS_ENABLE_COUNTER_INT_STATUS_ENABLE_MSB
#define COUNTER_INT_STATUS_ENABLE_BIT_LSB        INT_STATUS_ENABLE_COUNTER_INT_STATUS_ENABLE_LSB
#define COUNTER_INT_STATUS_ENABLE_BIT_MASK       INT_STATUS_ENABLE_COUNTER_INT_STATUS_ENABLE_MASK
#define COUNTER_INT_STATUS_ENABLE_BIT_GET(x)     INT_STATUS_ENABLE_COUNTER_INT_STATUS_ENABLE_GET(x)
#define COUNTER_INT_STATUS_ENABLE_BIT_SET(x)     INT_STATUS_ENABLE_COUNTER_INT_STATUS_ENABLE_SET(x)

#define RX_LOOKAHEAD_VALID_ADDRESS               MBOX_STATUS_ADDRESS+1
//#define RX_LOOKAHEAD_VALID_OFFSET                0x00000405
//#define RX_LOOKAHEAD_VALID_MBOX_MSB              3
//#define RX_LOOKAHEAD_VALID_MBOX_LSB              0
//#define RX_LOOKAHEAD_VALID_MBOX_MASK             0x0000000f
//#define RX_LOOKAHEAD_VALID_MBOX_GET(x)           (((x) & RX_LOOKAHEAD_VALID_MBOX_MASK) >> RX_LOOKAHEAD_VALID_MBOX_LSB)
//#define RX_LOOKAHEAD_VALID_MBOX_SET(x)           (((x) << RX_LOOKAHEAD_VALID_MBOX_LSB) & RX_LOOKAHEAD_VALID_MBOX_MASK)

#endif //_MBOX_WLAN_HOST_REG_REG_H_