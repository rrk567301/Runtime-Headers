@class NSMutableDictionary, NSSet, NSDictionary, NSNumber;

@interface HMMTRVendorMetadata : HMFObject <NSCopying, NSMutableCopying>

@property (retain) NSMutableDictionary *vendorsByVendorID;
@property (readonly, copy) NSNumber *version;
@property (readonly, copy) NSNumber *schemaVersion;
@property (readonly, copy) NSSet *vendors;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)initWithVersion:(id)a0 schemaVersion:(id)a1;
- (id)vendorWithID:(id)a0;

@end
