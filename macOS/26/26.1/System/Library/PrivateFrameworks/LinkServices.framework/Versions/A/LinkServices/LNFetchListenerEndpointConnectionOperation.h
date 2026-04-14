@class NSString, LNAction;

@interface LNFetchListenerEndpointConnectionOperation : LNInterfaceConnectionOperation

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) LNAction *action;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)finishWithXPCListenerEndpoint:(id)a0 auditTokenData:(id)a1 resolvedAction:(id)a2 error:(id)a3;
- (id)initWithConnectionInterface:(id)a0 queue:(id)a1 bundleIdentifier:(id)a2 action:(id)a3 completionHandler:(id /* block */)a4;

@end
