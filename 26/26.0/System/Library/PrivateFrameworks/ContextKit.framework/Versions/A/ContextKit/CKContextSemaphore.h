@class NSObject;
@protocol OS_xpc_object;

@interface CKContextSemaphore : NSObject <NSSecureCoding> {
    BOOL _semaOwner;
    unsigned int _sema;
    unsigned long long _shmSize;
    struct { _Atomic unsigned int x0; _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic int x4; _Atomic int x5; _Atomic unsigned long long x6; _Atomic unsigned int x7; _Atomic unsigned int x8; } *_shm;
    NSObject<OS_xpc_object> *_shmObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (BOOL)busy;
- (void)dealloc;
- (long long)pendingExceptionsCount;
- (unsigned long long)gauge;
- (long long)waitFor:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (void)incPending;
- (void)setActiveGauge:(unsigned long long)a0;
- (void)notify;
- (unsigned long long)activeGauge;
- (void)notifyAll;
- (id)initWithCoder:(id)a0;
- (void)decPending;
- (unsigned long long)sharedMemorySize;
- (id)initSemaphoreForXPCService;
- (BOOL)tryAcquireNeedsIncPending:(BOOL)a0;
- (long long)pending;
- (unsigned long long)numAcquired;
- (void).cxx_destruct;
- (unsigned long long)requestsServed;
- (void)resetPending;

@end
