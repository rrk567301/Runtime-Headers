@class HMDMetricsDateProvider, NSDictionary, NSObject, HMDHouseholdMetricsRequestContributor;
@protocol OS_dispatch_queue, HMDHouseholdMetricsLogEventProviding, HMDHouseholdMetricsDataSource, HMMLogEventSubmitting, HMDHouseholdMetricsMessaging;

@interface HMDHouseholdMetricsServer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsDataSource> dataSource;
@property (readonly, weak, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsLogEventProviding> householdMetricsProvider;
@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsMessaging> remoteMessageDispatcher;
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider;
@property (readonly, nonatomic) HMDHouseholdMetricsRequestContributor *requestContributor;
@property (readonly, nonatomic) NSDictionary *logEventFactories;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 logEventSubmitter:(id)a1 dateProvider:(id)a2 householdMetricsProvider:(id)a3 remoteMessageDispatcher:(id)a4 logEventFactories:(id)a5 workQueue:(id)a6;
- (BOOL)evaluateHouseholdActivityLogEventForSubmission:(id)a0;
- (BOOL)evaluateMetricResponsesForSubmission:(id)a0;
- (void)sendHouseholdMetricsCollectionRequestToDevices:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2 completion:(id /* block */)a3;
- (void)runHouseholdMetricsDataCollection;

@end
