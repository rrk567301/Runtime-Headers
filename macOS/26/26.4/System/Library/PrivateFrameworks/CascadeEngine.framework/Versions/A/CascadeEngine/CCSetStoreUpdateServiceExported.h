@class BMProcess, NSString, NSXPCConnection, CCSetStoreAdminConnection, CCDonationServiceFactory, NSObject, CCDataResourceWriteAccess, CCDonationServiceConnection;
@protocol OS_dispatch_queue;

@interface CCSetStoreUpdateServiceExported : NSObject <CCSetStoreUpdateServiceServerProtocol> {
    BMProcess *_process;
    NSXPCConnection *_connection;
    NSString *_useCase;
    NSObject<OS_dispatch_queue> *_queue;
    CCDataResourceWriteAccess *_writeAccess;
    CCDonationServiceFactory *_donationServiceFactory;
    CCDonationServiceConnection *_donationServiceConnection;
    CCSetStoreAdminConnection *_adminConnection;
}

- (id)useCase;
- (void).cxx_destruct;
- (BOOL)_setupAdminConnection;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 cacheContents:(id)a2 reply:(id /* block */)a3;
- (void)beginSetDonationWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 sourceVersion:(id)a2 sourceValidity:(id)a3 options:(unsigned short)a4 reply:(id /* block */)a5;
- (void)cancelSetDonation:(id /* block */)a0;
- (void)endSetDonationWithOptions:(unsigned short)a0 revisionToken:(id)a1 reply:(id /* block */)a2;
- (id)initWithQueue:(id)a0 process:(id)a1 connection:(id)a2 writeAccess:(id)a3 donationServiceFactory:(id)a4;
- (oneway void)performMaintenanceOnAllSets:(id)a0 completion:(id /* block */)a1;
- (void)remoteUpdateFromDeviceUUID:(id)a0 options:(unsigned short)a1 mergeableDelta:(id)a2 peerDeviceSite:(id)a3 relayedDeviceSites:(id)a4 reply:(id /* block */)a5;
- (oneway void)removeAllSets:(id)a0 completion:(id /* block */)a1;
- (void)removeItemsMatchingPredicate:(id)a0 reply:(id /* block */)a1;
- (void)removeSourceItemIdentifier:(id)a0 reply:(id /* block */)a1;

@end
