@class NSUUID, NSString, HMDLogEventDailyScheduler, NSArray;
@protocol HMMLogEventSubmitting, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource;

@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>

@property (readonly) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMDLogEventDailyScheduler *logEventDailyScheduler;
@property (readonly, weak) id<HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> dataSource;
@property BOOL registered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)submitFailureEventWithEventErrorCode:(long long)a0 error:(id)a1;
- (void)submitTrustActivityEvent:(long long)a0;
- (void)submitCloudShareTrustStatusDailyEvent;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 logEventDailyScheduler:(id)a2 dataSource:(id)a3;
- (void)registerForDailyTrustManagerEvents;
- (void)submitTrustZoneCreatedEvent;
- (void)submitTrustZoneRemovedEvent;
- (void)submitFailureEventWithEventErrorCode:(long long)a0;
- (void)triggerLogEventProviderDailySubmissionBlocks;

@end
