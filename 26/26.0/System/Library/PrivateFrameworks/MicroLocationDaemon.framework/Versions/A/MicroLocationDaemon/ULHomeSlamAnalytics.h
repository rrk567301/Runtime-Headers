@class ULEnvironment, NSMutableArray;

@interface ULHomeSlamAnalytics : NSObject

@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (retain, nonatomic) ULEnvironment *environment;
@property (nonatomic) BOOL dependenciesSet;
@property (retain, nonatomic) NSMutableArray *sleepWakeEventsQueue;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)logEventExitHomeLOIAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logSleepStateEvent:(int)a0 atTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;
- (id)_createBGTRequest;
- (void)_logEventType:(short)a0 atTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;
- (void)_registerForBackgroundTask;
- (void)_runStopDetectionAnalyticsTask;
- (void)_unregisterForBackgroundTask;
- (void)handleSleepWakeMonitorEvent:(int)a0;
- (void)logEventAcceleratedTriggerChanged:(BOOL)a0 AtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;
- (void)logEventDaemonStartedAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventEnterHomeLOIAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventMiLoEnabled:(BOOL)a0 AtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;
- (void)logEventRequireIsLowLatencyChanged:(BOOL)a0 AtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;
- (void)logEventScanEventGeneratedAfterDisplayOnAtTimeStamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventScreenOffAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventScreenOnAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventSleepStateRegisterAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)resetDependencies;
- (void)setDependenciesAndRegisterToBackgroundTaskWithDB:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0 environment:(id)a1;

@end
