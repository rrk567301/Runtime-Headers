@class NSObject;
@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (void)runWithLockAcquired:(id /* block */)a0;
- (id)guardedDataAssertingLockContext;
- (void)runAsyncWithLockAcquired:(id /* block */)a0;
- (id)unsafeGuardedData;
- (void).cxx_destruct;
- (id)initWithGuardedData:(id)a0 serialQueue:(id)a1;
- (unsigned char)runWithLockAcquired:(id /* block */)a0 shouldContinueBlock:(id /* block */)a1;

@end
