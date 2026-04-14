@class CCDifferentialUpdater, NSXPCConnection, CCDonateRequest, CCDonateRequestManager, NSObject;
@protocol OS_dispatch_queue, BMAccessAssertion;

@interface CCDonateConnection : NSObject <CCDonateService>

@property (retain, nonatomic) CCDonateRequestManager *requestManager;
@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) CCDonateRequest *request;
@property (copy, nonatomic) id /* block */ openStreamCompletion;
@property (retain, nonatomic) CCDifferentialUpdater *updater;
@property (nonatomic) void /* function */ *attributionFunction;
@property (retain, nonatomic) id<BMAccessAssertion> accessAssertion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)timeout;
- (BOOL)isAlive;
- (void)_cleanupDonation:(long long)a0;
- (void)_cleanupRequestState;
- (BOOL)_isEntitledXPC;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 fromDevice:(id)a1 encodedDescriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 completion:(id /* block */)a5;
- (oneway void)endSetDonationWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithRequestManager:(id)a0 xpcConnection:(id)a1 accessAssertion:(id)a2;
- (BOOL)isXPC;
- (void)mergeDelta:(id)a0 withDeltaMetadata:(id)a1 completion:(id /* block */)a2;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
