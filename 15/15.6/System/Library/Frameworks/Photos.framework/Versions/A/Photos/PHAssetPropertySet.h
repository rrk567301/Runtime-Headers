@class NSString, PHAsset;

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet>

@property (class, readonly, nonatomic) NSString *propertySetName;

@property (readonly, weak, nonatomic) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (char)isToMany;
+ (char)inverseIsToMany;
+ (char)createsPropertySetObjectWithCustomImplementation;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToPrefetch;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
