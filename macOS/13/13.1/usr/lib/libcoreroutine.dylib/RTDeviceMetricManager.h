@class RTReachabilityManager, RTDefaultsManager, RTDuetKnowledgeStore, RTMotionActivityManager;

@interface RTDeviceMetricManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDuetKnowledgeStore *duetKnowledgeStore;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTReachabilityManager *reachabilityManager;

+ (id)getDateIntervalFromDictionary:(id)a0;
+ (id)getDictionaryFromDateInterval:(id)a0;
+ (id)getReachabilityDefaultStringForTopN:(unsigned long long)a0 reachability:(unsigned long long)a1;
+ (id)getStringForMetricType:(id)a0 topN:(long long)a1;
+ (id)getMetricsDictionaryForMetricType:(id)a0 intervals:(id)a1 bins:(id)a2;

- (void).cxx_destruct;
- (void)_setup;
- (void)onDailyMetricsNotification:(id)a0;
- (void)_onDailyMetricsNotification:(id)a0;
- (void)setup;
- (void)onReachabilityChanged:(id)a0;
- (id)initWithDefaultsManager:(id)a0 motionActivityManager:(id)a1 reachabilityManager:(id)a2;
- (void)_onReachabilityChanged:(id)a0;
- (BOOL)_addToHeapForReachability:(unsigned long long)a0 endDate:(id)a1 dateInterval:(id)a2;
- (id)_getFromHeapDateIntervalsForReachability:(unsigned long long)a0;
- (BOOL)_addToHeapForReachability:(unsigned long long)a0 endDate:(id)a1 dateIntervals:(id)a2;
- (id)getLongestDeviceChargingIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)getLongestDeviceLockedIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)getLongestWiFiConnectionIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)getLongestStationaryMotionIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)_getLongestStationaryMotionIntervalsWithTopN:(unsigned long long)a0 dateInterval:(id)a1 error:(id *)a2;
- (id)_getLongestIntervalWithStreamType:(long long)a0 topN:(unsigned long long)a1 dateInterval:(id)a2 error:(id *)a3;
- (BOOL)_submitDeviceMetricsWithError:(id *)a0;
- (id)_getDeviceMetricsWithError:(id *)a0;

@end
