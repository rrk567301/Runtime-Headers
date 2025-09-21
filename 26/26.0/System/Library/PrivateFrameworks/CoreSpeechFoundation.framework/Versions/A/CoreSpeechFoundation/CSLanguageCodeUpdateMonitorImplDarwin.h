@class NSString;

@interface CSLanguageCodeUpdateMonitorImplDarwin : CSLanguageCodeUpdateMonitor {
    NSString *_currentLanguageCode;
}

- (void)_didReceiveLanguageCodeUpdate:(id)a0;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isLanguageCodeCurrent:(id)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)notifySiriLanguageCodeChanged:(id)a0;

@end
