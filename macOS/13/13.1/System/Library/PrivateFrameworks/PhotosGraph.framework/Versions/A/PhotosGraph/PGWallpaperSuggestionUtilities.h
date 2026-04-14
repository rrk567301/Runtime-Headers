@interface PGWallpaperSuggestionUtilities : NSObject

+ (id)peopleShuffleDescriptorTitleWithCount:(unsigned long long)a0;
+ (id)assetFetchPropertySetsIncludingGating:(BOOL)a0;
+ (double)cropScoreWithAsset:(id)a0 classification:(unsigned long long)a1 passesClockOverlap:(BOOL *)a2 cropZoomRatio:(double *)a3;
+ (id)peopleSceneConfidenceThresholdHelper;
+ (BOOL)foundDominantPeopleSceneInAsset:(id)a0 withConfidenceThresholdHelper:(id)a1;

@end
