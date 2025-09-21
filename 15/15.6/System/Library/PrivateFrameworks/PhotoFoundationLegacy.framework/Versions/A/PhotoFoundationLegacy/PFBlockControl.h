@class NSString, NSObject, PFDispatchQueue;
@protocol OS_dispatch_group;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution> {
    PFDispatchQueue *_queue;
    id /* block */ _block;
    NSObject<OS_dispatch_group> *_workGroup;
    _Atomic unsigned long long _status;
}

@property char executeOnDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (char)enqueue;
- (id)initWithBlock:(id /* block */)a0;
- (char)cancelBlock;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)invoke:(unsigned long long)a0;
- (char)dequeue;
- (char)executeBlock;
- (void)_execute;
- (char)blockHasStarted;
- (unsigned long long)_shouldEnqueue;
- (char)blockHasFinished;
- (char)blockWasCanceled;
- (char)enqueueWithDelay:(unsigned long long)a0;
- (char)groupNotify:(id)a0;
- (void)notifyOnQueue:(id)a0 whenFinished:(id /* block */)a1;
- (char)tryCancelBlock;
- (void)waitForBlock;

@end
