@interface PHAssetCloudSharedProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL cloudIsMyAsset;
@property (readonly, nonatomic) BOOL cloudHasCommentsByMe;

+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
