@interface PHAssetPhotoCommentProperties : PHAssetPropertySet

@property (readonly, nonatomic) unsigned long long commentCount;
@property (readonly, nonatomic) unsigned long long likeCount;
@property (readonly, nonatomic) BOOL hasUserLiked;
@property (readonly, nonatomic) BOOL cloudIsMyAsset;
@property (readonly, nonatomic) BOOL cloudHasCommentsByMe;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (BOOL)isToMany;
+ (id)keyPathToPrimaryObject;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
