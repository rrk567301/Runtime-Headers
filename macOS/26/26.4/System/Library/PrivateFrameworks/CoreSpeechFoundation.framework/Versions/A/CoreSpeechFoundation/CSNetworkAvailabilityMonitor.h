@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (BOOL)isAvailable;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withNetworkAvailability:(BOOL)a1;
- (id)init;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)a0;
- (void)_availabilityChanged;

@end
