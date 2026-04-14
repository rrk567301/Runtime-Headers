@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)a0;
- (void)_availabilityChanged;
- (BOOL)isAvailable;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)_notifyObserver:(id)a0 withNetworkAvailability:(BOOL)a1;

@end
