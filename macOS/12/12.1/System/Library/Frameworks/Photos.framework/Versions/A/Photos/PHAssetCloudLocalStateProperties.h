@class NSManagedObjectID;

@interface PHAssetCloudLocalStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSManagedObjectID *cloudMasterObjectID;
@property (readonly, nonatomic) unsigned short assetCloudLocalState;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)additionalPropertiesToFetchOnPrimaryObject;
+ (BOOL)inverseIsToMany;
+ (id)keyPathFromPrimaryObject;
+ (unsigned short)_assetCloudLocalStateFromAssetLocalState:(short)a0 masterLocalState:(short)a1;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
