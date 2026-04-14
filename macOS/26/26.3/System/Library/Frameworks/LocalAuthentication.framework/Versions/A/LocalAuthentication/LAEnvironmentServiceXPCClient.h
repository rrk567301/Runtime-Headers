@interface LAEnvironmentServiceXPCClient : NSObject

- (void)_bootstrapServiceType:(id)a0 completion:(id /* block */)a1;
- (id)_createConnectionToDaemon;
- (void)_synchronousProxyToEnvironmentServiceWithEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)synchronousProxyToEnvironmentServiceWithCompletion:(id /* block */)a0;

@end
