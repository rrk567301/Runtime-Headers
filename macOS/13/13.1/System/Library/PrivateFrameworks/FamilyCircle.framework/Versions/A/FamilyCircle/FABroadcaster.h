@interface FABroadcaster : NSObject

+ (void)broadcastFamilyChangedNotification;
+ (void)broadcastFamilyMarqueeChangedNotification;
+ (void)broadcastServicesChangedNotification;
+ (void)broadcastRemoteUIWillDismissNotification:(id)a0;
+ (void)_broadcastNotificationName:(id)a0 userInfo:(id)a1;

@end
