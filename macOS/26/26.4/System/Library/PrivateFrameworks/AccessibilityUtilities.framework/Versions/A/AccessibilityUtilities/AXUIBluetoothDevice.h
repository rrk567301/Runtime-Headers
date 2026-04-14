@class NSString, CBPeripheral, AXUIBluetoothHelper;

@interface AXUIBluetoothDevice : NSObject <NSCopying> {
    NSString *_name;
    NSString *_address;
    AXUIBluetoothHelper *_helper;
}

@property (nonatomic) struct BTDeviceImpl { } *device;
@property (retain, nonatomic) CBPeripheral *peripheral;

- (void)disconnect;
- (unsigned int)deviceClass;
- (BOOL)connected;
- (id)name;
- (unsigned int)vendorId;
- (BOOL)paired;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)connect;
- (id)address;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDevice:(id)a0;
- (unsigned long long)connectedServices;
- (unsigned long long)hash;
- (int)type;
- (id)description;
- (id)identifier;
- (unsigned int)productId;
- (BOOL)connecting;
- (void)setPIN:(id)a0;
- (void)unpair;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (void)acceptSSP:(int)a0;
- (void)connectWithServices:(unsigned int)a0;
- (unsigned long long)connectedServicesCount;
- (BOOL)isClassicDevice;
- (unsigned int)authorizedServices;
- (void)clearName;
- (BOOL)hasAddress:(id)a0;
- (id)initWithDevice:(void *)a0 address:(id)a1 helper:(id)a2;
- (id)initWithPeripheral:(id)a0 helper:(id)a1;
- (BOOL)isAppleHIDDevice;
- (BOOL)isBTLEDevice;
- (BOOL)isNameCached;

@end
