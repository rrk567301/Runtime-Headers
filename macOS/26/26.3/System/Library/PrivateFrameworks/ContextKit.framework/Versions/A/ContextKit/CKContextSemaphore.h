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
- (unsigned long long)requestsServed;
- (BOOL)busy;
- (unsigned long long)activeGauge;
- (unsigned long long)gauge;
- (void)notify;
- (void)setActiveGauge:(unsigned long long)a0;
- (unsigned long long)numAcquired;
- (void)incPending;
- (BOOL)tryAcquireNeedsIncPending:(BOOL)a0;
- (long long)pending;
- (void).cxx_destruct;
- (long long)waitFor:(double)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initSemaphoreForXPCService;
- (void)notifyAll;
- (void)resetPending;
- (void)encodeWithCoder:(id)a0;
- (void)decPending;
- (long long)pendingExceptionsCount;

@end
