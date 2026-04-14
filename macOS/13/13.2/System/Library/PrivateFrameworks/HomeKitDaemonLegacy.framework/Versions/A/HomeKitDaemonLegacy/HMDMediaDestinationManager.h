@class HMDMediaDestinationBackingStoreHandler, NSString, NSUUID, HMDMediaDestinationManagerMetricsDispatcher, HMDMediaDestinationMessageHandler, NSObject, HMFStagedValue, HMMediaDestination;
@protocol HMDMediaDestinationManagerDelegate, OS_os_log, HMDMediaDestinationManagerDataSource;

@interface HMDMediaDestinationManager : HMFObject <HMDMediaDestinationBackingStoreHandlerDelegate, HMFLogging, HMFStagedValueDelegate, HMDMediaDestinationManager, HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate> {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMDMediaDestinationManagerDataSource> dataSource;
@property (weak) id<HMDMediaDestinationManagerDelegate> delegate;
@property (readonly, getter=isTargetDevice) BOOL targetDevice;
@property (readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher;
@property (readonly) HMFStagedValue *stagedAudioGroupIdentifier;
@property (readonly) HMDMediaDestinationBackingStoreHandler *backingStoreHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *identifier;
@property (readonly) HMMediaDestination *destination;
@property (readonly) HMMediaDestination *committedDestination;
@property (readonly) HMDMediaDestinationMessageHandler *messageHandler;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)privateDescription;
- (id)logIdentifier;
- (void)stagedValue:(id)a0 didExpireValue:(id)a1;
- (id)attributeDescriptions;
- (void)mediaDestinationMessageHandler:(id)a0 didReceiveUpdateSupportedOptionsRequestMessage:(id)a1 supportOptions:(unsigned long long)a2;
- (void)mediaDestinationMessageHandler:(id)a0 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)a1 audioGroupIdentifier:(id)a2;
- (id)messageHandler:(id)a0 shouldRelayIncomingMessage:(id)a1;
- (id)messageHandler:(id)a0 deviceForOutgoingMessage:(id)a1;
- (void)stageAudioGroupIdentifier:(id)a0;
- (void)requestToUpdateAudioGroupIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)mergeDestination:(id)a0;
- (id)dataSourceTargetAccessory;
- (id)dataSourceDestinationControllerWithIdentifier:(id)a0;
- (void)migrateWithHome:(id)a0 cloudZone:(id)a1 migrationQueue:(id)a2 completion:(id /* block */)a3;
- (id)updateSupportedOptions:(unsigned long long)a0;
- (id)updateAudioGroupIdentifier:(id)a0;
- (void)mediaDestinationBackingStoreHandler:(id)a0 didUpdateDestination:(id)a1;
- (id)initWithDestination:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 backingStore:(id)a3 targetDevice:(BOOL)a4 dataSource:(id)a5 delegate:(id)a6;
- (id)initWithDestination:(id)a0 messageHandler:(id)a1 backingStoreHandler:(id)a2 metricsDispatcher:(id)a3 targetDevice:(BOOL)a4 dataSource:(id)a5 delegate:(id)a6;
- (void)configureWithHome:(id)a0 currentAccessory:(BOOL)a1;
- (id)mediaGroupParticipantLocalDataStorage;
- (id)dataSourceRootDestinationManager;
- (id)_updateSupportedOptions:(unsigned long long)a0;
- (id)legacyUpdateSupportedOptions:(unsigned long long)a0;
- (id)_updateAudioGroupIdentifier:(id)a0;
- (id)legacyUpdateAudioGroupIdentifier:(id)a0;
- (void)notifyDelegateDidUpdateStagedValues;
- (void)triggerStageValueDidExpireValueForAudioDestinationIdentifier;

@end
