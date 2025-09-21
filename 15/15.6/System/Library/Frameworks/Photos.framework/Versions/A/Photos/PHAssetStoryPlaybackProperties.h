@interface PHAssetStoryPlaybackProperties : PHAssetPropertySet

@property (readonly, nonatomic) char hasPeopleSceneMidOrGreaterConfidence;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
