@class NSMutableDictionary, NSSet, NSDictionary, NSNumber;

@interface HMMTRVendorMetadata : HMFObject <NSCopying, NSMutableCopying>

@property (retain) NSMutableDictionary *vendorsByVendorID;
@property (readonly, copy) NSNumber *version;
@property (readonly, copy) NSNumber *schemaVersion;
@property (readonly, copy) NSSet *vendors;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)init;
- (id)attributeDescriptions;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithVersion:(id)a0 schemaVersion:(id)a1;
- (id)vendorWithID:(id)a0;

@end
