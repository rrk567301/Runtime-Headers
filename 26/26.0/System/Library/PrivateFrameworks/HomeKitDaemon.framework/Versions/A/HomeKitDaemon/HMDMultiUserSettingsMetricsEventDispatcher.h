@class NSUUID, HMMDailyScheduler, NSString;
@protocol HMDMultiUserSettingsMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDMultiUserSettingsMetricsEventDispatcher : HMFObject <HMFLogging, HMMDailyTaskRunner>

@property (readonly) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMMDailyScheduler *dailyScheduler;
@property (weak) id<HMDMultiUserSettingsMetricsEventDispatcherDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)runDailyTask;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2;
- (void)registerForDailyMultiUserSettingsEvents;
- (void)submitMultiUserSettingsDailyEvent;

@end
