@interface CCSetStoreAdminXPCClient : CCXPCClient <CCSetStoreAdminServiceClient> {
    id /* block */ _shouldDeferBlock;
}

+ (void)removeAllSets:(id)a0 completion:(id /* block */)a1;
+ (void)performMaintenanceOnAllSets:(id)a0 clientId:(id)a1 shouldDeferBlock:(id /* block */)a2;
+ (id /* block */)wrappedCompletion:(id /* block */)a0 retainingClient:(id)a1;

- (void).cxx_destruct;
- (oneway void)shouldDeferCurrentActivity:(id /* block */)a0;
- (id)initWithClientId:(id)a0 shouldDeferBlock:(id /* block */)a1;

@end
