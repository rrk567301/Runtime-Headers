@class NSLock, NSIndexPath;

@interface _CDLastInFirstOutLock : NSObject {
    NSLock *_workLock;
    NSLock *_stateLock;
    NSIndexPath *_requestStack;
    unsigned long long _nextRequestId;
}

- (id)init;
- (void)runWithLockAcquired:(id /* block */)a0;
- (void).cxx_destruct;

@end
