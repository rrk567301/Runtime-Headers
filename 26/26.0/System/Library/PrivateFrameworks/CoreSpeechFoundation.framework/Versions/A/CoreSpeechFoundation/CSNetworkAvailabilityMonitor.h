@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_notifyObserver:(id)a0 withNetworkAvailability:(BOOL)a1;
- (id)init;
- (void)_availabilityChanged;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)a0;
- (BOOL)isAvailable;
- (void)_stopMonitoring;

@end
