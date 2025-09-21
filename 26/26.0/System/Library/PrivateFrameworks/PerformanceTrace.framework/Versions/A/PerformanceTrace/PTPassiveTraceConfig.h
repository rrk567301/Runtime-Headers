@interface PTPassiveTraceConfig : NSObject

@property (readonly, nonatomic) BOOL connectionInvalidated;

+ (id)sharedConfig:(id *)a0;
+ (unsigned long long)smallMSSPMIInterval;

- (BOOL)resetPassiveCollectionSettings:(id *)a0;
- (id)applySetting:(unsigned long long)a0;
- (id)cancelCurrentSettingWithoutCollecting;
- (id)collectLookbackIntervalWithTraceNamePrefix:(id)a0 triggerUserNotification:(BOOL)a1 errorOut:(id *)a2;
- (id)collectThenClearCurrentSettingWithTraceNamePrefix:(id)a0 triggerUserNotification:(BOOL)a1 errorOut:(id *)a2;
- (id)collectWithStartDate:(id)a0 endDate:(id)a1 traceNamePrefix:(id)a2 triggerUserNotification:(BOOL)a3 errorOut:(id *)a4;
- (id)fetchCollectAppInFocus:(id *)a0;
- (id)fetchCollectLoggingAppLaunch:(id *)a0;
- (id)fetchCollectLoggingHangs:(id *)a0;
- (id)fetchCollectLoggingMetalFramePacing:(id *)a0;
- (id)fetchCollectLoggingPerfPowerMetrics:(id *)a0;
- (id)fetchCollectLoggingScrolling:(id *)a0;
- (id)fetchCollectLoggingUserInteraction:(id *)a0;
- (id)fetchCollectLookbackInterval:(id *)a0;
- (id)fetchCollectMSS:(id *)a0;
- (id)fetchCurrentSetting:(id *)a0;
- (id)fetchMSSPMICycleInterval:(id *)a0;
- (id)fetchMetalPerDrawableSignpostsEnabled:(id *)a0;
- (id)fetchPerfPowerMetricMonitorEnabled:(id *)a0;
- (id)fetchPerfPowerMetricMonitoredProcesses:(id *)a0;
- (id)fetchRecordingStartDate:(id *)a0;
- (id)instrumentationConfigLocked:(id *)a0;
- (id)pingService:(id)a0 errorOut:(id *)a1;
- (id)updateCollectAppInFocus:(id)a0;
- (id)updateCollectLoggingAppLaunch:(id)a0;
- (id)updateCollectLoggingHangs:(id)a0;
- (id)updateCollectLoggingMetalFramePacing:(id)a0;
- (id)updateCollectLoggingPerfPowerMetrics:(id)a0;
- (id)updateCollectLoggingScrolling:(id)a0;
- (id)updateCollectLoggingUserInteraction:(id)a0;
- (id)updateCollectLookbackInterval:(id)a0;
- (id)updateCollectMSS:(id)a0;
- (id)updateMSSPMICycleInterval:(id)a0;
- (id)updateMetalPerDrawableSignpostsEnabled:(id)a0;
- (id)updatePerfPowerMetricMonitorEnabled:(id)a0;
- (id)updatePerfPowerMetricMonitoredProcesses:(id)a0;
- (id)updateRecordingStartDate:(id)a0;

@end
