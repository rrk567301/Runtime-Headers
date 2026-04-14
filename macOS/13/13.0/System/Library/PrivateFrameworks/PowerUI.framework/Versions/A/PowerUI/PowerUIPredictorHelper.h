@interface PowerUIPredictorHelper : NSObject

+ (double)medianOf:(id)a0;
+ (double)meanOf:(id)a0;
+ (double)standardDeviationOf:(id)a0;
+ (double)getHourBinID:(id)a0 forHourBin:(unsigned long long)a1;
+ (id)events:(id)a0 forHourBin:(unsigned long long)a1 date:(id)a2 withMaxDuration:(double)a3;
+ (id)filterEvents:(id)a0 startOnSameWeekdayAs:(id)a1;
+ (id)getDurationsFromEvents:(id)a0 withUnit:(double)a1 cappedAt:(double)a2;
+ (id)filterEventsSortedByStartDateAscending:(id)a0 startsBefore:(id)a1 dynamicallyAroundDate:(id)a2 withHourBinWidth:(unsigned long long)a3;
+ (id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)a0 forHourBin:(unsigned long long)a1 atDate:(id)a2 addAtDate:(BOOL)a3;
+ (id)getUsageBucketsForEvents:(id)a0 forDate:(id)a1 withLog:(id)a2;
+ (double)hoursUntilUseFromBucketedUsage:(id)a0 withCurrentHour:(int)a1 withComponentsMinutes:(long long)a2;
+ (double)medianTimeBetweenDescendingEvents:(id)a0;
+ (double)meanEventDuration:(id)a0;
+ (void)quantizeValuesInDataFrame:(id)a0 forColumn:(id)a1 withBinWidth:(id)a2;
+ (id)convertDateToSeconds:(id)a0;
+ (id)convertDateTimeColumnToSeconds:(id)a0 inDataFrame:(id)a1;
+ (id)filterDataFrame:(id)a0 withValue:(double)a1 forColumn:(id)a2;
+ (id)filterDataFrame:(id)a0 withValueGreaterThan:(double)a1 andLessThan:(double)a2 forColumn:(id)a3;
+ (id)filterDataFrame:(id)a0 forColumn:(id)a1 withFilterHandler:(id /* block */)a2;
+ (id)column:(id)a0 inDataFrame:(id)a1;
+ (id)meanForColumn:(id)a0 inDataFrame:(id)a1;
+ (id)percentile:(double)a0 forColumn:(id)a1 inDataFrame:(id)a2;
+ (id)percentiles:(id)a0 forColumn:(id)a1 inDataFrame:(id)a2;
+ (id)standardDeviationForColumn:(id)a0 inDataFrame:(id)a1;
+ (id)varianceForColumn:(id)a0 inDataFrame:(id)a1;
+ (id)countForColumn:(id)a0 inDataFrame:(id)a1;

@end
