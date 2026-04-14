@interface GEOAPUtils : NSObject

+ (id)GEOAPCachePath;
+ (void)appTypeForAppId:(id)a0 resultBlock:(id /* block */)a1;
+ (id)GEOAPApplicationIdentifier;
+ (id)currentDailyAggregationTimestamp;
+ (id)daemonIdAdditions;
+ (id)daemonSet;
+ (id)dailyAggregationTimestampFromDate:(id)a0;
+ (id)firstPartySet;
+ (int)functionalAppGroup;
+ (int)myAppType;

@end
