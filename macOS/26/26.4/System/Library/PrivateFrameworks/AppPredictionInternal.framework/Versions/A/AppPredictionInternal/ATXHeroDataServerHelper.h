@interface ATXHeroDataServerHelper : NSObject

+ (id)bundleIdForPrediction:(id)a0;
+ (BOOL)isPredictionInRadius:(id)a0 currentLocation:(id)a1;
+ (id)heroAppPredictionsSortedByDistance:(id)a0 currentLocation:(id)a1;
+ (BOOL)canPredictClipsGivenRecentMotion;
+ (id)inRadiusPredictionsFrom:(id)a0 currentLocation:(id)a1;

- (id)init;

@end
