@class NSData;

@interface PHAssetSceneprintProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *sceneprint;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
