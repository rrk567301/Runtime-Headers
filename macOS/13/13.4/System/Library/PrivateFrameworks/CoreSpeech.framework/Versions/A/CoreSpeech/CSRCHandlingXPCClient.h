@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CSRCHandlingXPCClient : NSObject

@property (retain, nonatomic) NSXPCConnection *rcXPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) id remoteObjectProxy;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_createClientConnection;
- (id)_getRemoteServiceProxyObject;
- (void)getMitigationDecisionForRCIdWithCompletion:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)processRCWithId:(unsigned long long)a0 duration:(double)a1 lrnnScore:(double)a2 lrnnThreshold:(double)a3 taskId:(id)a4 forceAccept:(BOOL)a5 completionHandler:(id /* block */)a6;

@end
