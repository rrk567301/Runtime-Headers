@class NSString, NSNumber;

@interface AppleBluetoothHIDDeviceGen2 : AppleBluetoothHIDDevice {
    unsigned int _eventService;
    unsigned int _eventServiceInterestNotification;
    NSString *_driverClass;
    NSString *_addressString;
    NSString *_manufacturer;
    NSString *_product;
    NSNumber *_locationID;
    NSString *_transport;
    unsigned short _versionNumber;
    float _batteryPercent;
    unsigned char _batteryStatusFlags;
    float _lowBatteryPercentThreshold;
    float _criticalLowBatteryPercentThreshold;
}

+ (id)withBluetoothDevice:(id)a0;
+ (id)withEventService:(unsigned int)a0;

- (id)transport;
- (BOOL)isCharging;
- (id)addressString;
- (unsigned short)productID;
- (int)setDeviceName:(id)a0;
- (unsigned short)vendorIDSource;
- (unsigned short)vendorID;
- (unsigned short)primaryUsage;
- (void)dealloc;
- (unsigned short)version;
- (struct BluetoothDeviceAddress { unsigned char x0[6]; } *)address;
- (unsigned int)objectID;
- (id)name;
- (unsigned short)primaryUsagePage;
- (id)manufacturer;
- (int)userMode;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)product;
- (id)bluetoothDevice;
- (void)cacheProperties;
- (BOOL)_setEventService:(unsigned int)a0;
- (BOOL)batteryDangerouslyLow;
- (BOOL)batteryLow;
- (float)batteryPercent;
- (unsigned int)classOfDevice;
- (void)closeDownEventServiceServices;
- (void)closeDownServices;
- (BOOL)connectedOverUSB;
- (id)deviceNameFromHardware;
- (id)driverClass;
- (BOOL)factoryDefault;
- (BOOL)fullFactoryDefault;
- (int)getMaxDeviceNameLength;
- (void)handleInterestNotificationForService:(unsigned int)a0 type:(unsigned int)a1 argument:(void *)a2;
- (unsigned int)hidDevice;
- (struct IOHIDDeviceInterface **)hidDeviceInterface;
- (id)initWithBluetoothDevice:(id)a0;
- (id)initWithEventService:(unsigned int)a0;
- (BOOL)isKeyboardDevice;
- (BOOL)isMouseDevice;
- (BOOL)isTrackpadDevice;
- (BOOL)recantConnection;
- (BOOL)representsEventService:(unsigned int)a0;
- (BOOL)setUserMode:(int)a0;
- (BOOL)suspendDevice:(BOOL)a0;

@end
