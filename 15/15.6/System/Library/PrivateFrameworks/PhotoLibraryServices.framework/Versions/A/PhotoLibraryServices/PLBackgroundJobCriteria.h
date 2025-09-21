@class NSString, NSArray;

@interface PLBackgroundJobCriteria : NSObject <NSCopying> {
    unsigned long long _xpcActivityPriority;
    char _allowBattery;
    long long _gracePeriod;
    long long _delay;
    char _requireScreenSleep;
    char _cpuIntensive;
    char _memoryIntensive;
    char _requireInexpensiveNetworkConnectivity;
    char _requireConcurrencyLimit;
    char _overrideRateLimiting;
    long long _expectedDuration;
    NSArray *_involvedProcesses;
}

@property (readonly, copy) NSString *shortCode;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *activityIdentifier;

+ (id)criteriaForUrgentResourceWorker;
+ (id)allKnownCriterias;
+ (id)allKnownShortCodes;
+ (id)criteriaForAssetStackWorker;
+ (id)criteriaForDiscretionaryResourceWorker;
+ (id)criteriaForDiscretionaryResourceWorkerWithExpectedDuration;
+ (id)criteriaForDuplicateDetectorWorker;
+ (id)criteriaForFeatureAvailabilityWorker;
+ (id)criteriaForHighPriorityRenderDerivativesWorker;
+ (id)criteriaForHighPrioritySearchIndexingWorker;
+ (id)criteriaForHubbleNetworkDownloadWorker;
+ (id)criteriaForHubbleWorker;
+ (id)criteriaForLowPriorityBatterySearchWorker;
+ (id)criteriaForLowPriorityChargerSearchWorker;
+ (id)criteriaWithKnownShortCode:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 shortCode:(id)a1 xpcActivityPriority:(unsigned long long)a2 allowBattery:(char)a3 gracePeriod:(long long)a4 delay:(long long)a5 requireScreenSleep:(char)a6 cpuIntensive:(char)a7 memoryIntensive:(char)a8 requireInexpensiveNetworkConnectivity:(char)a9 requireConcurrencyLimit:(char)a10 overrideRateLimiting:(char)a11 expectedDuration:(long long)a12 involvedProcesses:(id)a13;
- (id)xpcCriteria;

@end
