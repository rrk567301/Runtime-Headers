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

+ (id)withEventService:(unsigned int)a0;
+ (id)withBluetoothDevice:(id)a0;

- (void)dealloc;
- (id)name;
- (void).cxx_destruct;
- (unsigned short)version;
- (struct BluetoothDeviceAddress { unsigned char x0[6]; } *)address;
- (void)clearProperties;
- (unsigned int)objectID;
- (unsigned short)vendorID;
- (unsigned short)productID;
- (id)product;
- (id)addressString;
- (int)setDeviceName:(id)a0;
- (id)manufacturer;
- (id)transport;
- (id)initWithEventService:(unsigned int)a0;
- (id)initWithBluetoothDevice:(id)a0;
- (BOOL)_setEventService:(unsigned int)a0;
- (void)closeDownEventServiceServices;
- (void)closeDownServices;
- (void)cacheProperties;
- (unsigned int)hidDevice;
- (struct IOHIDDeviceInterface **)hidDeviceInterface;
- (id)bluetoothDevice;
- (unsigned int)classOfDevice;
- (unsigned short)primaryUsage;
- (unsigned short)primaryUsagePage;
- (id)deviceNameFromHardware;
- (int)getMaxDeviceNameLength;
- (int)userMode;
- (BOOL)setUserMode:(int)a0;
- (BOOL)fullFactoryDefault;
- (BOOL)factoryDefault;
- (BOOL)recantConnection;
- (BOOL)suspendDevice:(BOOL)a0;
- (void)handleInterestNotificationForService:(unsigned int)a0 type:(unsigned int)a1 argument:(void *)a2;
- (id)driverClass;
- (unsigned short)vendorIDSource;
- (BOOL)isMouseDevice;
- (BOOL)isKeyboardDevice;
- (BOOL)isTrackpadDevice;
- (BOOL)connectedOverUSB;
- (BOOL)representsEventService:(unsigned int)a0;
- (float)batteryPercent;
- (BOOL)batteryLow;
- (BOOL)batteryDangerouslyLow;
- (BOOL)isCharging;

@end
