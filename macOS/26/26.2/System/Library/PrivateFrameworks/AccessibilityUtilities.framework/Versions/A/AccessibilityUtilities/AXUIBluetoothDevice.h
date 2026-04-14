@class NSString, CBPeripheral, AXUIBluetoothHelper;

@interface AXUIBluetoothDevice : NSObject <NSCopying> {
    NSString *_name;
    NSString *_address;
    AXUIBluetoothHelper *_helper;
}

@property (nonatomic) struct BTDeviceImpl { } *device;
@property (retain, nonatomic) CBPeripheral *peripheral;

- (long long)compare:(id)a0;
- (void)disconnect;
- (BOOL)connected;
- (id)identifier;
- (void)connect;
- (BOOL)paired;
- (unsigned int)deviceClass;
- (unsigned int)productId;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (id)address;
- (void).cxx_destruct;
- (unsigned long long)connectedServices;
- (id)description;
- (id)name;
- (BOOL)isEqualToDevice:(id)a0;
- (unsigned int)vendorId;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (BOOL)connecting;
- (void)setPIN:(id)a0;
- (void)unpair;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (void)acceptSSP:(int)a0;
- (void)connectWithServices:(unsigned int)a0;
- (unsigned long long)connectedServicesCount;
- (unsigned int)authorizedServices;
- (BOOL)isClassicDevice;
- (void)clearName;
- (BOOL)hasAddress:(id)a0;
- (id)initWithDevice:(void *)a0 address:(id)a1 helper:(id)a2;
- (id)initWithPeripheral:(id)a0 helper:(id)a1;
- (BOOL)isAppleHIDDevice;
- (BOOL)isBTLEDevice;
- (BOOL)isNameCached;

@end
