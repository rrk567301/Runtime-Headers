@interface IAServerStats : NSObject

+ (void)logShutdown;
+ (void)logStart;
+ (void)reportConnectionStatusSuccessful:(char)a0;
+ (void)reportDailyStats;

@end
