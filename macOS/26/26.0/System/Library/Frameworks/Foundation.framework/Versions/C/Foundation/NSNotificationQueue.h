@class NSNotificationCenter, NSMutableArray;

@interface NSNotificationQueue : NSObject {
    NSNotificationCenter *_notificationCenter;
    NSMutableArray *_asapQueue;
    NSMutableArray *_idleQueue;
}

@property (class, readonly) NSNotificationQueue *defaultQueue;

- (void)dealloc;
- (void)enqueueNotification:(id)a0 postingStyle:(unsigned long long)a1 coalesceMask:(unsigned long long)a2 forModes:(id)a3;
- (void)_flushNotificationQueue;
- (id)init;
- (void)dequeueNotificationsMatching:(id)a0 coalesceMask:(unsigned long long)a1;
- (id)initWithNotificationCenter:(id)a0;
- (void)enqueueNotification:(id)a0 postingStyle:(unsigned long long)a1;

@end
