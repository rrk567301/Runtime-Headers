@class NSMutableArray;

@interface WDSessionNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *handlers;

- (void).cxx_destruct;
- (id)init;
- (void)dispatchNotification:(unsigned long long)a0 payload:(id)a1;
- (unsigned long long)registerForNotification:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)unregisterHandler:(unsigned long long)a0;

@end
