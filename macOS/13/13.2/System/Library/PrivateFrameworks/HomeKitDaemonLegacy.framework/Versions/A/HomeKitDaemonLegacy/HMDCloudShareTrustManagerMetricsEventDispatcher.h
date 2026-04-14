@class NSUUID, NSString, HMDLogEventDailyScheduler;
@protocol HMMLogEventSubmitting, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource;

@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyTaskRunner>

@property (readonly) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMDLogEventDailyScheduler *dailyScheduler;
@property (readonly, weak) id<HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> dataSource;
@property BOOL registered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)runDailyTask;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2 dataSource:(id)a3;
- (void)registerForDailyTrustManagerEvents;
- (void)submitTrustZoneCreatedEvent;
- (void)submitTrustZoneRemovedEvent;
- (void)submitTrustActivityEvent:(long long)a0;
- (void)submitFailureEventWithEventErrorCode:(long long)a0;
- (void)submitFailureEventWithEventErrorCode:(long long)a0 error:(id)a1;
- (void)submitCloudShareTrustStatusDailyEvent;

@end
