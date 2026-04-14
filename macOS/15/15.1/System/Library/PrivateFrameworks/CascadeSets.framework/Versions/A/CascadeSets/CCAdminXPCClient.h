@class BMXPCActivity;

@interface CCAdminXPCClient : CCXPCClient <CCAdminServiceClient> {
    BMXPCActivity *_activity;
}

+ (void)removeSetsRootDirectory:(id /* block */)a0;
+ (void)triggerMaintenanceActivity:(id)a0 completion:(id /* block */)a1;
+ (id /* block */)wrappedCompletion:(id /* block */)a0 retainingClient:(id)a1;

- (void).cxx_destruct;
- (oneway void)shouldDeferCurrentActivity:(id /* block */)a0;
- (id)initWithClientId:(id)a0 activity:(id)a1;

@end
