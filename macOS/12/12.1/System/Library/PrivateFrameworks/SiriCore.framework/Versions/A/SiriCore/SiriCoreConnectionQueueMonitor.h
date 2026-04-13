@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SiriCoreConnectionQueueMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_watcher;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_startWatcher;
- (void)_signalWatcher;
- (void)startWatcher;
- (void)signalWatcher;

@end
