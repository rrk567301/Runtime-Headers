@class NSString, NSDictionary, NSSet, NSNumber;

@interface HMMTRVendorMetadataVendor : HMFObject

@property (copy) NSNumber *identifier;
@property (copy) NSDictionary *productsByProductID;
@property (copy) NSString *name;
@property (readonly, copy) NSSet *products;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (id)productWithID:(id)a0;
- (id)productWithID:(id)a0 includeInvalids:(BOOL)a1;

@end
