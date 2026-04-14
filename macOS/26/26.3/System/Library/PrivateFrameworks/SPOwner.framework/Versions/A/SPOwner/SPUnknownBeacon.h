@class NSUUID, NSString, NSArray, NSData, NSDate, SPDiscoveredAccessoryProductInformation, NSDictionary, SPDiscoveredAccessoryMetadata, SPHandle;

@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (copy, nonatomic) NSArray *beaconLocations;
@property (copy, nonatomic) NSData *advertisement;
@property (copy, nonatomic) SPHandle *handle;
@property (nonatomic) BOOL isIgnored;
@property (nonatomic) BOOL isAppleAudioAccessory;
@property (copy, nonatomic) NSDate *triggerDate;
@property (copy, nonatomic) NSDate *ignoresUntilDate;
@property (nonatomic) long long alertState;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL isFindMyNetwork;
@property (nonatomic) BOOL isPosh;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long observationType;
@property (copy, nonatomic) SPDiscoveredAccessoryMetadata *metadata;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *productInformation;
@property (copy, nonatomic) NSDictionary *taskInformation;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
