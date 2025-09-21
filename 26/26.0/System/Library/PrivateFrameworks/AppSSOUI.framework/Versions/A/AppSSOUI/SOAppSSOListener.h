@class POAgentAuthenticationProcess;

@interface SOAppSSOListener : SOAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAuthenticationProcess:(id)a0;

@end
