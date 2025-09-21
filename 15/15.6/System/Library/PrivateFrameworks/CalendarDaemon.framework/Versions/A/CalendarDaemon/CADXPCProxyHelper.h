@class CADDatabaseInitializationOptions, Protocol;
@protocol CADXPCProxyHelperDelegate, CADXPCConnection;

@interface CADXPCProxyHelper : NSObject {
    id<CADXPCConnection> _connection;
    Protocol *_protocol;
    char _synchronous;
}

@property (retain) CADDatabaseInitializationOptions *initializationOptions;
@property (weak, nonatomic) id<CADXPCProxyHelperDelegate> delegate;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0 protocol:(id)a1 synchronous:(char)a2;
- (void)_callReplyHandler:(id)a0 ofInvocation:(id)a1 withErrorCode:(long long)a2;
- (id)_replaceReplyBlockInInvocation:(id)a0 retryingAfterInitializationWithContextHolder:(id)a1;
- (char)_shouldResendInitializationOptionsForInvocation:(id)a0;
- (void)_tryInvokeWithGenerationValidation:(id)a0 target:(id)a1 replyBlock:(id)a2 contextHolder:(id)a3;
- (char)_validateCADObjectIDsInInvocationArguments:(id)a0;

@end
