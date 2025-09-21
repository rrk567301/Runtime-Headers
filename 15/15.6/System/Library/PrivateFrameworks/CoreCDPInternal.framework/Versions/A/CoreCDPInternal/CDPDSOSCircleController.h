@class NSString, CDPDCircleStateObserver, NSObject;
@protocol OS_dispatch_queue, CDPDCircleProxy, CDPDCircleDelegate, CDPStateUIProviderInternal;

@interface CDPDSOSCircleController : NSObject <CDPDCircleControl> {
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
}

@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (weak, nonatomic) id<CDPDCircleDelegate> delegate;
@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)peerID;
- (unsigned long long)circleStatus;
- (char)synchronizeCircleViews;
- (void)_joinCircleIgnoringBackups:(char)a0 completion:(id /* block */)a1;
- (unsigned long long)_peerCount;
- (id)_peerDeviceNamesByPeerID;
- (void)_requestCircleJoinWithObserver:(id)a0 requestBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(id /* block */)a0;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(id /* block */)a0;
- (void)_requestToJoinWithObserver:(id)a0 completion:(id /* block */)a1;
- (void)_requestToJoinWithRequestBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)applyToJoinCircleWithJoinHandler:(id /* block */)a0;
- (void)cancelApplicationToJoinCircle;
- (int)circleSyncingStatus;
- (long long)cliqueStatus;
- (id)initWithUiProvider:(id)a0 delegate:(id)a1 circleProxy:(id)a2 octagonTrustProxy:(id)a3;
- (void)joinCircleAfterRecoveryWithCompletion:(id /* block */)a0;
- (void)joinCircleIgnoringBackups:(char)a0 completion:(id /* block */)a1;
- (void)joinCircleWithCompletion:(id /* block */)a0;
- (void)prepareCircleStateForRecovery;
- (void)resetCircleIncludingCloudKitData:(char)a0 cloudKitResetReasonDescription:(id)a1 withCompletion:(id /* block */)a2;
- (void)useCircleInfoToUpdateNameForDevices:(id)a0;

@end
