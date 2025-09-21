@class NSString, HAPBLEPeripheralInfo, NSNumber, NSMutableArray;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo;
@property (copy, nonatomic) id /* block */ saveBlock;
@property (readonly, nonatomic) NSNumber *metadataVersion;
@property (readonly, nonatomic) NSString *pairingIdentifier;
@property (readonly, nonatomic) NSMutableArray *cachedServices;
@property (retain, nonatomic) NSNumber *lastKeyBagIdentityIndexFailingPV;
@property (nonatomic) long long discoveryVersion;

+ (long long)currentDiscoveryVersion;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)save;
- (void)updateWithService:(id)a0;
- (id)getCachedServiceWithUUID:(id)a0;
- (id)initWithPairingIdentifier:(id)a0;
- (void)updateCurrentPairingIdentityIndexIfNeededForKeyBag:(id)a0;
- (void)updateWithPeripheralInfo:(id)a0;
- (void)updateWithSaveBlock:(id /* block */)a0;

@end
