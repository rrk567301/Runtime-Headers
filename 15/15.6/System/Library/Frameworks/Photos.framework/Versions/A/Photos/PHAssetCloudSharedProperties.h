@interface PHAssetCloudSharedProperties : PHAssetPropertySet

@property (readonly, nonatomic) char cloudIsMyAsset;
@property (readonly, nonatomic) char cloudHasCommentsByMe;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
