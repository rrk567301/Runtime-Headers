@class ULDarwinNotificationHelper;

@interface ULBuddyMonitor : ULEventMonitor

@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;
@property (nonatomic) char buddyComplete;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (id)initWithNotificationHelper:(id)a0;
- (void)stopMonitoring:(id)a0;
- (char)_checkBuddyComplete;
- (void)_handleBuddyCompleteNotification;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
