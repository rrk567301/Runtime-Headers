@class HMDResidentStatusChannelV2, NSMutableDictionary, HMFTimer, NSString, NSObject;
@protocol OS_dispatch_queue, HMFTimerProvider;

@interface HMDStatusChannelPayloadManager : HMFObject <HMFTimerDelegate>

@property (readonly, weak, nonatomic) HMDResidentStatusChannelV2 *statusChannel;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *domainInfo;
@property (retain, nonatomic) HMFTimer *persistentDebounceTimer;
@property (nonatomic) BOOL hasPendingPersistentPublish;
@property (readonly, nonatomic) id<HMFTimerProvider> timerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logIdentifier;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (void)_handleRateLimitResetForDomain:(unsigned long long)a0;
- (void)_collectAndPublishPersistentPayloads;
- (id)_collectPayloadsFromAllDomains;
- (void)_serializeAndPublishPayloads:(id)a0;
- (BOOL)_shouldAllowPublishForDomain:(unsigned long long)a0;
- (void)_startRateLimitResetTimerForDomain:(unsigned long long)a0;
- (void)distributeReceivedPersistentPayloads:(id)a0;
- (id)initWithStatusChannel:(id)a0 queue:(id)a1;
- (void)registerObserver:(id)a0 domain:(unsigned long long)a1;
- (void)registerPublisher:(id)a0 domain:(unsigned long long)a1;
- (void)requestPersistentPayloadPublish:(unsigned long long)a0;
- (void)unregisterPublisherForDomain:(unsigned long long)a0;

@end
