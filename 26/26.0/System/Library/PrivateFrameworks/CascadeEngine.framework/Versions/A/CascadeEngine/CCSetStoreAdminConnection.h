@class CCDataResourceWriteAccess, NSXPCConnection;

@interface CCSetStoreAdminConnection : NSObject <CCSetStoreAdminService> {
    NSXPCConnection *_connection;
    CCDataResourceWriteAccess *_writeAccess;
}

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 writeAccess:(id)a1;
- (id /* block */)_shouldDeferActivityBlock;
- (oneway void)performMaintenanceOnAllSets:(id)a0 completion:(id /* block */)a1;
- (oneway void)removeAllSets:(id)a0 completion:(id /* block */)a1;

@end
