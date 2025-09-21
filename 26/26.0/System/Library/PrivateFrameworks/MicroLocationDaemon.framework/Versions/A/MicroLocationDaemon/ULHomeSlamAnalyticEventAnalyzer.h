@interface ULHomeSlamAnalyticEventAnalyzer : NSObject

+ (id)_timepointToDate:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
+ (float)aggregateTimeBetweenEvent:(short)a0 andEvent:(short)a1 startDate:(id)a2 endDate:(id)a3 withDBStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a4;
+ (long long)countEventOccurrences:(short)a0 fromDate:(double)a1 untilDate:(double)a2 fromDBStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a3;

- (id)init;
- (id)_analyzeTriggersAndGetCA:(id)a0 fromDate:(id)a1 untilDate:(id)a2 withDBStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a3;
- (BOOL)_checkIfScreenTransitionedToOnBefore:(id)a0 after:(id)a1 withEvents:(struct vector<ULHomeSlamAnalyticEventDO, std::allocator<ULHomeSlamAnalyticEventDO>> { struct ULHomeSlamAnalyticEventDO *x0; struct ULHomeSlamAnalyticEventDO *x1; struct ULHomeSlamAnalyticEventDO *x2; })a2;
- (BOOL)_daemonWasRestartedWithEvents:(struct vector<ULHomeSlamAnalyticEventDO, std::allocator<ULHomeSlamAnalyticEventDO>> { struct ULHomeSlamAnalyticEventDO *x0; struct ULHomeSlamAnalyticEventDO *x1; struct ULHomeSlamAnalyticEventDO *x2; })a0;
- (long long)_hoursFromFirstEventToDate:(id)a0 withDBStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a1;
- (BOOL)_wasLastScreenStateOnBefore:(id)a0 withEvents:(struct vector<ULHomeSlamAnalyticEventDO, std::allocator<ULHomeSlamAnalyticEventDO>> { struct ULHomeSlamAnalyticEventDO *x0; struct ULHomeSlamAnalyticEventDO *x1; struct ULHomeSlamAnalyticEventDO *x2; })a1;
- (id)runStopDetectionAnalysisAtTimepoint:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0 withDBStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a1;

@end
