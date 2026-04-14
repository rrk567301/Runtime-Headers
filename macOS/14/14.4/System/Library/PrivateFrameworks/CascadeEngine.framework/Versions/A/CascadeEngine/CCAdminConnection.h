@class CCDataSiteManager, NSXPCConnection;
@protocol BMAccessAssertion;

@interface CCAdminConnection : NSObject <CCAdminService> {
    NSXPCConnection *_connection;
    CCDataSiteManager *_dataSiteManager;
    id<BMAccessAssertion> _accessAssertion;
}

- (void).cxx_destruct;
- (id /* block */)_shouldDeferActivityBlock;
- (id)initWithConnection:(id)a0 dataSiteManager:(id)a1 accessAssertion:(id)a2;
- (oneway void)startMaintenanceActivity:(id /* block */)a0;
- (oneway void)startPostInstallActivity:(id /* block */)a0;

@end
