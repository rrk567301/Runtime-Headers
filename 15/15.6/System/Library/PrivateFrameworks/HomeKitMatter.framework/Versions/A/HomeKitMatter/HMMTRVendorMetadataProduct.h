@class NSString, NSDictionary, NSURL, NSNumber;

@interface HMMTRVendorMetadataProduct : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSNumber *identifier;
@property (copy) NSNumber *categoryNumber;
@property (copy) NSNumber *deviceTypeID;
@property (copy) NSString *name;
@property (copy) NSString *label;
@property (copy) NSURL *installationGuideURL;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, getter=isInvalid) char invalid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 categoryNumber:(id)a1 isInvalid:(char)a2;

@end
