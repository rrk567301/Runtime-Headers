@class TRIExperimentDeployment, NSString, NSArray, TRIRolloutDeployment, NSDate, _PASLock, NSDictionary, TRITaskCapabilityModifier, TRIRolloutTaskSupport, TRIExperimentTaskSupport;
@protocol TRITaskAttributing, TRITaskQueueStateProviding, TRIFactorPackSetId;

@interface TRIFetchFactorPackSetTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    id<TRITaskAttributing> _taskAttribution;
    unsigned long long _construct;
    TRIRolloutTaskSupport *_rolloutSupport;
    TRIExperimentTaskSupport *_experimentSupport;
    NSString *_treatmentId;
    BOOL _isCounterfactualTreatment;
    TRITaskCapabilityModifier *_capabilityModifier;
    NSDictionary *_factorRecordsByAssetId;
    _PASLock *_guardedDownloadableRecord;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;
@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
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

+ (id)_namespaceNamesFromExperimentRecord:(id)a0;
+ (id)taskWithFactorPackSetId:(id)a0 taskAttribution:(id)a1 rolloutDeployment:(id)a2 capabilityModifier:(id)a3;
+ (id)taskWithFactorPackSetId:(id)a0 treatmentId:(id)a1 isCounterfactualTreatment:(BOOL)a2 taskAttribution:(id)a3 experimentDeployment:(id)a4;
+ (id)parseFromData:(id)a0;

- (unsigned long long)requiredCapabilities;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)trialSystemTelemetry;
- (void)_recordExperimentFetchFailedWithTaskError:(int)a0 context:(id)a1;
- (id)_subscribedOnDemandFactorsForAssets:(id)a0 factorPackSet:(id)a1 context:(id)a2;
- (void)_removeDownloadableRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dimensions;
- (id)initWithFactorPackSetId:(id)a0 treatmentId:(id)a1 isCounterfactualTreatment:(BOOL)a2 taskAttribution:(id)a3 experimentDeployment:(id)a4;
- (void)_recordExperimentFetchFailedWithReason:(id)a0 context:(id)a1;
- (BOOL)_downloadAndSaveCKAssetsWithMetadata:(id)a0 artifactProvider:(id)a1 options:(id)a2 downloadNotificationKey:(id)a3 context:(id)a4 assetsDownloadSize:(unsigned long long *)a5 errorResult:(id *)a6 fetchError:(id *)a7;
- (id)_downloadSetArtifactWithProvider:(id)a0 downloadOptions:(id)a1 downloadNotificationKey:(id)a2 errorResult:(id *)a3 setArtifactFetchError:(id *)a4;
- (id)_requiredAssetsForFactorPackSet:(id)a0 context:(id)a1;
- (id)serialize;
- (id)metrics;
- (id)initWithCoder:(id)a0;
- (void)_addMetricForFetchFactorPackSetTaskError:(int)a0;
- (void)_logOnDemandFactor:(id)a0 metricName:(id)a1 namespaceName:(id)a2 client:(id)a3 error:(id)a4;
- (id)_taskResultForStatus:(int)a0 reportResultToServer:(BOOL)a1 earliestRetryDate:(id)a2;
- (id)_uniqueUninstalledAssets:(id)a0;
- (id)initWithFactorPackSetId:(id)a0 taskAttribution:(id)a1 rolloutDeployment:(id)a2 capabilityModifier:(id)a3;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_saveFactorPackSet:(id)a0 requiredAssetMap:(id)a1 context:(id)a2;
- (BOOL)_downloadAndSaveMAAssets:(id)a0 options:(id)a1 downloadNotificationKey:(id)a2 context:(id)a3 assetsDownloadSize:(unsigned long long *)a4 errorResult:(id *)a5 fetchError:(id *)a6;

@end
