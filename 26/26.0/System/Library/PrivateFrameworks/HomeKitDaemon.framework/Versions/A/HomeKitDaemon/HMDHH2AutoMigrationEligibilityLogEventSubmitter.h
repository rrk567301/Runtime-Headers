@class NSObject, NSString, HMMDateProvider, NSUserDefaults;
@protocol OS_dispatch_queue, HMMLogEventSubmitting, HMDHH2AutoMigrationEligibilityLogEventSubmitterDataSource;

@interface HMDHH2AutoMigrationEligibilityLogEventSubmitter : HMDLogEventAnalyzer <HMMDailyTaskRunner>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, weak, nonatomic) id<HMDHH2AutoMigrationEligibilityLogEventSubmitterDataSource> eligibilityStatusDataSource;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runDailyTask;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithEligibilityStatusDataSource:(id)a0 analyzerDataSource:(id)a1;
- (void)submitHH2AutoMigrationEligibilityStatus;

@end
