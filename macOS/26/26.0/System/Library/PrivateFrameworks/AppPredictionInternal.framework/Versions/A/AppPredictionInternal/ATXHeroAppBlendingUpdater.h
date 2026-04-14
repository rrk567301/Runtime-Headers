@interface ATXHeroAppBlendingUpdater : NSObject

+ (id)nonBlacklistedPredictionsFrom:(id)a0;
+ (id)clientModelSpecForHeroAppPredictions;
+ (void)updateBlendingLayerWithHeroAppPredictions:(id)a0 currentLocation:(id)a1;
+ (id)clientModelForHeroAppPredictions;

@end
