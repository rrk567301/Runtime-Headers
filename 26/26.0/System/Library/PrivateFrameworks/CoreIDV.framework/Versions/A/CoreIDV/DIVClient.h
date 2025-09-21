@class NSString, DIVerificationSessionContext, NSXPCConnection;

@interface DIVClient : NSObject <DIVerificationClientSideProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_serverConnection;
    DIVerificationSessionContext *_context;
    BOOL _isDisconnected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)setContext:(id)a0;
- (void)invalidate;
- (id)serverConnection;
- (id)init;
- (BOOL)isDisconnected;
- (id)context;
- (void).cxx_destruct;
- (void)setIsDisconnected:(BOOL)a0;
- (id)createDaemonDisconnectedError;
- (void)concludeVerification:(id)a0;
- (void)configure:(id)a0 completion:(id /* block */)a1;
- (void)confirmVerificationCompletedWithFeedback:(id)a0;
- (void)getVerificationResultWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)performVerificationWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)shareVerificationResultWithOptions:(id)a0 completion:(id /* block */)a1;

@end
