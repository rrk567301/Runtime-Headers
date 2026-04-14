@class NSObject;
@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (unsigned char)runWithLockAcquired:(id /* block */)a0 shouldContinueBlock:(id /* block */)a1;
- (id)unsafeGuardedData;
- (void).cxx_destruct;
- (void)runWithLockAcquired:(id /* block */)a0;
- (void)runAsyncWithLockAcquired:(id /* block */)a0;
- (id)initWithGuardedData:(id)a0 serialQueue:(id)a1;
- (id)guardedDataAssertingLockContext;

@end
