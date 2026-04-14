@interface ATXHeroAppBlendingUpdater : NSObject

+ (void)updateBlendingLayerWithHeroAppPredictions:(id)a0 currentLocation:(id)a1;
+ (id)clientModelForHeroAppPredictions;
+ (id)nonBlacklistedPredictionsFrom:(id)a0;
+ (id)clientModelSpecForHeroAppPredictions;

@end
