@class NSString, IOBluetoothDevice;

@interface BluetoothHIDDevice : NSObject {
    unsigned int _objectID;
    unsigned int _hidDevice;
    struct IOHIDDeviceInterface **_hidDeviceInterface;
    char _hidDeviceInterfaceOpen;
    IOBluetoothDevice *_bluetoothDevice;
    unsigned short _vendorIDSource;
    unsigned short _vendorID;
    unsigned short _productID;
    unsigned int _classOfDevice;
    struct BluetoothDeviceAddress { unsigned char data[6]; } _address;
    struct IOHIDQueueInterface **_queue;
    struct __CFRunLoopSource { } *_runLoopSource;
    struct UnsignedWide { unsigned int lo; unsigned int hi; } _timestamp;
    unsigned int _interestNotification;
}

@property (readonly) float batteryPercent;
@property (readonly) NSString *driverClass;
@property (readonly) NSString *name;
@property (readonly) NSString *addressString;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *product;
@property (readonly) unsigned short vendorIDSource;
@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;
@property (readonly) unsigned short version;
@property (readonly) unsigned int classOfDevice;
@property (readonly) unsigned short primaryUsage;
@property (readonly) unsigned short primaryUsagePage;
@property (readonly) char isMouseDevice;
@property (readonly) char isKeyboardDevice;
@property (readonly) char isTrackpadDevice;

+ (id)withBluetoothDevice:(id)a0;
+ (id)withHIDDevice:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (struct BluetoothDeviceAddress { unsigned char x0[6]; } *)address;
- (int)disconnect;
- (unsigned int)objectID;
- (char)startQueue;
- (void)stopQueue;
- (id)bluetoothDevice;
- (void)serviceInterestOfType:(unsigned int)a0 argument:(void *)a1;
- (char)_setHIDDevice:(unsigned int)a0;
- (void)closeDownServices;
- (char)connectedOverUSB;
- (void)deviceNameChanged:(id)a0;
- (unsigned int)hidDevice;
- (struct IOHIDDeviceInterface **)hidDeviceInterface;
- (char)hidDeviceInterfaceOpen;
- (id)initWithBluetoothDevice:(id)a0;
- (id)initWithHIDDevice:(unsigned int)a0;
- (char)isCharging;
- (struct UnsignedWide { unsigned int x0; unsigned int x1; })lastActivity;
- (void)queueEventReceived;
- (char)recantConnection;
- (char)representsEventService:(unsigned int)a0;

@end
