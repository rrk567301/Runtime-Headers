@class NSUUID, NSString, NSArray, NSData, NSDate, SPDiscoveredAccessoryProductInformation, NSDictionary, SPDiscoveredAccessoryMetadata, SPHandle;

@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (copy, nonatomic) NSArray *beaconLocations;
@property (copy, nonatomic) NSData *advertisement;
@property (copy, nonatomic) SPHandle *handle;
@property (nonatomic) char isIgnored;
@property (nonatomic) char isAppleAudioAccessory;
@property (copy, nonatomic) NSDate *triggerDate;
@property (copy, nonatomic) NSDate *ignoresUntilDate;
@property (nonatomic) long long alertState;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic) char connected;
@property (nonatomic) char isFindMyNetwork;
@property (nonatomic) char isPosh;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long observationType;
@property (copy, nonatomic) SPDiscoveredAccessoryMetadata *metadata;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *productInformation;
@property (copy, nonatomic) NSDictionary *taskInformation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
