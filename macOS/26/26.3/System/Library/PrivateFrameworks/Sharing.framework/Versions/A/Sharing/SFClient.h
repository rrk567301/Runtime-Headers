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

- (void)invalidate;
- (void)repairDevice:(id)a0 flags:(unsigned int)a1 completion:(id /* block */)a2;
- (void)getPeopleSuggestions:(id)a0 completion:(id /* block */)a1;
- (void)broadwayPresentCardWithCode:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)displayStringForContactIdentifierSync:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)findContact:(id)a0 skipIfContactBlocked:(BOOL)a1 completion:(id /* block */)a2;
- (void)contactHandlesForShortHashData:(id)a0 completion:(id /* block */)a1;
- (void)setupDevice:(id)a0 home:(id)a1 completion:(id /* block */)a2;
- (void)ensureSyncXPCStarted;
- (void)reenableProxCardType:(unsigned char)a0 completion:(id /* block */)a1;
- (void)triggerProximityAutoFillDetectedWithURL:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)preventExitForLocaleReason:(id)a0;
- (void)_invalidated;
- (void)activityStateWithCompletion:(id /* block */)a0;
- (void)findContact:(id)a0 completion:(id /* block */)a1;
- (void)retriggerProximityPairing:(id /* block */)a0;
- (void)getDeviceAssets:(id)a0 completion:(id /* block */)a1;
- (void)setAudioRoutingScore:(int)a0 completion:(id /* block */)a1;
- (void)showDevicePickerWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)contactIDForEmailHash:(id)a0 phoneHash:(id)a1 completion:(id /* block */)a2;
- (void)getProblemFlagsWithCompletionHandler:(id /* block */)a0;
- (void)activateAssertionWithIdentifier:(id)a0;
- (void)displayStringForContactIdentifier:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)repairDevice:(id)a0 completion:(id /* block */)a1;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)hashManagerControl:(id)a0 completion:(id /* block */)a1;
- (void)clearXPCHelperImageCacheWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_interrupted;
- (void)testContinuityKeyboardBegin:(BOOL)a0;
- (void)openSetupURL:(id)a0 completion:(id /* block */)a1;
- (void)_ensureXPCStarted;
- (void)retriggerProximitySetup:(id /* block */)a0;
- (void)startProxCardTransactionWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)displayNameForEmailHash:(id)a0 phoneHash:(id)a1 completion:(id /* block */)a2;
- (void)appleIDInfoWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(id /* block */)a0;
- (id)syncRemoteProxyWithError:(id *)a0;

@end
