@class CADDatabaseInitializationOptions, Protocol;
@protocol CADXPCProxyHelperDelegate, CADXPCConnection;

@interface CADXPCProxyHelper : NSObject {
    id<CADXPCConnection> _connection;
    Protocol *_protocol;
    BOOL _synchronous;
}

@property (retain) CADDatabaseInitializationOptions *initializationOptions;
@property (weak, nonatomic) id<CADXPCProxyHelperDelegate> delegate;

- (void)forwardInvocation:(id)a0;
- (void)_tryInvokeWithGenerationValidation:(id)a0 target:(id)a1 replyBlock:(id)a2 contextHolder:(id)a3;
- (BOOL)_shouldResendInitializationOptionsForInvocation:(id)a0;
- (id)_replaceReplyBlockInInvocation:(id)a0 retryingAfterInitializationWithContextHolder:(id)a1;
- (BOOL)_validateCADObjectIDsInInvocationArguments:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)_callReplyHandler:(id)a0 ofInvocation:(id)a1 withErrorCode:(long long)a2;
- (id)initWithXPCConnection:(id)a0 protocol:(id)a1 synchronous:(BOOL)a2;
- (void).cxx_destruct;

@end
