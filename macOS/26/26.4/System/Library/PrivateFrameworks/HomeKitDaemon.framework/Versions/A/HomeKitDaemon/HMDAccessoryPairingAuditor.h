@class NSString, HMDBackgroundOperationManager;
@protocol HMDAccessoryPairingAuditorDataSource, HMDBackgroundSystemTaskSchedulerInterfacing;

@interface HMDAccessoryPairingAuditor : NSObject <HMFLogging>

@property (readonly, weak, nonatomic) HMDBackgroundOperationManager *operationManager;
@property (readonly, nonatomic) id<HMDAccessoryPairingAuditorDataSource> dataSource;
@property (readonly, nonatomic) id<HMDBackgroundSystemTaskSchedulerInterfacing> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (void)_addAuditOperationForAccessory:(id)a0;
- (id)_auditAllAccessoryPairingsForHome:(id)a0;
- (void)_cancelPeriodicAuditing;
- (void)_cancelPeriodicAuditingAndRemoveAllAccessoryOperations;
- (void)_handleFMFStatusChange:(id)a0;
- (void)_runPeriodicAuditForAllHomes;
- (id)_runPeriodicPairingAuditForHome:(id)a0;
- (void)_schedulePeriodicAuditing;
- (id)auditAllAccessoryPairingsForHome:(id)a0;
- (void)handleResidentDeviceUpdated;
- (id)initWithBackgroundOperationManager:(id)a0;
- (id)initWithBackgroundOperationManager:(id)a0 backgroundScheduler:(id)a1 dataSource:(id)a2;
- (BOOL)shouldRunAuditOnThisDeviceForHome:(id)a0;

@end
