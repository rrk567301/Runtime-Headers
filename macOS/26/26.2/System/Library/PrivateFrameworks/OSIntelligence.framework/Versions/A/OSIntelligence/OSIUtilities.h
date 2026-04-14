@interface OSIUtilities : NSObject

+ (BOOL)isWeekend:(id)a0;
+ (BOOL)isiPhone;
+ (long long)currentBatteryLevelWithContext:(id)a0;
+ (void)logCompletion:(id)a0;
+ (id)midnightDateFrom:(id)a0;
+ (unsigned long long)daysCrossingDailyDrainThreshold:(unsigned long long)a0 overPastDays:(int)a1 fromDate:(id)a2;
+ (id)drainPerDayFromDate:(id)a0 forNumberOfDays:(int)a1;
+ (id)loIAtBeginningAndEndOfIntervals:(id)a0;

@end
