@class NSString, CBPeripheral, AXUIBluetoothHelper;

@interface AXUIBluetoothDevice : NSObject <NSCopying> {
    NSString *_name;
    NSString *_address;
    AXUIBluetoothHelper *_helper;
}

@property (nonatomic) struct BTDeviceImpl { } *device;
@property (retain, nonatomic) CBPeripheral *peripheral;

- (unsigned int)productId;
- (unsigned int)vendorId;
- (unsigned int)deviceClass;
- (void)disconnect;
- (BOOL)paired;
- (int)type;
- (id)identifier;
- (BOOL)connected;
- (id)address;
- (void)connect;
- (id)description;
- (long long)compare:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToDevice:(id)a0;
- (unsigned long long)connectedServices;
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
