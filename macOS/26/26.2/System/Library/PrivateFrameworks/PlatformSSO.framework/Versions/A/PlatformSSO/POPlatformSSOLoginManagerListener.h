@class POAgentAuthenticationProcess;

@interface POPlatformSSOLoginManagerListener : POAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithAuthenticationProcess:(id)a0;

@end
