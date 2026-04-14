@interface PHAssetIconicScoreProperties : PHAssetPropertySet

@property (readonly, nonatomic) double iconicScore;

+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
