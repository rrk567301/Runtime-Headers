@class ULDarwinNotificationHelper;

@interface ULBatteryModeMonitor : ULEventMonitor

@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;
@property (nonatomic) char unlimitedPower;
@property (nonatomic) char lowPowerMode;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (id)initWithNotificationHelper:(id)a0;
- (void)stopMonitoring:(id)a0;
- (void)_startMonitoringForLowPowerMode;
- (char)_checkLowPowerMode;
- (char)_checkUnlimitedPower;
- (void)_handleIOPSNotifyAdapterChangeNotification;
- (void)_handleNSProcessInfoPowerStateDidChangeNotification:(id)a0;
- (void)_startMonitoringForUnlimitedPower;
- (void)_stopMonitoringForLowPowerMode;
- (void)_stopMonitoringForUnlimitedPower;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
