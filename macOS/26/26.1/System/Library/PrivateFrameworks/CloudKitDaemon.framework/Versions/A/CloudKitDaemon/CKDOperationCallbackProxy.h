@class Protocol, NSString, NSXPCConnection, CKOperationCallbackProxyEndpoint;

@interface CKDOperationCallbackProxy : NSObject <CKDOperationCallbackProxy>

@property (readonly, nonatomic) CKOperationCallbackProxyEndpoint *endpoint;
@property (readonly, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addBarrierBlock:(id /* block */)a0;
- (void)invalidate;
- (void)forwardInvocation:(id)a0;
- (void)activate;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithEndpoint:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
