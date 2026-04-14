@class NSArray, ATXInterruptingNotificationsHelper, BPSPublisher;

@interface ATXInterruptingNotificationsAccumulator : NSObject {
    ATXInterruptingNotificationsHelper *_interruptingNotifications;
    BPSPublisher *_notificationPublisher;
    BPSPublisher *_appLaunchPublisher;
}

@property (readonly, copy, nonatomic) NSArray *allInterruptingAppSessions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNotificationPublisher:(id)a0 appLaunchPublisher:(id)a1;
- (BOOL)successfullyAccumulatedInterruptingSessions;

@end
