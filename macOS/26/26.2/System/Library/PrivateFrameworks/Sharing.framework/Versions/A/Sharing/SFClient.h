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

- (void)setupDevice:(id)a0 home:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (void)broadwayPresentCardWithCode:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_interrupted;
- (void)_invalidated;
- (void)setAudioRoutingScore:(int)a0 completion:(id /* block */)a1;
- (void)_ensureXPCStarted;
- (void)triggerProximityAutoFillDetectedWithURL:(id)a0 completion:(id /* block */)a1;
- (void)getProblemFlagsWithCompletionHandler:(id /* block */)a0;
- (void)findContact:(id)a0 completion:(id /* block */)a1;
- (void)activityStateWithCompletion:(id /* block */)a0;
- (void)retriggerProximityPairing:(id /* block */)a0;
- (void)displayStringForContactIdentifierSync:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)showDevicePickerWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)hashManagerControl:(id)a0 completion:(id /* block */)a1;
- (void)startProxCardTransactionWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)a0 completion:(id /* block */)a1;
- (void)contactHandlesForShortHashData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)openSetupURL:(id)a0 completion:(id /* block */)a1;
- (void)retriggerProximitySetup:(id /* block */)a0;
- (void)displayNameForEmailHash:(id)a0 phoneHash:(id)a1 completion:(id /* block */)a2;
- (void)repairDevice:(id)a0 completion:(id /* block */)a1;
- (void)findContact:(id)a0 skipIfContactBlocked:(BOOL)a1 completion:(id /* block */)a2;
- (void)ensureSyncXPCStarted;
- (void)activateAssertionWithIdentifier:(id)a0;
- (void)reenableProxCardType:(unsigned char)a0 completion:(id /* block */)a1;
- (void)contactIDForEmailHash:(id)a0 phoneHash:(id)a1 completion:(id /* block */)a2;
- (void)getDeviceAssets:(id)a0 completion:(id /* block */)a1;
- (void)displayStringForContactIdentifier:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)repairDevice:(id)a0 flags:(unsigned int)a1 completion:(id /* block */)a2;
- (void)testContinuityKeyboardBegin:(BOOL)a0;
- (id)syncRemoteProxyWithError:(id *)a0;
- (void)preventExitForLocaleReason:(id)a0;
- (id)init;
- (void)appleIDInfoWithCompletion:(id /* block */)a0;
- (void)clearXPCHelperImageCacheWithCompletion:(id /* block */)a0;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void)getPeopleSuggestions:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end
