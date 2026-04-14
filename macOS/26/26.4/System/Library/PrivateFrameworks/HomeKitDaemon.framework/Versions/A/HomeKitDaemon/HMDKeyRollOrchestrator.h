@class NSString, HMDHomeManager;
@protocol HMDKeyRollOrchestratorDataSource, HMDBackgroundSystemTaskSchedulerInterfacing;

@interface HMDKeyRollOrchestrator : NSObject <HMFLogging>

@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) id<HMDBackgroundSystemTaskSchedulerInterfacing> scheduler;
@property (readonly, nonatomic) id<HMDKeyRollOrchestratorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (void)_handleFMFStatusChange:(id)a0;
- (void)_updateCurrentUserKeyForHome:(id)a0;
- (void)cancelKeyRollingTask;
- (id)initWithHomeManager:(id)a0 backgroundScheduler:(id)a1 dataSource:(id)a2;
- (BOOL)isRollingRequiredForKeyWithIdentifier:(id)a0 expiration:(id)a1 reason:(id *)a2;
- (BOOL)rollPreferredControllerKey:(id)a0;
- (void)scheduleKeyRollingTask;
- (void)updateCurrentUserKey:(id)a0;

@end
