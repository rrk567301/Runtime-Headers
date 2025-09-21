@class NSString, NSArray, NSURL, NSNumber;

@interface HMCHIPVendorMetadataProduct : NSObject <HMFObject, NSCopying>

@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSNumber *categoryNumber;
@property (readonly, copy) NSNumber *deviceTypeID;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *label;
@property (readonly, copy) NSURL *installationGuideURL;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)productFromDictionaryRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 categoryNumber:(id)a1 deviceTypeID:(id)a2 name:(id)a3 label:(id)a4 installationGuideURL:(id)a5;

@end
