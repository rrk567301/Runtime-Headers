@interface ATXHeroDataServerHelper : NSObject

+ (id)heroAppPredictionsSortedByDistance:(id)a0 currentLocation:(id)a1;
+ (id)inRadiusPredictionsFrom:(id)a0 currentLocation:(id)a1;
+ (BOOL)isPredictionInRadius:(id)a0 currentLocation:(id)a1;
+ (BOOL)canPredictClipsGivenRecentMotion;
+ (id)bundleIdForPrediction:(id)a0;

- (id)init;

@end
