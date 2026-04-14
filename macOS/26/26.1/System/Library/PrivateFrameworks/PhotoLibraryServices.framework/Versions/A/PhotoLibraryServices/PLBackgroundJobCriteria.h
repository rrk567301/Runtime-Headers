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
    BOOL _overrideRateLimiting;
    double _expectedDuration;
    NSArray *_involvedProcesses;
}

@property (readonly, copy) NSString *shortCode;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *taskIdentifier;

+ (id)allKnownCriteria;
+ (id)criteriaForFeatureAvailabilityWorker;
+ (id)criteriaForHighPrioritySearchIndexingWorker;
+ (id)criteriaForHubbleWorker;
+ (id)criteriaForAssetResourceUploadJobWorker;
+ (id)criteriaForAssetResourceUploadExtensionRunnerWorker;
+ (id)criteriaForDuplicateDetectorWorker;
+ (id)criteriaForLowPriorityChargerSearchWorker;
+ (id)criteriaForAssetStackWorker;
+ (id)criteriaWithKnownShortCode:(id)a0;
+ (id)criteriaForHighPriorityRenderDerivativesWorker;
+ (id)allKnownShortCodes;
+ (id)criteriaForStableHashWorker;
+ (id)criteriaForUrgentResourceWorker;
+ (id)criteriaForDiscretionaryResourceWorkerWithExpectedDuration;
+ (id)criteriaForDiscretionaryResourceWorker;
+ (id)criteriaForHubbleNetworkDownloadWorker;
+ (id)criteriaForLowPriorityBatterySearchWorker;

- (id)taskRequest;
- (unsigned long long)hash;
- (id)description;
- (id)initWithName:(id)a0 shortCode:(id)a1 taskPriority:(unsigned long long)a2 requiresExternalPower:(BOOL)a3 trySchedulingBefore:(long long)a4 scheduleAfter:(long long)a5 requiresUserInactivity:(BOOL)a6 cpuIntensive:(BOOL)a7 memoryIntensive:(BOOL)a8 requiresInexpensiveNetworkConnectivity:(BOOL)a9 overrideRateLimiting:(BOOL)a10 expectedDuration:(double)a11 involvedProcesses:(id)a12;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
