@class AKSymmetricKeyDaemonConnection;

@interface AKSymmetricKeyController : NSObject {
    AKSymmetricKeyDaemonConnection *_daemonConnection;
}

- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (oneway void)registerForSymmetricKeyWithContext:(id)a0 completion:(id /* block */)a1;

@end
