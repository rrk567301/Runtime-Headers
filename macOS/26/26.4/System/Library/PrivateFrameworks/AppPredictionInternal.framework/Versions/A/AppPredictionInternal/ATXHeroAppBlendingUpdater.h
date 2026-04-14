@interface ATXHeroAppBlendingUpdater : NSObject

+ (id)nonBlacklistedPredictionsFrom:(id)a0;
+ (void)updateBlendingLayerWithHeroAppPredictions:(id)a0 currentLocation:(id)a1;
+ (id)clientModelSpecForHeroAppPredictions;
+ (id)clientModelForHeroAppPredictions;

@end
