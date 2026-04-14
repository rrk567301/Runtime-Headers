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

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)timeout;
- (BOOL)isAlive;
- (void)_cleanupDonation:(long long)a0;
- (void)_cleanupRequestState;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 remoteDevice:(id)a1 encodedDescriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 completion:(id /* block */)a5;
- (oneway void)endSetDonationWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithRequestManager:(id)a0 xpcConnection:(id)a1;
- (BOOL)isXPC;
- (void)mergeDelta:(id)a0 completion:(id /* block */)a1;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
