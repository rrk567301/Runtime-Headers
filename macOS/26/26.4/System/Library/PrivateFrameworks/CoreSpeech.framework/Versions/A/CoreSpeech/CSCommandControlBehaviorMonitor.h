@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSCommandControlBehaviorMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)notifyDidStartStreamWithContext:(id)a0 successfully:(BOOL)a1 option:(id)a2;
- (void)notifyWillStopStream:(id)a0;
- (void)notifyDidStopStream:(id)a0;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)registerObserver:(id)a0;
- (void)notifyWillStartStreamWithContext:(id)a0 option:(id)a1;

@end
