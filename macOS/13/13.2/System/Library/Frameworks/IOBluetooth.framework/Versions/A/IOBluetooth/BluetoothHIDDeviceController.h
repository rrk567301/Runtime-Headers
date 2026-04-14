@class NSString, NSMutableArray;

@interface BluetoothHIDDeviceController : NSObject {
    NSMutableArray *_inactiveDevices;
    unsigned short _usageFilter;
    unsigned short _usagePageFilter;
    unsigned int _deviceConnectNotification;
    unsigned int _deviceDisconnectNotification;
    unsigned int _eventServiceConnectNotification;
    unsigned int _eventServiceDisconnectNotification;
    BOOL _queueing;
}

@property (retain) NSMutableArray *devices;
@property (copy) NSString *serviceFilter;
@property (readonly) unsigned long long numberOfDevices;

+ (BOOL)bluetoothHIDDevicePresent;
+ (BOOL)bluetoothMousePresent;
+ (BOOL)bluetoothKeyboardPresent;
+ (BOOL)appleBluetoothMousePresent;
+ (BOOL)appleBluetoothKeyboardPresent;
+ (BOOL)appleBluetoothHIDDevicePresent;
+ (BOOL)bluetoothDevicePresentWithService:(id)a0 usage:(unsigned short)a1 usagePage:(unsigned short)a2;
+ (id)bluetoothHIDDeviceForHIDDevice:(unsigned int)a0;
+ (id)bluetoothHIDDeviceForIOBluetoothDevice:(id)a0;
+ (id)bluetoothHIDDeviceForEventService:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopQueue;
- (BOOL)startQueue;
- (void)registerForConnectNotifications:(id)a0 selector:(SEL)a1;
- (id)initForAllDevices;
- (id)initForAllKeyboards;
- (id)initForAllMice;
- (id)initForAppleDevices;
- (id)initForAppleKeyboards;
- (id)initForAppleMice;
- (id)initForDeviceWithService:(id)a0 usage:(unsigned short)a1 usagePage:(unsigned short)a2;
- (BOOL)isBluetoothDeviceManaged:(unsigned int)a0;
- (int)numberOfDevicesOfUsage:(unsigned short)a0 usagePage:(unsigned short)a1;
- (int)numberOfPointingDevices;
- (int)numberOfTrackpadDevices;
- (int)numberOfMouseDevices;
- (int)numberOfKeyboardDevices;
- (id)deviceAtIndex:(int)a0;
- (id)firstDeviceOfUsage:(unsigned short)a0 usagePage:(unsigned short)a1;
- (id)firstMouseDevice;
- (id)firstKeyboardDevice;
- (id)firstTrackpadDevice;
- (void)removeDeviceAtIndex:(int)a0;
- (BOOL)batteryLowForAnyDevice;
- (BOOL)batteryDangerouslyLowForAnyDevice;
- (void)registerForDisconnectNotifications:(id)a0 selector:(SEL)a1;
- (void)registerForNameChangeNotifications:(id)a0 selector:(SEL)a1;
- (void)registerForActivityNotifications:(id)a0 selector:(SEL)a1;
- (void)registerForBatteryStateChangeNotifications:(id)a0 selector:(SEL)a1;
- (void)registerForLowBatteryNotifications:(id)a0 selector:(SEL)a1;
- (void)registerForDangerouslyLowBatteryNotifications:(id)a0 selector:(SEL)a1;
- (void)registerForBatteryChargingNotifications:(id)a0 selector:(SEL)a1;
- (void)registerForBatteryNotChargingNotifications:(id)a0 selector:(SEL)a1;
- (void)unregisterForAllNotifications:(id)a0;
- (void)deviceConnected:(unsigned int)a0;
- (void)deviceDisconnected:(unsigned int)a0;
- (void)eventServiceConnected:(unsigned int)a0;
- (void)eventServiceDisconnected:(unsigned int)a0;

@end
