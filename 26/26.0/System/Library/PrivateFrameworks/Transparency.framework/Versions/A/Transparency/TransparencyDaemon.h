@class NSString;

@interface TransparencyDaemon : NSObject <TransparencyIDMSDeviceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configurationBagFetch:(id /* block */)a0;
- (id)hardResetRepair;
- (void)changeOptInState:(unsigned long long)a0 application:(id)a1 complete:(id /* block */)a2;
- (void)clearEligibilityOverrides:(id /* block */)a0;
- (void)clearOptInStateForURI:(id)a0 application:(id)a1 complete:(id /* block */)a2;
- (void)clearPeerState:(id)a0 uris:(id)a1 block:(id /* block */)a2;
- (void)clearTapToRadarNotification:(id)a0 complete:(id /* block */)a1;
- (void)getAggregateResult:(long long)a0 element:(id)a1 complete:(id /* block */)a2;
- (void)getAllOptInStates:(id /* block */)a0;
- (void)getOptInForURI:(id)a0 application:(id)a1 complete:(id /* block */)a2;
- (void)getOptInState:(id)a0 complete:(id /* block */)a1;
- (void)getOptInStateForApplication:(id)a0 complete:(id /* block */)a1;
- (void)insertResultForElement:(id)a0 samplesAgo:(id)a1 success:(BOOL)a2 complete:(id /* block */)a3;
- (void)ktRepair:(id)a0 complete:(id /* block */)a1;
- (void)maybeUpdateMonitorState;
- (void)networkKTQuery:(id)a0 application:(id)a1 complete:(id /* block */)a2;
- (void)networkKTQuery:(id)a0 application:(id)a1 trace:(id)a2 timeout:(double)a3 complete:(id /* block */)a4;
- (void)networkKTQuery:(id)a0 application:(id)a1 traceUUID:(id)a2 timeout:(double)a3 complete:(id /* block */)a4;
- (void)performAndWaitForSelfValidate:(id /* block */)a0;
- (void)replaySelfValidate:(id)a0 application:(id)a1 pcsAccountKey:(id)a2 queryRequest:(id)a3 queryResponse:(id)a4 responseTime:(id)a5 completionHandler:(id /* block */)a6;
- (void)reportEligibility:(id)a0 complete:(id /* block */)a1;
- (void)setOSVersion:(id)a0 complete:(id /* block */)a1;
- (void)setOptInForURI:(id)a0 application:(id)a1 state:(BOOL)a2 smtTimestamp:(id)a3 complete:(id /* block */)a4;
- (void)setOverrideTimeBetweenReports:(double)a0 completion:(id /* block */)a1;
- (void)successInfoForElement:(id)a0 samples:(long long)a1 completion:(id /* block */)a2;
- (id)transparencyCheckIDSHealth:(id *)a0;
- (void)transparencyCheckKTAccountKey:(id)a0 complete:(id /* block */)a1;
- (void)transparencyClearKTRegistrationData:(id /* block */)a0;
- (void)transparencyCloudDeviceAdd:(id)a0 clientData:(id)a1 complete:(id /* block */)a2;
- (void)transparencyCloudDeviceRemove:(id)a0 clientData:(id)a1 complete:(id /* block */)a2;
- (void)transparencyCloudDevices:(id /* block */)a0;
- (void)transparencyDumpKTRegistrationData:(id /* block */)a0;
- (void)transparencyFetchIDMS:(id /* block */)a0;
- (void)transparencyFetchPublicKeys:(id /* block */)a0;
- (void)transparencyFetchSelf:(id /* block */)a0;
- (void)transparencyGetKTSignatures:(id)a0 complete:(id /* block */)a1;
- (id)transparencyIDMSDeviceList:(id *)a0;
- (void)transparencyIDSRegistration:(id /* block */)a0;
- (void)transparencyIDSRepair:(id /* block */)a0;
- (void)transparencyPerformRegistrationSignature:(id /* block */)a0;
- (void)transparencySysDiagnose:(id /* block */)a0;
- (id)transparencySysDiagnoseData:(id *)a0;
- (void)transparencyTriggerIDSRegistration:(id /* block */)a0;
- (void)transparencyTriggerOperation:(id)a0 complete:(id /* block */)a1;
- (void)transparencyTriggerTTR:(id)a0 handle:(id)a1 complete:(id /* block */)a2;
- (void)transparencyValidateSelf:(id /* block */)a0;
- (void)triggerReportAndMaybeOptInWithCompletion:(id /* block */)a0;
- (void)updateIDSRecommendation:(BOOL)a0 complete:(id /* block */)a1;
- (void)validateIDSData:(id)a0 ktQueryData:(id)a1 ktResponseData:(id)a2 complete:(id /* block */)a3;
- (void)validateSelfForThisDeviceForApplication:(id)a0 pushToken:(id)a1 complete:(id /* block */)a2;

@end
