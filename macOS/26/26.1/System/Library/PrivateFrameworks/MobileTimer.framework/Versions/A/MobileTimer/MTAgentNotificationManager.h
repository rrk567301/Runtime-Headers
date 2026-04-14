@class NSMutableArray;
@protocol NAScheduler;

@interface MTAgentNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *listeners;
@property (retain, nonatomic) id<NAScheduler> serializer;

+ (double)defaultAssertionTimeOutForNotification:(id)a0 type:(long long)a1;
+ (double)_schedulingAssertionTimeout;

- (void)beginListening;
- (void)_registerForLiveDarwinNotification:(id)a0;
- (void)_registerForAlarmNotifications;
- (void)_registerForDarwinNotifications;
- (void)dealloc;
- (void)registerListener:(id)a0;
- (void)_registerForDistributedNotifications;
- (void).cxx_destruct;
- (void)_handleNotificationWithName:(id)a0 type:(long long)a1;
- (void)_registerForXPCStream:(id)a0 notificationType:(long long)a1;
- (id)init;

@end
