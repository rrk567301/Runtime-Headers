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

- (unsigned long long)sharedMemorySize;
- (BOOL)busy;
- (void)incPending;
- (unsigned long long)gauge;
- (BOOL)tryAcquireNeedsIncPending:(BOOL)a0;
- (unsigned long long)activeGauge;
- (void)notify;
- (void)notifyAll;
- (long long)waitFor:(double)a0;
- (void)resetPending;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)requestsServed;
- (void)decPending;
- (void)dealloc;
- (long long)pendingExceptionsCount;
- (id)initSemaphoreForXPCService;
- (id)initWithCoder:(id)a0;
- (long long)pending;
- (void).cxx_destruct;
- (unsigned long long)numAcquired;
- (void)setActiveGauge:(unsigned long long)a0;

@end
