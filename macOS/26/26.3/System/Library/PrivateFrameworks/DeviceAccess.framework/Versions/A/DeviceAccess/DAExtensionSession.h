@class DAExtensionSessionConfiguration, DAAppContext, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DAExtensionSession : NSObject <CUXPCCodable> {
    DAAppContext *_appContext;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_xpc_object> *_xpcEndpoint;
    NSObject<OS_xpc_object> *_xpcListener;
}

@property (nonatomic) unsigned int clientID;
@property (nonatomic) BOOL direct;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint;
@property (readonly, nonatomic) DAExtensionSessionConfiguration *configuration;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)invalidate;
- (void)xpcReceivedMessage:(id)a0;
- (void)_activateXPCCompleted:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_xpcReceivedMessage:(id)a0;
- (void)_activateXPCStart:(BOOL)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)description;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_interrupted;
- (id)_ensureXPCStarted;
- (id)descriptionWithLevel:(int)a0;
- (void)activate;
- (void)_activateDirect;
- (void)_reportEvent:(id)a0;
- (void)_reportEventType:(long long)a0;
- (void)_xpcConnectionAccept:(id)a0;
- (void)_xpcListenerEvent:(id)a0;
- (void)_xpcReceivedDAExtensionEvent:(id)a0;
- (void)sendExtensionDataEvent:(id)a0 completionHandler:(id /* block */)a1;

@end
