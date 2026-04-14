@class AAAccountServiceDaemonConnection;

@interface AAAccountServiceController : NSObject <AAAccountServiceInterface> {
    AAAccountServiceDaemonConnection *_daemonConnection;
}

- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updatePropertiesForAppleAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
