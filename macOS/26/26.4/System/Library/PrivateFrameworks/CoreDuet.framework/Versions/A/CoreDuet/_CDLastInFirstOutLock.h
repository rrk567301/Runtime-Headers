@class NSLock, NSIndexPath;

@interface _CDLastInFirstOutLock : NSObject {
    NSLock *_workLock;
    NSLock *_stateLock;
    NSIndexPath *_requestStack;
    unsigned long long _nextRequestId;
}

- (void).cxx_destruct;
- (id)init;
- (void)runWithLockAcquired:(id /* block */)a0;

@end
