@class NSString, NSArray;

@interface PLBackgroundJobCriteria : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _taskPriority;
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

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *shortCode;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *taskIdentifier;

+ (id)criteriaForCascadeDonationWorker;
+ (id)criteriaWithKnownShortCode:(id)a0;
+ (id)criteriaForHighPrioritySearchIndexingWorker;
+ (id)allKnownCriteria;
+ (id)criteriaForDiscretionaryResourceWorker;
+ (id)criteriaForHighPriorityRenderDerivativesWorker;
+ (id)criteriaForUrgentResourceWorker;
+ (id)criteriaForAssetResourceUploadJobWorker;
+ (id)criteriaForHubbleNetworkDownloadWorker;
+ (id)criteriaForDiscretionaryResourceWorkerWithExpectedDuration;
+ (id)criteriaForDuplicateDetectorWorker;
+ (id)criteriaForStableHashWorker;
+ (id)criteriaForHubbleWorker;
+ (id)criteriaForFeatureAvailabilityWorker;
+ (id)criteriaForAssetResourceUploadExtensionRunnerWorker;
+ (id)criteriaForLowPriorityBatterySearchWorker;
+ (id)allKnownShortCodes;
+ (id)criteriaForAssetStackWorker;
+ (id)criteriaForLowPriorityChargerSearchWorker;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)taskRequest;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 shortCode:(id)a1 taskPriority:(unsigned long long)a2 requiresExternalPower:(BOOL)a3 trySchedulingBefore:(long long)a4 scheduleAfter:(long long)a5 requiresUserInactivity:(BOOL)a6 cpuIntensive:(BOOL)a7 memoryIntensive:(BOOL)a8 requiresInexpensiveNetworkConnectivity:(BOOL)a9 requiresUnconstrainedNetworkConnectivity:(BOOL)a10 overrideRateLimiting:(BOOL)a11 expectedDuration:(double)a12 involvedProcesses:(id)a13;

@end
