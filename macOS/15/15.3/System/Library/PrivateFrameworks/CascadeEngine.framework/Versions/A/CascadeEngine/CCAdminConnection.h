@class CCDataResourceWriteAccess, NSXPCConnection;
@protocol BMAccessAssertion;

@interface CCAdminConnection : NSObject <CCAdminService> {
    NSXPCConnection *_connection;
    CCDataResourceWriteAccess *_writeAccess;
    id<BMAccessAssertion> _accessAssertion;
}

- (void).cxx_destruct;
- (id /* block */)_shouldDeferActivityBlock;
- (id)initWithConnection:(id)a0 writeAccess:(id)a1 accessAssertion:(id)a2;
- (oneway void)removeSetsRootDirectory:(id /* block */)a0;
- (oneway void)startMaintenanceActivity:(id /* block */)a0;

@end
