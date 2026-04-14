@class NSMutableDictionary;

@interface CalDistributedNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *handlers;

+ (void)_clearHandlersForObserver:(id)a0;
+ (void)removeObserver:(id)a0 name:(id)a1;
+ (void)_removeHandler:(id)a0 fromObserver:(id)a1;
+ (void)_handleNotification:(id)a0;
+ (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2;
+ (void)removeObserver:(id)a0;
+ (void)_addHandler:(id)a0 toObserver:(id)a1;
+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)init;

@end
