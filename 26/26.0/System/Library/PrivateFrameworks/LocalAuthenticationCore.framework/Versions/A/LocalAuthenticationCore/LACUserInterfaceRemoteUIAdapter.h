@class NSString, NSObject;
@protocol LACXPCConnection, OS_dispatch_queue, LACUserInterfaceConnectionProviding;

@interface LACUserInterfaceRemoteUIAdapter : NSObject <LACRemoteUIClientProtocol, LACXPCConnectionDelegate, LACUserInterface> {
    id<LACXPCConnection> _connection;
    id<LACUserInterfaceConnectionProviding> _connectionProvider;
    id /* block */ _handler;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_finishWithError:(id)a0;
- (void)dealloc;
- (void)connectionDidInvalidate:(id)a0;
- (void)connectionDidActivate:(id)a0;
- (void)terminateWithReason:(id)a0;
- (void).cxx_destruct;
- (void)connectionDidInterrupt:(id)a0;
- (id)initWithConnectionProvider:(id)a0 replyQueue:(id)a1;
- (void)processRequest:(id)a0 completion:(id /* block */)a1;
- (void)_activateConnectionForRequest:(id)a0;
- (void)uiDismissedForRequest:(id)a0 error:(id)a1;

@end
