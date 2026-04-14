@class NSArray, NSString, NSUUID, NSData, CBPeripheral, NSMutableArray, NSNumber;

@interface HAPBLEPeripheral : HMFObject

@property (retain, nonatomic) NSMutableArray *uuids;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUUID *uniqueBTIdentifier;
@property (retain, nonatomic) NSNumber *hkType;
@property (retain, nonatomic) NSNumber *advInterval;
@property (retain, nonatomic) NSString *advDeviceAddress;
@property (retain, nonatomic) NSNumber *statusFlags;
@property (retain, nonatomic) NSNumber *category;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSNumber *configNumber;
@property (retain, nonatomic) NSData *setupHash;
@property (retain, nonatomic) NSData *encryptedPayload;
@property (retain, nonatomic) NSNumber *averageRSSI;
@property (nonatomic) double lastSeen;
@property (nonatomic) BOOL isCached;
@property (nonatomic) unsigned long long advertisementFormat;
@property (retain, nonatomic) CBPeripheral *cbPeripheral;
@property (retain, nonatomic) NSString *whbStableIdentifier;
@property (readonly, nonatomic) NSArray *peripheralUUIDs;

+ (id)uuidForBTLEPeripheral:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)shortDescription;
- (BOOL)isBroadcasting;
- (BOOL)updateWithPeripheral:(id)a0;
- (void)updateStateNumber:(id)a0;
- (void)mergeWithPeripheral:(id)a0;
- (id)initWithName:(id)a0 peripheralUUID:(id)a1 identifier:(id)a2 hapVersion:(id)a3 hkType:(id)a4 advInterval:(id)a5 statusFlags:(id)a6 category:(id)a7 stateNumber:(id)a8 configNumber:(id)a9 setupHash:(id)a10 encryptedPayload:(id)a11 whbStableIdentifier:(id)a12 advDeviceAddress:(id)a13;
- (void)connectedToCBPeripheral:(id)a0 error:(id)a1;
- (void)disconnectedFromCBPeripheral:(id)a0 error:(id)a1;
- (void)_updateAverageRSSIWithRSSI:(id)a0;
- (void)_resetAverageRSSI;

@end
