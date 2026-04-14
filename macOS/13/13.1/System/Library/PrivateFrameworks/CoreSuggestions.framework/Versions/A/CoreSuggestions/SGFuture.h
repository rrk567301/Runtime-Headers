@class NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGFuture : NSObject {
    NSObject *_result;
    NSError *_error;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _alwaysUseCallbacksQueue;
    BOOL _yoDontLeaveMeHangingBro;
    NSObject *_parentObject;
    void *_parentObjectKey;
}

@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)futureForObject:(id)a0 withKey:(void *)a1 onCreate:(id /* block */)a2;
+ (id)createAfter:(id)a0 onCreate:(id /* block */)a1;
+ (id)createWithImmediateResult:(id)a0 error:(id)a1;
+ (id)createWithImmediateResult:(id)a0;
+ (id)createWithImmediateError:(id)a0;
+ (void)waitForFuturesToComplete:(id)a0 withCallback:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (id)error;
- (void).cxx_destruct;
- (void)setTimeout:(double)a0;
- (id)result;
- (void)wait:(id /* block */)a0;
- (id)wait;
- (id)waitWithTimeout:(double)a0;
- (void)setTargetQueue:(id)a0 useAfterCompletion:(BOOL)a1;
- (void)_wait:(id /* block */)a0 forSyncAPI:(BOOL)a1;
- (BOOL)succeed:(id)a0;
- (BOOL)fail:(id)a0;
- (BOOL)completeWithResult:(id)a0 error:(id)a1;
- (id /* block */)completer;
- (BOOL)_finishWithResult:(id)a0 orError:(id)a1;
- (void)clearTimeout;
- (void)_clearTimeoutNonThreadSafe;
- (void)disassociateFromParentObject;

@end
