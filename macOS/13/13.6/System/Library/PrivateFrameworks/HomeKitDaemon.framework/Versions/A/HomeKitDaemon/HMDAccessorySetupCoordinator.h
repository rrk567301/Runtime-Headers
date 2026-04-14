@class NSUUID, NSString, HMFActivity, NSMutableDictionary, HMFMessageDispatcher, NSObject, HMMTRAccessoryServerBrowser, HMDCHIPDataSource;
@protocol OS_dispatch_queue;

@interface HMDAccessorySetupCoordinator : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser;
@property (readonly) HMDCHIPDataSource *chipDataSource;
@property (readonly) NSMutableDictionary *stagingRequestsByUUID;
@property (retain) HMFActivity *metricsActivity;
@property (copy) id /* block */ urlStringCHIPAccessorySetupPayloadFactory;
@property (copy) id /* block */ decimalStringRepresentationCHIPAccessorySetupPayloadFactory;
@property (copy) id /* block */ payloadCHIPAccessorySetupPayloadFactory;
@property (copy) NSString *currentBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (id)logIdentifier;
- (id)_createCHIPSetupAccessoryPayloadWithSetupPayloadDecimalStringRepresentation:(id)a0 error:(id *)a1;
- (id)_setupPayloadWithCHIPSetupPayload:(id)a0 setupPayloadURL:(id)a1;
- (id)createCHIPSetupAccessoryPayloadWithSetupPayloadURL:(id)a0 error:(id *)a1;
- (id)createSetupAccessoryPayloadWithCHIPSetupPayload:(id)a0 error:(id *)a1;
- (void)handleCancelStagedCHIPAccessoryPairingMessage:(id)a0;
- (void)handleCreateCHIPSetupAccessoryPayloadMessage:(id)a0;
- (void)handleCreateCHIPSetupPayloadMessage:(id)a0;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1 chipAccessoryServerBrowser:(id)a2 chipDataSource:(id)a3;

@end
