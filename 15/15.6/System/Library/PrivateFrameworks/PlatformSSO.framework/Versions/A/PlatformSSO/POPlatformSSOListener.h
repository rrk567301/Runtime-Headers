@class POAgentAuthenticationProcess;

@interface POPlatformSSOListener : POAgentListener

@property (retain) POAgentAuthenticationProcess *process;

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initForLogin:(char)a0 authenticationProcess:(id)a1;

@end
