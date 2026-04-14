@class AMSPromise, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AMSTask : NSObject

@property (class, readonly) NSMutableSet *taskCache;
@property (class, readonly) NSObject<OS_dispatch_queue> *taskCacheAccessQueue;

@property (retain) NSObject<OS_dispatch_queue> *performTaskQueue;
@property (retain) AMSPromise *promise;
@property (retain) NSObject<OS_dispatch_queue> *promiseAccessQueue;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isRunning) BOOL running;
@property long long runMode;

- (id)init;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)performTaskWithBlock:(id /* block */)a0;
- (id)performTaskWithPromiseBlock:(id /* block */)a0;
- (id)performBinaryTaskWithBlock:(id /* block */)a0;

@end
