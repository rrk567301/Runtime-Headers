@class NSDistributedNotificationCenter;

@interface CDPBroadcaster : NSObject

@property (readonly, nonatomic) NSDistributedNotificationCenter *broadcaster;

+ (void)_broadcastNotificationName:(id)a0 userInfo:(id)a1;
+ (void)broadcastWalrusStateChangeNotification;
+ (void)broadcastWebAccessStateChangeNotification;

- (void).cxx_destruct;
- (id)init;
- (void)sendNotification:(id)a0 userInfo:(id)a1;

@end
