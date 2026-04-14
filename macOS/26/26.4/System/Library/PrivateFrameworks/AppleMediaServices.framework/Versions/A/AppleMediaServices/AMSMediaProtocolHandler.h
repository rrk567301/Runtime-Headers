@protocol AMSMediaTokenServiceProtocol;

@interface AMSMediaProtocolHandler : AMSURLProtocolHandler

@property (readonly) id<AMSMediaTokenServiceProtocol> tokenService;

- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithTokenService:(id)a0;
- (void)handleResponse:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;

@end
