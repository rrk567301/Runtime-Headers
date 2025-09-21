@class NSObject, CCDifferentialUpdater, NSXPCConnection, CCDonateRequest, CCDonateRequestManager, CCSet;
@protocol OS_dispatch_queue;

@interface CCDonateConnection : NSObject <CCDonateService>

@property (retain, nonatomic) CCDonateRequestManager *requestManager;
@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) CCDonateRequest *request;
@property (copy, nonatomic) id /* block */ openStreamCompletion;
@property (retain, nonatomic) CCDifferentialUpdater *updater;
@property (retain, nonatomic) CCSet *set;
@property (nonatomic) void /* function */ *attributionFunction;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL isXPC;

- (void)resume;
- (id)init;
- (void)rejectConnection;
- (void).cxx_destruct;
- (void)timeout;
- (BOOL)isAlive;
- (void)_cleanupDonation:(long long)a0;
- (void)_cleanupRequestState;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 sourceVersion:(unsigned long long)a2 sourceValidity:(id)a3 options:(unsigned short)a4 completion:(id /* block */)a5;
- (oneway void)endSetDonationWithOptions:(unsigned short)a0 revisionToken:(id)a1 completion:(id /* block */)a2;
- (id)initWithRequestManager:(id)a0 xpcConnection:(id)a1;
- (void)remoteUpdateFromDeviceUUID:(id)a0 options:(unsigned short)a1 mergeableDelta:(id)a2 peerDeviceSite:(id)a3 relayedDeviceSites:(id)a4 completion:(id /* block */)a5;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
