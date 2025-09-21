@class NSString, NSDictionary, NSSet, NSNumber;

@interface HMMTRVendorMetadataVendor : HMFObject

@property (copy) NSNumber *identifier;
@property (copy) NSDictionary *productsByProductID;
@property (copy) NSString *name;
@property (copy) NSString *appStoreID;
@property (copy) NSString *appBundleID;
@property (readonly, copy) NSSet *products;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property char invalid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (id)attributeDescriptions;
- (id)productWithID:(id)a0;
- (id)productWithID:(id)a0 includeInvalids:(char)a1;

@end
