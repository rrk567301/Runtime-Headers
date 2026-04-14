@interface AMSAuthorizeMachineProtocolHandler : AMSURLProtocolHandler

@property (copy) id /* block */ reconfigureRequestHandler;

- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
