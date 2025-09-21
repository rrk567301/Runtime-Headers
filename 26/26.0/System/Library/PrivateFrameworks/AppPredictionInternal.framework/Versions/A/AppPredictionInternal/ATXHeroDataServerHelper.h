@interface ATXHeroDataServerHelper : NSObject

+ (id)inRadiusPredictionsFrom:(id)a0 currentLocation:(id)a1;
+ (BOOL)canPredictClipsGivenRecentMotion;
+ (BOOL)isPredictionInRadius:(id)a0 currentLocation:(id)a1;
+ (id)heroAppPredictionsSortedByDistance:(id)a0 currentLocation:(id)a1;
+ (id)bundleIdForPrediction:(id)a0;

- (id)init;

@end
