@interface ATXActionPredictionHeuristics : NSObject

+ (id)nextCacheExpirationDate;
+ (id)addCacheExpirerNotification:(id /* block */)a0;
+ (id)actionsWithLocationManager:(id)a0;

@end
