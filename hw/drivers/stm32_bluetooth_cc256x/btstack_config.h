// btstack_config.h for Pebble + TI CC256B port

#ifndef __BTSTACK_CONFIG
#define __BTSTACK_CONFIG

// Port related features
#define HAVE_EMBEDDED_TIME_MS

//#define CLASSIC

// BTstack features that can be enabled
#define ENABLE_BLE
#define ENABLE_LE_PERIPHERAL
#define ENABLE_LE_CENTRAL
#define ENABLE_GATT_CLIENT_PAIRING
//#define ENABLE_LE_SECURE_CONNECTIONS
#define ENABLE_LE_CENTRAL_AUTO_ENCRYPTION
//#define ENABLE_CLASSIC
#define ENABLE_LOG_INFO
#define ENABLE_LOG_ERROR
// #define ENABLE_LOG_DEBUG
// #define ENABLE_EHCILL

// BTstack configuration. buffers, sizes, ...
#define HCI_ACL_PAYLOAD_SIZE 258 /* 1021 bytes for massive buffer */

#ifdef CLASSIC
#define MAX_SPP_CONNECTIONS 1
#define MAX_NR_RFCOMM_MULTIPLEXERS MAX_SPP_CONNECTIONS
#define MAX_NR_RFCOMM_SERVICES 1
#define MAX_NR_RFCOMM_CHANNELS MAX_SPP_CONNECTIONS
#define MAX_NR_BTSTACK_LINK_KEY_DB_MEMORY_ENTRIES 2
#endif

#define MAX_NR_HCI_CONNECTIONS 2
#define MAX_NR_L2CAP_SERVICES 3
#define MAX_NR_L2CAP_CHANNELS 3
#define MAX_NR_BNEP_SERVICES 0
#define MAX_NR_BNEP_CHANNELS 0


#define MAX_NR_WHITELIST_ENTRIES 1
#define MAX_NR_SM_LOOKUP_ENTRIES 3
#define MAX_NR_SERVICE_RECORD_ITEMS 1
#define MAX_NR_GATT_CLIENTS 1

#define MAX_NR_LE_DEVICE_DB_ENTRIES 2
//#define MAX_NR_GATT_SUBCLIENTS 1

#define HAVE_FREERTOS_TASK_NOTIFICATIONS 1

// We need this becuase of a buggy chipset. It ignores the vendor specific request to change speed
// and crashes the stack.
#define ENABLE_CC256X_BAUDRATE_CHANGE_FLOWCONTROL_BUG_WORKAROUND

#endif
