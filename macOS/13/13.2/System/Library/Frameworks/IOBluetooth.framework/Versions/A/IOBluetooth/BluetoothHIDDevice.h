@class NSString, IOBluetoothDevice;

@interface BluetoothHIDDevice : NSObject {
    unsigned int _objectID;
    unsigned int _hidDevice;
    struct IOHIDDeviceInterface **_hidDeviceInterface;
    BOOL _hidDeviceInterfaceOpen;
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
@property (readonly) BOOL isMouseDevice;
@property (readonly) BOOL isKeyboardDevice;
@property (readonly) BOOL isTrackpadDevice;

+ (id)withBluetoothDevice:(id)a0;
+ (id)withHIDDevice:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (struct BluetoothDeviceAddress { unsigned char x0[6]; } *)address;
- (int)disconnect;
- (unsigned int)objectID;
- (void)stopQueue;
- (BOOL)startQueue;
- (void)closeDownServices;
- (unsigned int)hidDevice;
- (struct IOHIDDeviceInterface **)hidDeviceInterface;
- (id)bluetoothDevice;
- (BOOL)recantConnection;
- (id)initWithBluetoothDevice:(id)a0;
- (BOOL)connectedOverUSB;
- (BOOL)representsEventService:(unsigned int)a0;
- (BOOL)isCharging;
- (id)initWithHIDDevice:(unsigned int)a0;
- (void)serviceInterestOfType:(unsigned int)a0 argument:(void *)a1;
- (void)deviceNameChanged:(id)a0;
- (BOOL)_setHIDDevice:(unsigned int)a0;
- (BOOL)hidDeviceInterfaceOpen;
- (void)queueEventReceived;
- (struct UnsignedWide { unsigned int x0; unsigned int x1; })lastActivity;

@end
