
// ../../../hw/drivers/stm32_bluetooth_cc256x/pebble_bluetooth_gatt.h generated from ../../../hw/drivers/stm32_bluetooth_cc256x/pebble_bluetooth.gatt for BTstack
// it needs to be regenerated when the .gatt file is updated. 

// To generate ../../../hw/drivers/stm32_bluetooth_cc256x/pebble_bluetooth_gatt.h:
// ./tool/compile_gatt.py ../../../hw/drivers/stm32_bluetooth_cc256x/pebble_bluetooth.gatt ../../../hw/drivers/stm32_bluetooth_cc256x/pebble_bluetooth_gatt.h

// att db format version 1

// binary attribute representation:
// - size in bytes (16), flags(16), handle (16), uuid (16/128), value(...)

#include <stdint.h>

const uint8_t profile_data[] =
{
    // ATT DB Version
    1,

    // 0x0001 PRIMARY_SERVICE-GAP_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x28, 0x00, 0x18, 
    // 0x0002 CHARACTERISTIC-GAP_DEVICE_NAME-READ
    0x0d, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x28, 0x02, 0x03, 0x00, 0x00, 0x2a, 
    // 0x0003 VALUE-GAP_DEVICE_NAME-READ-'Pebble LE 0124'
    // READ_ANYBODY
    0x16, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x2a, 0x50, 0x65, 0x62, 0x62, 0x6c, 0x65, 0x20, 0x4c, 0x45, 0x20, 0x30, 0x31, 0x32, 0x34, 
    // 0x0004 CHARACTERISTIC-0x2A29-READ
    0x0d, 0x00, 0x02, 0x00, 0x04, 0x00, 0x03, 0x28, 0x02, 0x05, 0x00, 0x29, 0x2a, 
    // 0x0005 VALUE-0x2A29-READ-'Pebble Technology'
    // READ_ANYBODY
    0x19, 0x00, 0x02, 0x00, 0x05, 0x00, 0x29, 0x2a, 0x50, 0x65, 0x62, 0x62, 0x6c, 0x65, 0x20, 0x54, 0x65, 0x63, 0x68, 0x6e, 0x6f, 0x6c, 0x6f, 0x67, 0x79, 

    // 0x0006 PRIMARY_SERVICE-GATT_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x28, 0x01, 0x18, 
    // 0x0007 CHARACTERISTIC-GATT_DATABASE_HASH-READ
    0x0d, 0x00, 0x02, 0x00, 0x07, 0x00, 0x03, 0x28, 0x02, 0x08, 0x00, 0x2a, 0x2b, 
    // 0x0008 VALUE-GATT_DATABASE_HASH-READ-''
    // READ_ANYBODY
    0x18, 0x00, 0x02, 0x00, 0x08, 0x00, 0x2a, 0x2b, 0x45, 0x22, 0xc9, 0x96, 0xa2, 0x4f, 0xc0, 0x22, 0x7e, 0xa1, 0x5e, 0xa4, 0x88, 0x48, 0x33, 0xaa, 

    // 0x0009 PRIMARY_SERVICE-30000003-328E-0FBB-C642-1AA6699BDADA
    0x18, 0x00, 0x02, 0x00, 0x09, 0x00, 0x00, 0x28, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x03, 0x00, 0x00, 0x30, 
    // notify
    // 0x000a CHARACTERISTIC-30000004-328E-0FBB-C642-1AA6699BDADA-NOTIFY | WRITE_WITHOUT_RESPONSE | DYNAMIC | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED
    0x1b, 0x00, 0x02, 0x00, 0x0a, 0x00, 0x03, 0x28, 0x14, 0x0b, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x04, 0x00, 0x00, 0x30, 
    // 0x000b VALUE-30000004-328E-0FBB-C642-1AA6699BDADA-NOTIFY | WRITE_WITHOUT_RESPONSE | DYNAMIC | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED-''
    // WRITE_AUTHENTICATED, ENCRYPTION_KEY_SIZE=16
    0x16, 0x00, 0x14, 0xfb, 0x0b, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x04, 0x00, 0x00, 0x30, 
    // 0x000c CLIENT_CHARACTERISTIC_CONFIGURATION
    // READ_ANYBODY, WRITE_AUTHENTICATED, ENCRYPTION_KEY_SIZE=16
    0x0a, 0x00, 0x1e, 0xf1, 0x0c, 0x00, 0x02, 0x29, 0x00, 0x00, 
    // 0x000d CHARACTERISTIC-30000005-328E-0FBB-C642-1AA6699BDADA-READ | DYNAMIC | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED
    0x1b, 0x00, 0x02, 0x00, 0x0d, 0x00, 0x03, 0x28, 0x02, 0x0e, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x05, 0x00, 0x00, 0x30, 
    // 0x000e VALUE-30000005-328E-0FBB-C642-1AA6699BDADA-READ | DYNAMIC | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED-''
    // READ_AUTHENTICATED, ENCRYPTION_KEY_SIZE=16
    0x16, 0x00, 0x12, 0xfb, 0x0e, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x05, 0x00, 0x00, 0x30, 
    // 0x000f CHARACTERISTIC-30000006-328E-0FBB-C642-1AA6699BDADA-WRITE_WITHOUT_RESPONSE | DYNAMIC | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED
    0x1b, 0x00, 0x02, 0x00, 0x0f, 0x00, 0x03, 0x28, 0x04, 0x10, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x06, 0x00, 0x00, 0x30, 
    // 0x0010 VALUE-30000006-328E-0FBB-C642-1AA6699BDADA-WRITE_WITHOUT_RESPONSE | DYNAMIC | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED-''
    // WRITE_AUTHENTICATED, ENCRYPTION_KEY_SIZE=16
    0x16, 0x00, 0x14, 0xfb, 0x10, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x06, 0x00, 0x00, 0x30, 
    // Meta service

    // 0x0011 PRIMARY_SERVICE-0000fed9-0000-1000-8000-00805f9b34fb
    0x18, 0x00, 0x02, 0x00, 0x11, 0x00, 0x00, 0x28, 0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0xd9, 0xfe, 0x00, 0x00, 
    // connectivity -  0x1f 0x00 0x00 0x00
    // 0x0012 CHARACTERISTIC-00000001-328E-0FBB-C642-1AA6699BDADA-READ | NOTIFY | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x12, 0x00, 0x03, 0x28, 0x12, 0x13, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x01, 0x00, 0x00, 0x00, 
    // 0x0013 VALUE-00000001-328E-0FBB-C642-1AA6699BDADA-READ | NOTIFY | DYNAMIC-''
    // READ_ANYBODY
    0x16, 0x00, 0x02, 0x03, 0x13, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x01, 0x00, 0x00, 0x00, 
    // 0x0014 CLIENT_CHARACTERISTIC_CONFIGURATION
    // READ_ANYBODY, WRITE_ANYBODY
    0x0a, 0x00, 0x0e, 0x01, 0x14, 0x00, 0x02, 0x29, 0x00, 0x00, 
    //0x1f, 0x00, 0x00, 0x00
    // pairing
    // 0x0015 CHARACTERISTIC-00000002-328E-0FBB-C642-1AA6699BDADA-READ | WRITE | DYNAMIC | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED
    0x1b, 0x00, 0x02, 0x00, 0x15, 0x00, 0x03, 0x28, 0x0a, 0x16, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x02, 0x00, 0x00, 0x00, 
    // 0x0016 VALUE-00000002-328E-0FBB-C642-1AA6699BDADA-READ | WRITE | DYNAMIC | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED-''
    // READ_AUTHENTICATED, WRITE_AUTHENTICATED, ENCRYPTION_KEY_SIZE=16
    0x16, 0x00, 0x1a, 0xfb, 0x16, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x02, 0x00, 0x00, 0x00, 
    //, 0x00
    // MTU
    // 0x0017 CHARACTERISTIC-00000003-328E-0FBB-C642-1AA6699BDADA-READ | WRITE | NOTIFY | DYNAMIC  | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED
    0x1b, 0x00, 0x02, 0x00, 0x17, 0x00, 0x03, 0x28, 0x1a, 0x18, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x03, 0x00, 0x00, 0x00, 
    // 0x0018 VALUE-00000003-328E-0FBB-C642-1AA6699BDADA-READ | WRITE | NOTIFY | DYNAMIC  | ENCRYPTION_KEY_SIZE_16 | AUTHENTICATION_REQUIRED-''
    // READ_AUTHENTICATED, WRITE_AUTHENTICATED, ENCRYPTION_KEY_SIZE=16
    0x16, 0x00, 0x1a, 0xfb, 0x18, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x03, 0x00, 0x00, 0x00, 
    // 0x0019 CLIENT_CHARACTERISTIC_CONFIGURATION
    // READ_ANYBODY, WRITE_AUTHENTICATED, ENCRYPTION_KEY_SIZE=16
    0x0a, 0x00, 0x1e, 0xf1, 0x19, 0x00, 0x02, 0x29, 0x00, 0x00, 
    //, 0x80 0x00
    // parameters
    // 0x001a CHARACTERISTIC-00000005-328E-0FBB-C642-1AA6699BDADA-READ | WRITE | NOTIFY | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x1a, 0x00, 0x03, 0x28, 0x1a, 0x1b, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x05, 0x00, 0x00, 0x00, 
    // 0x001b VALUE-00000005-328E-0FBB-C642-1AA6699BDADA-READ | WRITE | NOTIFY | DYNAMIC-''
    // READ_ANYBODY, WRITE_ANYBODY
    0x16, 0x00, 0x0a, 0x03, 0x1b, 0x00, 0xda, 0xda, 0x9b, 0x69, 0xa6, 0x1a, 0x42, 0xc6, 0xbb, 0x0f, 0x8e, 0x32, 0x05, 0x00, 0x00, 0x00, 
    // 0x001c CLIENT_CHARACTERISTIC_CONFIGURATION
    // READ_ANYBODY, WRITE_ANYBODY
    0x0a, 0x00, 0x0e, 0x01, 0x1c, 0x00, 0x02, 0x29, 0x00, 0x00, 
    //, 0x00 0x9c 0x00 0x00 0x00 0x58 0x02

    // END
    0x00, 0x00, 
}; // total size 298 bytes 


//
// list service handle ranges
//
#define ATT_SERVICE_GAP_SERVICE_START_HANDLE 0x0001
#define ATT_SERVICE_GAP_SERVICE_END_HANDLE 0x0005
#define ATT_SERVICE_GATT_SERVICE_START_HANDLE 0x0006
#define ATT_SERVICE_GATT_SERVICE_END_HANDLE 0x0008
#define ATT_SERVICE_30000003_328E_0FBB_C642_1AA6699BDADA_START_HANDLE 0x0009
#define ATT_SERVICE_30000003_328E_0FBB_C642_1AA6699BDADA_END_HANDLE 0x0010
#define ATT_SERVICE_0000fed9_0000_1000_8000_00805f9b34fb_START_HANDLE 0x0011
#define ATT_SERVICE_0000fed9_0000_1000_8000_00805f9b34fb_END_HANDLE 0x001c

//
// list mapping between characteristics and handles
//
#define ATT_CHARACTERISTIC_GAP_DEVICE_NAME_01_VALUE_HANDLE 0x0003
#define ATT_CHARACTERISTIC_0x2A29_01_VALUE_HANDLE 0x0005
#define ATT_CHARACTERISTIC_GATT_DATABASE_HASH_01_VALUE_HANDLE 0x0008
#define ATT_CHARACTERISTIC_30000004_328E_0FBB_C642_1AA6699BDADA_01_VALUE_HANDLE 0x000b
#define ATT_CHARACTERISTIC_30000004_328E_0FBB_C642_1AA6699BDADA_01_CLIENT_CONFIGURATION_HANDLE 0x000c
#define ATT_CHARACTERISTIC_30000005_328E_0FBB_C642_1AA6699BDADA_01_VALUE_HANDLE 0x000e
#define ATT_CHARACTERISTIC_30000006_328E_0FBB_C642_1AA6699BDADA_01_VALUE_HANDLE 0x0010
#define ATT_CHARACTERISTIC_00000001_328E_0FBB_C642_1AA6699BDADA_01_VALUE_HANDLE 0x0013
#define ATT_CHARACTERISTIC_00000001_328E_0FBB_C642_1AA6699BDADA_01_CLIENT_CONFIGURATION_HANDLE 0x0014
#define ATT_CHARACTERISTIC_00000002_328E_0FBB_C642_1AA6699BDADA_01_VALUE_HANDLE 0x0016
#define ATT_CHARACTERISTIC_00000003_328E_0FBB_C642_1AA6699BDADA_01_VALUE_HANDLE 0x0018
#define ATT_CHARACTERISTIC_00000003_328E_0FBB_C642_1AA6699BDADA_01_CLIENT_CONFIGURATION_HANDLE 0x0019
#define ATT_CHARACTERISTIC_00000005_328E_0FBB_C642_1AA6699BDADA_01_VALUE_HANDLE 0x001b
#define ATT_CHARACTERISTIC_00000005_328E_0FBB_C642_1AA6699BDADA_01_CLIENT_CONFIGURATION_HANDLE 0x001c
