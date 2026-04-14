@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ADNotificationDarwinNotificationMultiplexer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *callbacksByNotificationName;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)registerForNotification:(id)a0 callback:(id /* block */)a1;
- (void)unregisterNotificationToken:(id)a0;

@end
