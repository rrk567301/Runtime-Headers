@class NSString, NSObject;
@protocol OS_dispatch_queue, SESSessionInterface, NSXPCProxyCreating;

@interface SESSession : NSObject <SESSessionCallbackInterface, SESSession> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isQueueSuspended;
    id /* block */ _didStartCallback;
    id /* block */ _didEndCallback;
    NSObject<SESSessionInterface, NSXPCProxyCreating> *_proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long state;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)proxy;
- (void)resume;
- (id)init;
- (void)setProxy:(id)a0;
- (id)queue;
- (void)endSession;
- (void).cxx_destruct;
- (void)didStartSession:(id)a0;
- (void)setDidEndCallback:(id /* block */)a0;
- (void)setDidStartCallback:(id /* block */)a0;
- (void)didEndUnexpectedly:(id)a0;
- (id)endRemoteSession;
- (void)endSessionWithError:(id)a0;

@end
