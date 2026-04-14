@class NSString, NSDistributedNotificationCenter;
@protocol VSRemoteNotifierDelegate;

@interface VSRemoteNotifier : NSObject

@property (copy, nonatomic) NSString *notificationObject;
@property (retain, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (readonly, copy, nonatomic) NSString *remoteNotificationName;
@property (weak, nonatomic) id<VSRemoteNotifierDelegate> delegate;

+ (id)_currentProcessIdentifier;

- (void)postNotification;
- (void)dealloc;
- (void)_didReceiveDistributedNotification:(id)a0;
- (id)init;
- (void)postNotificationWithUserInfo:(id)a0;
- (id)initWithNotificationName:(id)a0;
- (void).cxx_destruct;

@end
