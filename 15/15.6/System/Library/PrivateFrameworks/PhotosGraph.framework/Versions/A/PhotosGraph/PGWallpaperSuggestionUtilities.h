@interface PGWallpaperSuggestionUtilities : NSObject

+ (id)assetFetchPropertySetsIncludingGating:(char)a0;
+ (id)peopleShuffleDescriptorTitleWithCount:(unsigned long long)a0;
+ (char)foundDominantPeopleSceneInAsset:(id)a0 withConfidenceThresholdHelper:(id)a1;
+ (id)peopleSceneConfidenceThresholdHelper;

@end
