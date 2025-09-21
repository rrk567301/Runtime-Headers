@interface ATXHeroDataServerHelper : NSObject

+ (id)bundleIdForPrediction:(id)a0;
+ (char)canPredictClipsGivenRecentMotion;
+ (id)heroAppPredictionsSortedByDistance:(id)a0 currentLocation:(id)a1;
+ (id)inRadiusPredictionsFrom:(id)a0 currentLocation:(id)a1;
+ (char)isPredictionInRadius:(id)a0 currentLocation:(id)a1;

- (id)init;

@end
