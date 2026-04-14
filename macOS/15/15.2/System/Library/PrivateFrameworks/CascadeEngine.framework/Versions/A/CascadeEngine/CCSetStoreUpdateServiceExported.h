@class CCDonateConnection, NSString, BMProcess, NSXPCConnection, NSObject, CCDonateConnectionFactory, CCDataResourceWriteAccess, CCAdminConnection;
@protocol OS_dispatch_queue;

@interface CCSetStoreUpdateServiceExported : NSObject <CCSetStoreUpdateServiceServerProtocol> {
    BMProcess *_process;
    NSXPCConnection *_connection;
    NSString *_useCase;
    NSObject<OS_dispatch_queue> *_queue;
    CCDataResourceWriteAccess *_writeAccess;
    CCDonateConnectionFactory *_donateConnectionFactory;
    CCDonateConnection *_donateConnection;
    CCAdminConnection *_adminConnection;
}

- (void).cxx_destruct;
- (id)useCase;
- (BOOL)_setupAdminService;
- (BOOL)_setupDonateConnectionWithItemType:(unsigned short)a0;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 remoteDevice:(id)a1 encodedDescriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 completion:(id /* block */)a5;
- (oneway void)endSetDonationWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 process:(id)a1 connection:(id)a2 writeAccess:(id)a3 donateConnectionFactory:(id)a4;
- (void)mergeDelta:(id)a0 completion:(id /* block */)a1;
- (oneway void)removeSetsRootDirectory:(id /* block */)a0;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)startMaintenanceActivity:(id /* block */)a0;

@end
