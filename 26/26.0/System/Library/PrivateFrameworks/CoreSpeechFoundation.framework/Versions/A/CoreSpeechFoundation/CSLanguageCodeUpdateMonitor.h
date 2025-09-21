@interface CSLanguageCodeUpdateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isLanguageCodeCurrent:(id)a0;
- (void)_stopMonitoring;
- (void)notifySiriLanguageCodeChanged:(id)a0;

@end
