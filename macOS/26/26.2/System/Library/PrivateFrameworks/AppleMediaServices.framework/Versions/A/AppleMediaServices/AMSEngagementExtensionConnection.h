@interface AMSEngagementExtensionConnection : NSObject <_EXMainConnectionHandler>

@property (readonly) id principalObject;

- (id)initWithPrincipalObject:(id)a0;
- (void).cxx_destruct;
- (void)performRequestWithObject:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldAcceptXPCConnection:(id)a0;

@end
