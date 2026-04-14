@class BSServiceDispatchQueue, BSServiceConnection;

@interface FBSOpenApplicationService : NSObject {
    BSServiceDispatchQueue *_callbackQueue;
    BSServiceConnection *_connection;
}

+ (id)serviceName;
+ (id)new;
+ (id)serviceWithDefaultShellEndpoint;
+ (BOOL)currentProcessServicesDefaultShellEndpoint;
+ (id)serviceWithEndpoint:(id)a0;

- (BOOL)canOpenApplication:(id)a0 reason:(long long *)a1;
- (id)_remoteTarget;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)a0;
- (id)init;
- (void)_openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;
- (void)openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;
- (void)openApplication:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;

@end
