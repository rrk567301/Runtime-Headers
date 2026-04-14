@class ULDarwinNotificationHelper;

@interface ULDataProtectionMonitor : ULEventMonitor

@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;
@property (nonatomic) BOOL dataAvailable;

- (void).cxx_destruct;
- (id)init;
- (void)stopMonitoring:(id)a0;
- (void)startMonitoring:(id)a0;
- (id)initWithNotificationHelper:(id)a0;
- (BOOL)isDataAvailable;
- (BOOL)_checkDataAvailable;
- (int)_checkHasContentProtection;
- (void)_handleKeyBagLockStatusChangeNotification;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
