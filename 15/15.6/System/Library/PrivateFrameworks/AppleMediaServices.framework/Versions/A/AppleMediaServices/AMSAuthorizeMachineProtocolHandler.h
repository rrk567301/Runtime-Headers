@interface AMSAuthorizeMachineProtocolHandler : AMSURLProtocolHandler

@property (copy) id /* block */ reconfigureRequestHandler;

- (void).cxx_destruct;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(char)a2 error:(id *)a3;

@end
