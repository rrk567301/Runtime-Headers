@class NSString, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface STServerLaunchMonitor : NSObject <STServerLaunchObservable, BSInvalidatable> {
    int _notifyToken;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)invalidate;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;

@end
