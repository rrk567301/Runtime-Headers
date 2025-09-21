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

- (void)dealloc;
- (id)name;
- (void).cxx_destruct;
- (unsigned short)version;
- (void)clearProperties;
- (struct BluetoothDeviceAddress { unsigned char x0[6]; } *)address;
- (unsigned int)objectID;
- (unsigned short)productID;
- (unsigned short)vendorID;
- (id)addressString;
- (int)setDeviceName:(id)a0;
- (id)manufacturer;
- (id)transport;
- (id)product;
- (id)bluetoothDevice;
- (void)cacheProperties;
- (char)_setEventService:(unsigned int)a0;
- (char)batteryDangerouslyLow;
- (char)batteryLow;
- (float)batteryPercent;
- (unsigned int)classOfDevice;
- (void)closeDownEventServiceServices;
- (void)closeDownServices;
- (char)connectedOverUSB;
- (id)deviceNameFromHardware;
- (id)driverClass;
- (char)factoryDefault;
- (char)fullFactoryDefault;
- (int)getMaxDeviceNameLength;
- (void)handleInterestNotificationForService:(unsigned int)a0 type:(unsigned int)a1 argument:(void *)a2;
- (unsigned int)hidDevice;
- (struct IOHIDDeviceInterface **)hidDeviceInterface;
- (id)initWithBluetoothDevice:(id)a0;
- (id)initWithEventService:(unsigned int)a0;
- (char)isCharging;
- (char)isKeyboardDevice;
- (char)isMouseDevice;
- (char)isTrackpadDevice;
- (unsigned short)primaryUsage;
- (unsigned short)primaryUsagePage;
- (char)recantConnection;
- (char)representsEventService:(unsigned int)a0;
- (char)setUserMode:(int)a0;
- (char)suspendDevice:(char)a0;
- (int)userMode;
- (unsigned short)vendorIDSource;

@end
