@class NSString;

@interface CSLanguageCodeUpdateMonitorImplDarwin : CSLanguageCodeUpdateMonitor {
    NSString *_currentLanguageCode;
}

- (BOOL)isLanguageCodeCurrent:(id)a0;
- (void)notifySiriLanguageCodeChanged:(id)a0;
- (void)_didReceiveLanguageCodeUpdate:(id)a0;
- (void).cxx_destruct;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;

@end
