@class TRIExperimentTaskSupport, NSString, NSArray, TRIExperimentDeployment, NSDate;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRITargetingTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    TRIExperimentTaskSupport *_support;
    BOOL _includeDependencies;
    id<TRITaskAttributing> _taskAttributing;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;
@property (nonatomic) int retryCount;
@property BOOL wasDeferred;
@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithExperiment:(id)a0 taskAttribution:(id)a1;
+ (id)taskWithExperiment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2;
+ (id)parseFromData:(id)a0;

- (BOOL)_isExperimentEligibleWithArtifact:(id)a0 context:(id)a1;
- (id)dimensions;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (id)_targetingErrorWithExperiment:(id)a0 errorType:(id)a1 details:(id)a2;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)getTreatment:(id *)a0 forExperiment:(id)a1 deploymentEnvironment:(int)a2 isServerSideExperiment:(BOOL)a3 experimentCovariates:(id)a4 paths:(id)a5 experimentEndDate:(id)a6 error:(id *)a7;
- (BOOL)getTreatment:(id *)a0 forExperiment:(id)a1 deploymentEnvironment:(int)a2 isServerSideExperiment:(BOOL)a3 systemCovariates:(id)a4 userCovariates:(id)a5 experimentCovariates:(id)a6 experimentEndDate:(id)a7 error:(id *)a8;
- (void).cxx_destruct;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)metrics;
- (id)runTaskUsingContext:(id)a0 withTaskQueue:(id)a1 systemCovariates:(id)a2 userCovariates:(id)a3 error:(id *)a4;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)systemCovariatesWithPaths:(id)a0;
- (BOOL)getFactorPackSetId:(id *)a0 forExperiment:(id)a1 treatmentId:(id)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;
- (BOOL)validateSystemCovariates:(id)a0 experiment:(id)a1 error:(id *)a2;
- (id)_targetingErrorWithExperiment:(id)a0 errorType:(id)a1;
- (id)initWithExperiment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2;

@end
