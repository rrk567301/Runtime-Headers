@class NSMutableDictionary, NSNotificationCenter, HMDFeaturesDataSource, NSObject, HMFFuture, HMDStatusChannelPayloadManager, NSSet, NSHashTable, HMDResidentStatusChannelManager, NSString, HMDResidentStatus, HMDHome, HMFPromise, HMFTimer, HMDUnpublishedResidentStatus;
@protocol OS_dispatch_queue, HMDStatusChannelProtocolV2, HMMLogEventSubmitting, HMFTimerProvider;

@interface HMDResidentStatusChannelV2 : NSObject <HMFLogging, HMDStatusChannelDelegateV2, HMFTimerDelegate, HMDDumpState> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDResidentStatus *_currentPrimaryResident;
}

@property (readonly, nonatomic) NSMutableDictionary *residentStatusMap;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<HMFTimerProvider> timerProvider;
@property (retain) HMFTimer *debounceTimer;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMFPromise *initialConnectedToStatusKitPromise;
@property (nonatomic) BOOL receivedInitialChannelState;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic) BOOL started;
@property (readonly) HMDFeaturesDataSource *featuresDataSource;
@property (readonly, nonatomic) HMDUnpublishedResidentStatus *localResidentStatus;
@property (readonly, nonatomic) NSMutableDictionary *domainDataStatusMap;
@property (readonly, nonatomic) NSMutableDictionary *domainDataPairs;
@property (nonatomic) BOOL domainPublishAllowed;
@property (nonatomic) unsigned long long domainPublishCount;
@property (retain) HMFTimer *domainPublishRateLimitingTimer;
@property (nonatomic) BOOL domainDataCached;
@property (readonly, nonatomic) id<HMDStatusChannelProtocolV2> dedicatedChannel;
@property (retain, nonatomic) HMDStatusChannelPayloadManager *payloadManager;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (weak, nonatomic) HMDResidentStatusChannelManager *manager;
@property (readonly, nonatomic) HMDResidentStatus *currentPrimaryResident;
@property (readonly, nonatomic) NSSet *presentResidentStatuses;
@property (readonly, nonatomic) HMFFuture *initialConnectedToStatusKitFuture;
@property (readonly, nonatomic) NSSet *domainDataStatuses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)stop;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)addObserver:(id)a0;
- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (void)removeObserver:(id)a0;
- (BOOL)shouldAllowDomainPublishRequest;
- (BOOL)_isThisDomainForPresence:(id)a0;
- (id)_protobufPayloadWithStatus:(id)a0;
- (void)_publishResidentStatus:(id)a0 priority:(unsigned long long)a1 reason:(long long)a2 completion:(id /* block */)a3;
- (id)_residentStatusDomainDataFromProtobufData:(id)a0;
- (id)_residentStatusFromProtobufData:(id)a0;
- (BOOL)_shouldDebounce:(long long)a0;
- (void)_startDebounceTimer;
- (id)_startTimerWithDuration:(double)a0;
- (void)_stopDebounceTimer;
- (void)_stopPublishingAsResident;
- (void)channel:(id)a0 didObserveConnectionChange:(BOOL)a1;
- (void)channel:(id)a0 didObservePersistentPayloadUpdate:(id)a1;
- (void)channel:(id)a0 didObservePresentRecordUpdate:(id)a1;
- (void)createMetadataWithCompletion:(id /* block */)a0;
- (id)dataForDomain:(unsigned long long)a0;
- (void)didSubscribeToChannel:(id)a0;
- (void)didUpdateChannelMetadataTo:(id)a0 completion:(id /* block */)a1;
- (id)domainDataPairsPayload;
- (void)domainPublishRateLimitingTimerFired;
- (id)initWithHome:(id)a0 queue:(id)a1;
- (id)initWithHome:(id)a0 queue:(id)a1 notificationCenter:(id)a2 timerProvider:(id)a3 channel:(id)a4 logEventSubmitter:(id)a5 featuresDataSource:(id)a6;
- (id)payloadWithStatus:(id)a0;
- (void)publishDomain:(unsigned long long)a0 priority:(unsigned long long)a1 data:(id)a2 completion:(id /* block */)a3;
- (void)publishPersistentPayload:(id)a0 completion:(id /* block */)a1;
- (void)publishResidentStatus:(id)a0 priority:(unsigned long long)a1 reason:(long long)a2 completion:(id /* block */)a3;
- (void)setSubscriptionPriority:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)startWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)stopPublishingAsResident;
- (void)stopPublishingDomain:(unsigned long long)a0;

@end
