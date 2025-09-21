@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (char)isAvailable;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_availabilityChanged;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(char)a0;
- (void)_notifyObserver:(id)a0 withNetworkAvailability:(char)a1;

@end
