@interface PHAssetCloudSharedProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL cloudIsMyAsset;
@property (readonly, nonatomic) BOOL cloudHasCommentsByMe;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
