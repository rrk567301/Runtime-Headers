@class NSString, NSArray;

@interface PLBackgroundJobCriteria : NSObject <NSCopying> {
    unsigned long long _bgstTaskPriority;
    long long _trySchedulingBefore;
    long long _scheduleAfter;
    BOOL _requiresUserInactivity;
    BOOL _requiresExternalPower;
    BOOL _cpuIntensive;
    BOOL _memoryIntensive;
    BOOL _requiresInexpensiveNetworkConnectivity;
    BOOL _requiresUnconstrainedNetworkConnectivity;
    BOOL _overrideRateLimiting;
    double _expectedDuration;
    NSArray *_involvedProcesses;
}

@property (readonly, copy) NSString *shortCode;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *taskIdentifier;

+ (id)criteriaForDuplicateDetectorWorker;
+ (id)criteriaForHighPrioritySearchIndexingWorker;
+ (id)criteriaForDiscretionaryResourceWorkerWithExpectedDuration;
+ (id)criteriaForStableHashWorker;
+ (id)criteriaForAssetStackWorker;
+ (id)criteriaForLowPriorityChargerSearchWorker;
+ (id)criteriaForHubbleWorker;
+ (id)criteriaForUrgentResourceWorker;
+ (id)criteriaForHighPriorityRenderDerivativesWorker;
+ (id)criteriaForDiscretionaryResourceWorker;
+ (id)allKnownShortCodes;
+ (id)criteriaForAssetResourceUploadExtensionRunnerWorker;
+ (id)criteriaForLowPriorityBatterySearchWorker;
+ (id)allKnownCriteria;
+ (id)criteriaWithKnownShortCode:(id)a0;
+ (id)criteriaForHubbleNetworkDownloadWorker;
+ (id)criteriaForAssetResourceUploadJobWorker;
+ (id)criteriaForFeatureAvailabilityWorker;

- (id)description;
- (id)initWithName:(id)a0 shortCode:(id)a1 taskPriority:(unsigned long long)a2 requiresExternalPower:(BOOL)a3 trySchedulingBefore:(long long)a4 scheduleAfter:(long long)a5 requiresUserInactivity:(BOOL)a6 cpuIntensive:(BOOL)a7 memoryIntensive:(BOOL)a8 requiresInexpensiveNetworkConnectivity:(BOOL)a9 requiresUnconstrainedNetworkConnectivity:(BOOL)a10 overrideRateLimiting:(BOOL)a11 expectedDuration:(double)a12 involvedProcesses:(id)a13;
- (id)taskRequest;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
