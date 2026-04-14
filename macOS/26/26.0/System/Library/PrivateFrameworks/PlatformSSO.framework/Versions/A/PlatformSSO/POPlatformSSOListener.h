@class POAgentAuthenticationProcess;

@interface POPlatformSSOListener : POAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initForLogin:(BOOL)a0 authenticationProcess:(id)a1;

@end
