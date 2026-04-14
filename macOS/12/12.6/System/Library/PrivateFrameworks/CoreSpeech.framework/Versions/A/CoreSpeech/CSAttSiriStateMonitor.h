@interface CSAttSiriStateMonitor : CSEventMonitor

@property (nonatomic) unsigned long long currentState;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isInAttendingState;
- (void)notifyUpdatedState:(unsigned long long)a0;

@end
