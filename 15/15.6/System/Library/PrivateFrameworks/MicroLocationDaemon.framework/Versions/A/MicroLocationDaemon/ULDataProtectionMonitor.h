@class ULDarwinNotificationHelper;

@interface ULDataProtectionMonitor : ULEventMonitor

@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;
@property (nonatomic) char dataAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (id)initWithNotificationHelper:(id)a0;
- (void)stopMonitoring:(id)a0;
- (char)isDataAvailable;
- (char)_checkDataAvailable;
- (int)_checkHasContentProtection;
- (void)_handleKeyBagLockStatusChangeNotification;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
