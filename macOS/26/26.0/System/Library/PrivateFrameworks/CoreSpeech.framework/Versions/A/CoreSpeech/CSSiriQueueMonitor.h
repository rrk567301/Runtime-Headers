@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriQueueMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _numberOfTransactions;
    NSMutableDictionary *_observersByIdentifier;
}

+ (id)sharedMonitor;

- (id)init;
- (void)_beginMonitoring;
- (void)endMonitoring;
- (void).cxx_destruct;
- (void)beginMonitoring;
- (void)_removeQueue:(id)a0;
- (void)_addQueue:(id)a0 heartBeatInterval:(double)a1 timeoutInterval:(double)a2 timeoutHandler:(id /* block */)a3;
- (void)_endMonitoring;
- (void)addQueue:(id)a0 heartBeatInterval:(double)a1 timeoutInterval:(double)a2 timeoutHandler:(id /* block */)a3;
- (void)removeQueue:(id)a0;

@end
