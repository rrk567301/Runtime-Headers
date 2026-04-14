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
- (unsigned int)vendorId;
- (void)connect;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (int)type;
- (id)address;
- (BOOL)connected;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)paired;
- (unsigned long long)connectedServices;
- (id)identifier;
- (unsigned int)productId;
- (BOOL)isEqualToDevice:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
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
