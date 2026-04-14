@class POAgentAuthenticationProcess;

@interface SOAppSSOListener : SOAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithAuthenticationProcess:(id)a0;

@end
