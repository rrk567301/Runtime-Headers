@interface NotificationRelay : NSObject

@property (nonatomic) char refreshManagers;

+ (id)sharedRelay;

- (id)init;
- (void)refreshManagersForPreferences:(char)a0 localNotifications:(char)a1;
- (void)relayFrameworkNotification:(id)a0;

@end
