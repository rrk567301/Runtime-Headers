@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isPhraseSpotterEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)isEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (BOOL)_checkPhraseSpotterEnabled;
- (void)_didReceivePhraseSpotterSettingChangedInQueue:(BOOL)a0;
- (void)_phraseSpotterEnabledDidChange;

@end
