@interface PGWallpaperSuggestionUtilities : NSObject

+ (id)assetFetchPropertySetsIncludingGating:(BOOL)a0;
+ (id)peopleShuffleDescriptorTitleWithCount:(unsigned long long)a0;
+ (unsigned long long)computeQuantizedPenalty:(double)a0 minScore:(double)a1 cutOff:(double)a2;
+ (BOOL)foundDominantPeopleSceneInAsset:(id)a0 withConfidenceThresholdHelper:(id)a1;
+ (id)peopleSceneConfidenceThresholdHelper;

@end
