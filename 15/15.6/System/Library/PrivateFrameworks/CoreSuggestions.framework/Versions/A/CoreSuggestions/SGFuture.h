@class NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGFuture : NSObject {
    NSObject *_result;
    NSError *_error;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    char _alwaysUseCallbacksQueue;
    char _yoDontLeaveMeHangingBro;
    NSObject *_parentObject;
    void *_parentObjectKey;
}

@property (readonly, nonatomic) char isComplete;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)createAfter:(id)a0 onCreate:(id /* block */)a1;
+ (id)createWithImmediateError:(id)a0;
+ (id)createWithImmediateResult:(id)a0;
+ (id)createWithImmediateResult:(id)a0 error:(id)a1;
+ (id)futureForObject:(id)a0 withKey:(void *)a1 onCreate:(id /* block */)a2;
+ (void)waitForFuturesToComplete:(id)a0 withCallback:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)error;
- (void)setTimeout:(double)a0;
- (id)result;
- (id)wait;
- (void)wait:(id /* block */)a0;
- (id)waitWithTimeout:(double)a0;
- (void)_clearTimeoutNonThreadSafe;
- (char)_finishWithResult:(id)a0 orError:(id)a1;
- (void)_wait:(id /* block */)a0 forSyncAPI:(char)a1;
- (void)clearTimeout;
- (char)completeWithResult:(id)a0 error:(id)a1;
- (id /* block */)completer;
- (void)disassociateFromParentObject;
- (char)fail:(id)a0;
- (void)setTargetQueue:(id)a0 useAfterCompletion:(char)a1;
- (char)succeed:(id)a0;

@end
