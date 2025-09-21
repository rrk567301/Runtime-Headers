@class NSSet, NSString, NSData, NSDictionary, NSNumber;

@interface HMDCHIPAccessoryStorage : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSNumber *nodeID;
@property (copy) NSNumber *vendorID;
@property (copy) NSNumber *productID;
@property (copy) NSData *attributeDatabase;
@property (copy) NSSet *pairings;
@property char wedSupport;
@property (copy) NSString *extendedMACAddress;
@property (copy) NSNumber *softwareVersionNumber;
@property (copy) NSNumber *supportedLinkLayerTypes;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)updateAccessoryModel:(id)a0;
- (char)updateUsingAccessoryModel:(id)a0;

@end
