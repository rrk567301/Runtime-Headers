@interface PHAssetPhotoCommentProperties : PHAssetPropertySet

@property (readonly, nonatomic) unsigned long long commentCount;
@property (readonly, nonatomic) unsigned long long likeCount;
@property (readonly, nonatomic) char hasUserLiked;
@property (readonly, nonatomic) char cloudIsMyAsset;
@property (readonly, nonatomic) char cloudHasCommentsByMe;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (char)isToMany;
+ (id)propertySetName;
+ (char)createsPropertySetObjectWithCustomImplementation;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
