@class NSUUID, NSData, SPDiscoveredAccessoryProductInformation, SPDiscoveredAccessoryMetadata;

@interface SPDiscoveredAccessory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *macAddress;
@property (copy, nonatomic) SPDiscoveredAccessoryMetadata *discoveredMetadata;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *productInformation;
@property (nonatomic) char isBatteryTooLow;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
