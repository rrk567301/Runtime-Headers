@interface LocalAuthenticationCore.LACUserDaemonClient : NSObject <LACServiceXPCEndpointProvider>

- (id)init;
- (id)endpointForServiceWithIdentifier:(id)a0 error:(id *)a1;

@end
