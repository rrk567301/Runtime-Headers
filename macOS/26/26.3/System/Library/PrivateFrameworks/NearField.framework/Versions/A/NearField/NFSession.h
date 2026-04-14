@class NSString, NFTimer, NSObject;
@protocol NFSessionDelegate, OS_voucher, NFSessionInterface, OS_dispatch_queue, NSXPCProxyCreating;

@interface NFSession : NSObject <NFSession> {
    BOOL _isFirstInQueue;
    BOOL _isCallbackQueueSuspended;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<NFSessionInterface, NSXPCProxyCreating> *_proxy;
    NFTimer *_sessionKillSwitch;
    NSObject<OS_voucher> *_voucher;
}

@property (copy, nonatomic) id /* block */ didStartCallback;
@property (copy, nonatomic) id /* block */ didEndCallback;
@property (readonly) unsigned long long state;
@property (readonly) BOOL didEnd;
@property (readonly) BOOL isActive;
@property (weak) id<NFSessionDelegate> sessionDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)proxy;
- (void)setProxy:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)endSession;
- (void)didEndUnexpectedly;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)a0;
- (id)activateWithToken:(id)a0;
- (id)createSessionHandoffToken:(id *)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)isFirstInQueue;
- (BOOL)requiresVoucher;
- (void)_endProxySession;
- (void)_internalEndSession;
- (void)_invokeDidEndSession;
- (void)_invokeDidStartCallback:(id)a0;
- (void)didStartSession:(id)a0;
- (void)didStartSessionWithoutQueue:(id)a0;
- (void)endSessionAndStartNextSession:(id)a0 completion:(id /* block */)a1;
- (void)endSessionAndWait;
- (void)handleSessionResumed;
- (void)handleSessionSuspended:(id)a0;
- (id)internalInit;
- (BOOL)isTimeLimited;
- (void)prioritizeSession;
- (void)setIsFirstInQueue:(BOOL)a0;
- (void)setSessionTimeLimit:(double)a0;

@end
