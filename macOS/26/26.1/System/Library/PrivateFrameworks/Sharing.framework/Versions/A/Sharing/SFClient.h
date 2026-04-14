@class NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SFClient : NSObject <SFXPCInterface> {
    NSMutableSet *_assertions;
    BOOL _enableEnhancedDiscovery;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSXPCConnection *_syncXPCCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)_invalidate;
- (void)contactHandlesForShortHashData:(id)a0 completion:(id /* block */)a1;
- (void)contactIDForEmailHash:(id)a0 phoneHash:(id)a1 completion:(id /* block */)a2;
- (void)_ensureXPCStarted;
- (void)activateAssertionWithIdentifier:(id)a0;
- (void)activityStateWithCompletion:(id /* block */)a0;
- (void)retriggerProximityPairing:(id /* block */)a0;
- (void)displayStringForContactIdentifier:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)displayNameForEmailHash:(id)a0 phoneHash:(id)a1 completion:(id /* block */)a2;
- (void)displayStringForContactIdentifierSync:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)findContact:(id)a0 completion:(id /* block */)a1;
- (void)hashManagerControl:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)openSetupURL:(id)a0 completion:(id /* block */)a1;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)a0 completion:(id /* block */)a1;
- (void)setupDevice:(id)a0 home:(id)a1 completion:(id /* block */)a2;
- (void)getProblemFlagsWithCompletionHandler:(id /* block */)a0;
- (void)startProxCardTransactionWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)repairDevice:(id)a0 completion:(id /* block */)a1;
- (void)triggerProximityAutoFillDetectedWithURL:(id)a0 completion:(id /* block */)a1;
- (void)_invalidated;
- (void)getDeviceAssets:(id)a0 completion:(id /* block */)a1;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clearXPCHelperImageCacheWithCompletion:(id /* block */)a0;
- (void)findContact:(id)a0 skipIfContactBlocked:(BOOL)a1 completion:(id /* block */)a2;
- (void)testContinuityKeyboardBegin:(BOOL)a0;
- (void)getPeopleSuggestions:(id)a0 completion:(id /* block */)a1;
- (void)appleIDInfoWithCompletion:(id /* block */)a0;
- (void)setAudioRoutingScore:(int)a0 completion:(id /* block */)a1;
- (void)repairDevice:(id)a0 flags:(unsigned int)a1 completion:(id /* block */)a2;
- (void)showDevicePickerWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)reenableProxCardType:(unsigned char)a0 completion:(id /* block */)a1;
- (void)retriggerProximitySetup:(id /* block */)a0;
- (void)broadwayPresentCardWithCode:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_interrupted;
- (void)preventExitForLocaleReason:(id)a0;
- (id)syncRemoteProxyWithError:(id *)a0;
- (void)ensureSyncXPCStarted;
- (id)init;

@end
