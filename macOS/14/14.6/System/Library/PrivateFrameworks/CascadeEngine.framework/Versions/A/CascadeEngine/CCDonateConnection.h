@class CCDifferentialUpdater, NSXPCConnection, CCDonateRequest, CCDonateRequestManager, NSObject;
@protocol OS_dispatch_queue, BMAccessAssertion;

@interface CCDonateConnection : NSObject <CCDonateService> {
    CCDonateRequestManager *_requestManager;
    NSXPCConnection *_xpcConnection;
    CCDonateRequest *_request;
    id /* block */ _openStreamCompletion;
    CCDifferentialUpdater *_updater;
    id<BMAccessAssertion> _accessAssertion;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)interrupt;
- (BOOL)isAlive;
- (oneway void)endSetDonation:(id /* block */)a0;
- (BOOL)_isEntitledXPC;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 fromDevice:(id)a1 encodedDescriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 completion:(id /* block */)a5;
- (void)cleanupDonation:(long long)a0;
- (id)initWithRequestManager:(id)a0 xpcConnection:(id)a1 accessAssertion:(id)a2;
- (BOOL)isXPC;
- (void)mergeDelta:(id)a0 withDeltaMetadata:(id)a1 completion:(id /* block */)a2;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
