@interface AXFObserverManager : NSObject

@property (class, readonly) AXFObserverManager *shared;

+ (id)defaultManager;

- (char)registerApplication:(id)a0;
- (void)unregisterApplication:(id)a0;
- (char)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 element:(id)a3 application:(id)a4 queue:(id)a5;
- (void)pruneObservers;
- (char)removeAllObserversForApplication:(id)a0;
- (char)removeObserver:(id)a0 selector:(SEL)a1 name:(id)a2 element:(id)a3 application:(id)a4;

@end
