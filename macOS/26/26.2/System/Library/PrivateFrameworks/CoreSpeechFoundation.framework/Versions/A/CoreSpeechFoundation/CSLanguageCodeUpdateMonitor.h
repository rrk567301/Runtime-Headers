@interface CSLanguageCodeUpdateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (BOOL)isLanguageCodeCurrent:(id)a0;
- (void)notifySiriLanguageCodeChanged:(id)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;

@end
