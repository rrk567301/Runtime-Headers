@class NSUUID, HMMDailyScheduler, NSString;
@protocol HMMLogEventSubmitting, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource;

@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMFLogging, HMMDailyTaskRunner>

@property (readonly) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMMDailyScheduler *dailyScheduler;
@property (readonly, weak) id<HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> dataSource;
@property BOOL registered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)runDailyTask;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2 dataSource:(id)a3;
- (void)registerForDailyTrustManagerEvents;
- (void)submitCloudShareTrustStatusDailyEvent;
- (void)submitFailureEventWithEventErrorCode:(long long)a0;
- (void)submitFailureEventWithEventErrorCode:(long long)a0 error:(id)a1;
- (void)submitTrustActivityEvent:(long long)a0;
- (void)submitTrustZoneCreatedEvent;
- (void)submitTrustZoneRemovedEvent;

@end
