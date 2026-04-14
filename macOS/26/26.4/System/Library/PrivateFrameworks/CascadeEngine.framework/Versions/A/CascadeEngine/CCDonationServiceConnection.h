@class CCDifferentialSetUpdater, NSObject, NSXPCConnection, CCDataResourceWriteAccess, CCDifferentialSetUpdaterFactory, NSError;
@protocol OS_dispatch_queue;

@interface CCDonationServiceConnection : NSObject <CCDonationService> {
    NSXPCConnection *_xpcConnection;
    CCDifferentialSetUpdaterFactory *_updaterFactory;
    CCDataResourceWriteAccess *_writeAccess;
    CCDifferentialSetUpdater *_setUpdater;
    CCDifferentialSetUpdater *_cacheUpdater;
    double _timeoutCheckInterval;
    unsigned long long _timeoutCheckProgress;
    NSError *_cancelationError;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)description;
- (void)_cancelDonation:(id /* block */)a0 operation:(id)a1 forError:(id)a2;
- (void)_cancelRequestedDonation:(id /* block */)a0 forError:(id)a1;
- (BOOL)_performOperation:(id)a0 onUpdater:(id)a1 withBlock:(id /* block */)a2 error:(id *)a3;
- (void)_performOperation:(id)a0 reply:(id /* block */)a1 withBlock:(id /* block */)a2;
- (id)_requestUpdateForSetWithIdentifier:(id)a0 descriptors:(id)a1 sourceVersion:(id)a2 sourceValidity:(id)a3 options:(unsigned short)a4 error:(id *)a5;
- (id)_serviceError:(id)a0 operation:(id)a1;
- (void)_setDonationProgressTimerWithOperationCount:(unsigned int)a0 timeElapsed:(double)a1;
- (void)_startDonationProgressTimer;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 cacheContents:(id)a2 reply:(id /* block */)a3;
- (void)beginSetDonationWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 sourceVersion:(id)a2 sourceValidity:(id)a3 options:(unsigned short)a4 reply:(id /* block */)a5;
- (void)cancelSetDonation:(id /* block */)a0;
- (void)endSetDonationWithOptions:(unsigned short)a0 revisionToken:(id)a1 reply:(id /* block */)a2;
- (id)initWithXPCConnection:(id)a0 updaterFactory:(id)a1 writeAccess:(id)a2 timeoutCheckInterval:(double)a3 timeoutCheckProgress:(unsigned long long)a4 queue:(id)a5;
- (void)remoteUpdateFromDeviceUUID:(id)a0 options:(unsigned short)a1 mergeableDelta:(id)a2 peerDeviceSite:(id)a3 relayedDeviceSites:(id)a4 reply:(id /* block */)a5;
- (void)removeItemsMatchingPredicate:(id)a0 reply:(id /* block */)a1;
- (void)removeSourceItemIdentifier:(id)a0 reply:(id /* block */)a1;

@end
