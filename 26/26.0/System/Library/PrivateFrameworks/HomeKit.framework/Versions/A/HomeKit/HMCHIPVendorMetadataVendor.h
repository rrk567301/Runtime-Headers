@class NSString, NSDictionary, NSArray, NSNumber;

@interface HMCHIPVendorMetadataVendor : NSObject <HMFObject, NSCopying>

@property (copy) NSDictionary *productsByProductID;
@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *appStoreID;
@property (readonly, copy) NSString *appBundleID;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)vendorFromDictionaryRepresentation:(id)a0;

@end
