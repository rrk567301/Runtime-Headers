@interface CSSiriRestrictionOnLockScreenMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (BOOL)isRestricted;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;

@end
