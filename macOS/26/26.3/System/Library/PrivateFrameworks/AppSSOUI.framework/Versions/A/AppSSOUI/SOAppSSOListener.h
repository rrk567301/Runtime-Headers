@class POAgentAuthenticationProcess;

@interface SOAppSSOListener : SOAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithAuthenticationProcess:(id)a0;

@end
