@class POAgentAuthenticationProcess;

@interface POPlatformSSOUIManagerListener : POAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithAuthenticationProcess:(id)a0;

@end
