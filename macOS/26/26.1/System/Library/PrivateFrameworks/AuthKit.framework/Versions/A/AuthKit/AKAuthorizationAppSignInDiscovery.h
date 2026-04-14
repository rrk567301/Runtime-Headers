@class AKAuthorizationDaemonConnection;

@interface AKAuthorizationAppSignInDiscovery : NSObject {
    AKAuthorizationDaemonConnection *_daemonConnection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)startDiscoveryWithCompletion:(id /* block */)a0;

@end
