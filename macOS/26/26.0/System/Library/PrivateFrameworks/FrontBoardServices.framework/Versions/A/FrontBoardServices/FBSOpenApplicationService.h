@class BSServiceDispatchQueue, BSServiceConnection;

@interface FBSOpenApplicationService : NSObject {
    BSServiceDispatchQueue *_callbackQueue;
    BSServiceConnection *_connection;
}

+ (id)new;
+ (id)serviceName;
+ (id)serviceWithDefaultShellEndpoint;
+ (BOOL)currentProcessServicesDefaultShellEndpoint;
+ (id)serviceWithEndpoint:(id)a0;

- (void)dealloc;
- (id)_remoteTarget;
- (id)_initWithEndpoint:(id)a0;
- (id)init;
- (BOOL)canOpenApplication:(id)a0 reason:(long long *)a1;
- (void).cxx_destruct;
- (void)_openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;
- (void)openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;
- (void)openApplication:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;

@end
