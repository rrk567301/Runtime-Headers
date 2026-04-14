@class NSObject, HMDMetricsDateProvider;
@protocol HMDHouseholdMetricsMessaging, OS_dispatch_queue, HMDHouseholdMetricsDataSource, HMMLogEventSubmitting, HMDHouseholdDataLogEventProviding;

@interface HMDHouseholdMetricsServer : NSObject

@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsDataSource> dataSource;
@property (readonly, weak, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, weak, nonatomic) id<HMDHouseholdDataLogEventProviding> householdDataProvider;
@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsMessaging> remoteMessageDispatcher;
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)evaluateHouseholdDataLogEventForSubmission:(id)a0;
- (BOOL)evaluateMetricResponsesForSubmission:(id)a0;
- (void)sendHouseholdMetricsCollectionRequestToDevices:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2 completion:(id /* block */)a3;
- (id)initWithDataSource:(id)a0 logEventSubmitter:(id)a1 dateProvider:(id)a2 householdDataProvider:(id)a3 remoteMessageDispatcher:(id)a4 workQueue:(id)a5;
- (void)runHouseholdMetricsDataCollection;

@end
