@class NSString, NFTimer, NSObject;
@protocol NFSessionDelegate, NFSessionInterface, OS_dispatch_queue, NSXPCProxyCreating;

@interface NFSession : NSObject <NFSession> {
    BOOL _isFirstInQueue;
    BOOL _isCallbackQueueSuspended;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<NFSessionInterface, NSXPCProxyCreating> *_proxy;
    id /* block */ _didStartCallback;
    id /* block */ _didEndCallback;
    NFTimer *_sessionKillSwitch;
}

@property (readonly) unsigned long long state;
@property (readonly) BOOL didEnd;
@property (readonly) BOOL isActive;
@property (weak) id<NFSessionDelegate> sessionDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)proxy;
- (void)endSession;
- (void)setProxy:(id)a0;
- (id)createSessionHandoffToken:(id *)a0;
- (id)activateWithToken:(id)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)isFirstInQueue;
- (void)didEndUnexpectedly;
- (void)didStartSession:(id)a0;
- (void)handleSessionSuspended:(id)a0;
- (void)handleSessionResumed;
- (BOOL)isTimeLimited;
- (void)endSessionAndStartNextSession:(id)a0 completion:(id /* block */)a1;
- (void)setIsFirstInQueue:(BOOL)a0;
- (void)setDidStartCallback:(id /* block */)a0;
- (void)setDidEndCallback:(id /* block */)a0;
- (void)didStartSessionWithoutQueue:(id)a0;
- (void)setSessionTimeLimit:(double)a0;
- (void)_endProxySession;
- (void)_invokeDidStartCallback:(id)a0;
- (void)_invokeDidEndSession;
- (void)prioritizeSession;

@end
