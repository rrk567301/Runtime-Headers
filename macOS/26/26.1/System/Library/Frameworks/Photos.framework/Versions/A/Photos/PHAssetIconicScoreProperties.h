@interface PHAssetIconicScoreProperties : PHAssetPropertySet

@property (readonly, nonatomic) double iconicScore;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
