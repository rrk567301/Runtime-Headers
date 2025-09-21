@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    char _isPhraseSpotterEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (char)isEnabled;
- (void)_stopMonitoring;
- (char)_checkPhraseSpotterEnabled;
- (void)_didReceivePhraseSpotterSettingChangedInQueue:(char)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(char)a1;
- (void)_phraseSpotterEnabledDidChange;
- (void)_startMonitoringWithQueue:(id)a0;

@end
