@class NSString, NSArray;

@interface HMVendorModelEntry : NSObject <HMFObject, NSCopying>

@property (readonly, copy) NSString *manufacturer;
@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *appBundleID;
@property (readonly, copy) NSString *appStoreID;
@property (readonly, copy) NSString *firmwareVersion;
@property (readonly, copy) NSString *productData;
@property (readonly, copy) NSArray *productDataAlternates;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)vendorModelEntryFromDictionaryRepresentation:(id)a0;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithManufacturer:(id)a0 model:(id)a1 appBundleID:(id)a2 appStoreID:(id)a3 firmwareVersion:(id)a4 productData:(id)a5 productDataAlternates:(id)a6;

@end
