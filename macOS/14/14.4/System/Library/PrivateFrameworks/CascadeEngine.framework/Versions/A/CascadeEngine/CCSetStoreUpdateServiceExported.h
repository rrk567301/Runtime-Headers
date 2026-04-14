@class CCDonateConnection, NSString, BMProcess, NSXPCConnection, CCDataSiteManager, NSObject, CCDonateConnectionFactory, CCAdminConnection;
@protocol OS_dispatch_queue;

@interface CCSetStoreUpdateServiceExported : NSObject <CCSetStoreUpdateServiceServerProtocol> {
    BMProcess *_process;
    NSXPCConnection *_connection;
    NSString *_useCase;
    NSObject<OS_dispatch_queue> *_queue;
    CCDataSiteManager *_dataSiteManager;
    CCDonateConnectionFactory *_donateConnectionFactory;
    CCDonateConnection *_donateConnection;
    CCAdminConnection *_adminService;
}

- (void).cxx_destruct;
- (void)configureConnectionForUseCase:(id)a0 reply:(id /* block */)a1;
- (oneway void)endSetDonation:(id /* block */)a0;
- (BOOL)_setupAdminService;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 fromDevice:(id)a1 encodedDescriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 completion:(id /* block */)a5;
- (id)initWithQueue:(id)a0 process:(id)a1 connection:(id)a2 dataSiteManager:(id)a3 donateConnectionFactory:(id)a4;
- (void)mergeDelta:(id)a0 withDeltaMetadata:(id)a1 completion:(id /* block */)a2;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)setupDonateConnectionForSetWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1;
- (oneway void)startMaintenanceActivity:(id /* block */)a0;
- (oneway void)startPostInstallActivity:(id /* block */)a0;

@end
