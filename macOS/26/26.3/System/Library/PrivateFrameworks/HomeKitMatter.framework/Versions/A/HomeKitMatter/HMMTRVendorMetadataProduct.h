@class NSString, NSDictionary, NSURL, NSNumber;

@interface HMMTRVendorMetadataProduct : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSNumber *identifier;
@property (copy) NSNumber *categoryNumber;
@property (copy) NSNumber *deviceTypeID;
@property (copy) NSString *name;
@property (copy) NSString *label;
@property (copy) NSURL *installationGuideURL;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, getter=isInvalid) BOOL invalid;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithIdentifier:(id)a0 categoryNumber:(id)a1 isInvalid:(BOOL)a2;

@end
