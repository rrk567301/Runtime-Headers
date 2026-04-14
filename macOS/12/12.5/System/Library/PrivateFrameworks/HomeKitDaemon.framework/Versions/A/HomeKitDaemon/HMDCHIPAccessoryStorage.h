@class NSSet, NSDictionary, NSData, NSNumber;

@interface HMDCHIPAccessoryStorage : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *nodeID;
@property (copy) NSNumber *vendorID;
@property (copy) NSNumber *productID;
@property (copy) NSData *attributeDatabase;
@property (copy) NSSet *pairings;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (BOOL)updateUsingAccessoryModel:(id)a0;
- (void)updateAccessoryModel:(id)a0;

@end
