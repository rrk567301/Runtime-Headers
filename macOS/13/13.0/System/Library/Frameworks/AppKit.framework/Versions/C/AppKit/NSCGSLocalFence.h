@class NSLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface NSCGSLocalFence : NSObject {
    NSLock *_lock;
    BOOL _armed;
    long long _pendingTransactions;
    long long _waitingTransactions;
    NSObject<OS_dispatch_semaphore> *_waitSem;
}

+ (id)fence;

- (void)dealloc;
- (id)init;
- (void)set;
- (void)_signalWaiters;
- (void)arm;

@end
