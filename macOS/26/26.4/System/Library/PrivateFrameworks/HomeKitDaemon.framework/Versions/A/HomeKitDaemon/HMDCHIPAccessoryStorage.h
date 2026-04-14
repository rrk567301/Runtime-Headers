@class NSSet, NSString, NSData, NSDictionary, NSNumber;

@interface HMDCHIPAccessoryStorage : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *nodeID;
@property (copy) NSNumber *vendorID;
@property (copy) NSNumber *productID;
@property (copy) NSData *attributeDatabase;
@property (copy) NSSet *pairings;
@property BOOL wedSupport;
@property (copy) NSString *extendedMACAddress;
@property (copy) NSNumber *softwareVersionNumber;
@property (copy) NSNumber *supportedLinkLayerTypes;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)logIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)updateAccessoryModel:(id)a0;
- (BOOL)updateUsingAccessoryModel:(id)a0;

@end
