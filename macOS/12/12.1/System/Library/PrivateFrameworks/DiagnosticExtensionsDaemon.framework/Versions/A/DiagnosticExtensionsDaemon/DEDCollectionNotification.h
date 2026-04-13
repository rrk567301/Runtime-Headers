@interface DEDCollectionNotification : NSObject

+ (id)log;
+ (BOOL)shouldFireNotificationForTransport:(long long)a0;
+ (void)fireNotificationWithFinishingMove:(long long)a0;
+ (void)beginListeningForNotification;
+ (void)handleDistributedNotification:(id)a0;
+ (void)configureEventStream;
+ (void)postNotificationToNotificationCenterForFinishingMove:(long long)a0;

@end
