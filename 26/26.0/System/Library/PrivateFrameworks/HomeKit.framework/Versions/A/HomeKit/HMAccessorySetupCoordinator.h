@class NSUUID, NSString, _HMContext, NSObject;
@protocol OS_dispatch_queue, HMAccessorySetupCoordinatorDelegate;

@interface HMAccessorySetupCoordinator : NSObject <HMFLogging, HMFMessageReceiver> {
    _HMContext *_context;
    id /* block */ _multiStepStageCompletionHandler;
    id<HMAccessorySetupCoordinatorDelegate> _multiStepStageDelegate;
}

@property (class, readonly, copy) NSUUID *UUID;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)communicationProtocolForSetupPayloadURLString:(id)a0;
+ (BOOL)isCHIPSetupPayloadURL:(id)a0;
+ (BOOL)isHAPSetupPayloadURL:(id)a0;
+ (BOOL)isSetupPayloadURL:(id)a0;
+ (BOOL)isSetupPayloadURLString:(id)a0;
+ (id)setupPayloadURLFromSetupPayloadURLString:(id)a0;

- (void)configure;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)createSetupAccessoryPayloadWithCHIPSetupCode:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelStagedCHIPAccessoryPairingWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelStagingForStagingRequestUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)confirmDeviceCredentialForStagingRequestUUID:(id)a0;
- (void)createCHIPSetupPayloadStringForStagedPairingWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)createSetupAccessoryPayloadWithCHIPDecimalStringRepresentation:(id)a0 completionHandler:(id /* block */)a1;
- (void)createSetupAccessoryPayloadWithSetupPayloadURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)createSetupAccessoryPayloadWithSetupPayloadURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleCommissioneeInfoMessage:(id)a0;
- (void)handleUpdateStagingProgressMessage:(id)a0;
- (void)rejectDeviceCredentialForStagingRequestUUID:(id)a0;
- (void)selectThreadNetworkAssociation:(id)a0 forStagingRequestUUID:(id)a1;
- (void)selectWiFiNetworkAssociation:(id)a0 forStagingRequestUUID:(id)a1;
- (void)stageCHIPAccessoryPairingInStepsWithPayload:(id)a0 delegate:(id)a1 scanningNetworks:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
