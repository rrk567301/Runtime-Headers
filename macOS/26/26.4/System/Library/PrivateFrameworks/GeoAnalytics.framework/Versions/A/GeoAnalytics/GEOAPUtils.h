@interface GEOAPUtils : NSObject

+ (id)uuidFrom:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a0;
+ (int)myAppType;
+ (id)GEOAPCachePath;
+ (void)appTypeForAppId:(id)a0 resultBlock:(id /* block */)a1;
+ (id)GEOAPApplicationIdentifier;
+ (id)currentDailyAggregationRepresentativeString;
+ (id)currentDailyAggregationTimestamp;
+ (id)daemonIdAdditions;
+ (id)daemonSet;
+ (id)dailyAggregationRepresentativeStringFromDate:(id)a0;
+ (id)dailyAggregationTimestampFromDate:(id)a0;
+ (id)dailyAggregationTimestampFromDate:(id)a0 inAggTimestampFormat:(BOOL)a1;
+ (id)firstPartySet;
+ (int)functionalAppGroup;

@end
