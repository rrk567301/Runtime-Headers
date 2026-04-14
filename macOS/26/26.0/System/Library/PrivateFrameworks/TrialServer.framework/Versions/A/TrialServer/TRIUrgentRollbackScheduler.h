@class NSString, TRIExperimentDatabase;
@protocol TRITaskQueuing;

@interface TRIUrgentRollbackScheduler : NSObject <TRIUrgentRollbackSchedulerProtocol>

@property (readonly, nonatomic) id<TRITaskQueuing> queue;
@property (readonly, nonatomic) TRIExperimentDatabase *experimentDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_activeExperimentDeploymentsForRollbackExperiment:(id)a0 deploymentIds:(id)a1;
- (void)scheduleUrgentRollbackForExperiment:(id)a0 deploymentIds:(id)a1;
- (BOOL)_experimentRecord:(id)a0 matchesExperimentId:(id)a1 oneOfDeploymentIds:(id)a2;
- (id)_ineligibleExperimentDeploymentsForRollbackExperiment:(id)a0 deploymentIds:(id)a1;
- (id)initWithExperimentDatabase:(id)a0 taskQueue:(id)a1;
- (void).cxx_destruct;

@end
