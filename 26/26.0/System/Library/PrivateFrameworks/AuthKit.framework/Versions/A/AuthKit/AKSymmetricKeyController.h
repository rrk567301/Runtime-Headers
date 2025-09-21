@class AKSymmetricKeyDaemonConnection;

@interface AKSymmetricKeyController : NSObject {
    AKSymmetricKeyDaemonConnection *_daemonConnection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (oneway void)registerForSymmetricKeyWithContext:(id)a0 completion:(id /* block */)a1;

@end
