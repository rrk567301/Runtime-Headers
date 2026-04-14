@class HMDHouseholdMetricsMessagingProvider, NSUUID, HMDHouseholdMetricsServer, NSString, HMDHouseholdMetricsClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHouseholdMetricsManager : HMFObject <HMFMessageReceiver, HMDLogEventDailyTaskRunner>

@property (readonly, nonatomic) HMDHouseholdMetricsClient *client;
@property (readonly, nonatomic) HMDHouseholdMetricsServer *server;
@property (readonly, nonatomic) HMDHouseholdMetricsMessagingProvider *messagingProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)runDailyTask;
- (id)initWithCountersManager:(id)a0 dataSource:(id)a1 dailyScheduler:(id)a2 logEventSubmitter:(id)a3 dateProvider:(id)a4 activityContributors:(id)a5;
- (id)initWithCountersManager:(id)a0 dataSource:(id)a1 dailyScheduler:(id)a2 logEventSubmitter:(id)a3 dateProvider:(id)a4 requestCountProvider:(id)a5 logEventFactories:(id)a6;

@end
