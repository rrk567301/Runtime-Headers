@class NSString, NSArray, CBPeripheral, NSMutableArray;

@interface AXFakePSAPDevice : AXPSAPDevice {
    NSMutableArray *_leftFakePrograms;
    NSMutableArray *_rightFakePrograms;
    id /* block */ _writeBlock;
}

@property (nonatomic) BOOL connected;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *manufacturer;
@property (retain, nonatomic) NSArray *model;
@property (retain, nonatomic) NSString *leftUUID;
@property (retain, nonatomic) NSString *rightUUID;
@property (nonatomic) BOOL isConnecting;
@property (retain, nonatomic) NSString *leftFirmwareVersion;
@property (retain, nonatomic) NSString *rightFirmwareVersion;
@property (retain, nonatomic) NSString *leftHardwareVersion;
@property (retain, nonatomic) NSString *rightHardwareVersion;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long excludedProperties;
@property (retain, nonatomic) CBPeripheral *leftPeripheral;
@property (retain, nonatomic) CBPeripheral *rightPeripheral;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (BOOL)isConnected;
- (id)valueForProperty:(unsigned long long)a0;
- (BOOL)isPersistent;
- (id)initWithDeviceType:(unsigned long long)a0;
- (void)setValue:(id)a0 forProperty:(unsigned long long)a1;
- (id)persistentRepresentation;
- (BOOL)hasConnection;
- (void)persist;
- (id)manufacturerForType;
- (id)modelForType;
- (BOOL)leftAvailable;
- (BOOL)rightAvailable;
- (BOOL)isLeftConnected;
- (BOOL)isRightConnected;
- (void)createPrograms;
- (id)leftPrograms;
- (id)rightPrograms;
- (unsigned long long)availablePropertiesForPeripheral:(id)a0;
- (BOOL)deviceSupportsProperty:(unsigned long long)a0;
- (BOOL)propertyIsAvailable:(unsigned long long)a0 forEar:(int)a1;
- (BOOL)showCombinedPrograms;
- (BOOL)programsListsAreEqual;
- (void)writeInt:(unsigned char)a0 toEar:(int)a1 forProperty:(unsigned long long)a2;
- (void)writeSignedInt:(char)a0 toEar:(int)a1 forProperty:(unsigned long long)a2;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (void)registerWriteBlock:(id /* block */)a0;
- (void)setNewName:(id)a0;
- (BOOL)isFakeDevice;

@end
