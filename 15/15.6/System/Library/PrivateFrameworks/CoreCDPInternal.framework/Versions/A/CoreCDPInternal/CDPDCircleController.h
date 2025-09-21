@class NSString, CDPDCircleStateObserver, NSArray, NSObject;
@protocol OS_dispatch_queue, CDPDOctagonTrustProxy, CDPDCircleProxy, CDPDCircleDelegate, CDPStateUIProviderInternal;

@interface CDPDCircleController : NSObject <CDPDCircleControl> {
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
    unsigned long long _cliqueStatusRetryCount;
    NSArray *_retryIntervals;
    NSObject<OS_dispatch_queue> *_cdpdCircleDefaultQueue;
}

@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (weak, nonatomic) id<CDPDCircleDelegate> delegate;
@property (retain, nonatomic) id<CDPDOctagonTrustProxy> octagonProxy;
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
- (void)_attemptCustodianBackupRecoveryWithInfo:(id)a0 result:(id)a1 ignoreBackups:(char)a2 completion:(id /* block */)a3;
- (void)_joinCircleFallbackWithResult:(id)a0 ignoreBackups:(char)a1 completion:(id /* block */)a2;
- (void)_joinCircleIgnoringBackups:(char)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)_peerDeviceNamesByPeerID;
- (void)_requestCircleJoinWithObserver:(id)a0 requestBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(id /* block */)a0;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(id /* block */)a0;
- (void)_requestToJoinWithObserver:(id)a0 completion:(id /* block */)a1;
- (void)_requestToJoinWithRequestBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_silentReauthWithCompletion:(id /* block */)a0;
- (void)applyToJoinCircleWithJoinHandler:(id /* block */)a0;
- (char)canRetryCliqueStatus;
- (void)cancelApplicationToJoinCircle;
- (int)circleSyncingStatus;
- (long long)cliqueStatus;
- (id)initWithUiProvider:(id)a0 delegate:(id)a1 circleProxy:(id)a2 octagonTrustProxy:(id)a3;
- (void)joinCircleIgnoringBackups:(char)a0 completion:(id /* block */)a1;
- (void)joinCircleWithCompletion:(id /* block */)a0;
- (void)joinCircleWithContext:(id)a0 completion:(id /* block */)a1;
- (long long)nextRetryInterval;
- (void)prepareCircleStateForRecovery;
- (void)promptForCredentials:(id /* block */)a0;
- (void)resetCircleIncludingCloudKitData:(char)a0 cloudKitResetReasonDescription:(id)a1 withCompletion:(id /* block */)a2;
- (void)useCircleInfoToUpdateNameForDevices:(id)a0;

@end
