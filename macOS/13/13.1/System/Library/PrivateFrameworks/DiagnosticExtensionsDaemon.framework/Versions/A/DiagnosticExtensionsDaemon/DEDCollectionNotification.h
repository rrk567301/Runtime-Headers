@interface DEDCollectionNotification : NSObject

+ (id)log;
+ (void)handleDistributedNotification:(id)a0;
+ (BOOL)shouldFireNotificationForTransport:(long long)a0;
+ (void)fireNotificationWithFinishingMove:(long long)a0;
+ (void)beginListeningForNotification;
+ (void)postNotificationToNotificationCenterForFinishingMove:(long long)a0;
+ (void)configureEventStream;

@end
