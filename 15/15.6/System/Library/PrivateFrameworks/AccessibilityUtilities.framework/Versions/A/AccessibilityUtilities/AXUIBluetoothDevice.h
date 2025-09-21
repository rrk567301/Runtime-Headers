@class NSString, CBPeripheral, AXUIBluetoothHelper;

@interface AXUIBluetoothDevice : NSObject <NSCopying> {
    NSString *_name;
    NSString *_address;
    AXUIBluetoothHelper *_helper;
}

@property (nonatomic) struct BTDeviceImpl { } *device;
@property (retain, nonatomic) CBPeripheral *peripheral;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)identifier;
- (int)type;
- (id)address;
- (void)disconnect;
- (void)connect;
- (char)connected;
- (unsigned int)productId;
- (unsigned int)vendorId;
- (unsigned int)deviceClass;
- (unsigned long long)connectedServices;
- (char)paired;
- (char)isEqualToDevice:(id)a0;
- (char)connecting;
- (char)isServiceSupported:(unsigned int)a0;
- (void)setPIN:(id)a0;
- (void)unpair;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (void)acceptSSP:(int)a0;
- (void)connectWithServices:(unsigned int)a0;
- (unsigned long long)connectedServicesCount;
- (unsigned int)authorizedServices;
- (char)isClassicDevice;
- (void)clearName;
- (char)hasAddress:(id)a0;
- (id)initWithDevice:(void *)a0 address:(id)a1 helper:(id)a2;
- (id)initWithPeripheral:(id)a0 helper:(id)a1;
- (char)isAppleHIDDevice;
- (char)isBTLEDevice;
- (char)isNameCached;

@end
