@class NSString;

@interface PLBackgroundJobCriteria : NSObject <NSCopying> {
    unsigned long long _xpcActivityPriority;
    BOOL _allowBattery;
    long long _gracePeriod;
    long long _delay;
    BOOL _requireScreenSleep;
    BOOL _cpuIntensive;
    BOOL _requireInexpensiveNetworkConnectivity;
    BOOL _requireConcurrencyLimit;
    BOOL _overrideRateLimiting;
}

@property (readonly, copy) NSString *shortCode;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *activityIdentifier;

+ (id)criteriaForUrgentResourceWorker;
+ (id)allKnownCriterias;
+ (id)allKnownShortCodes;
+ (id)criteriaForDiscretionaryResourceWorker;
+ (id)criteriaForDuplicateDetectorWorker;
+ (id)criteriaForHighPriorityRenderDerivativesWorker;
+ (id)criteriaForHubbleNetworkDownloadWorker;
+ (id)criteriaForHubbleWorker;
+ (id)criteriaForIncrementalSearchWorker;
+ (id)criteriaForRebuildSearchWorker;
+ (id)criteriaWithKnownShortCode:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 shortCode:(id)a1 xpcActivityPriority:(unsigned long long)a2 allowBattery:(BOOL)a3 gracePeriod:(long long)a4 delay:(long long)a5 requireScreenSleep:(BOOL)a6 cpuIntensive:(BOOL)a7 requireInexpensiveNetworkConnectivity:(BOOL)a8 requireConcurrencyLimit:(BOOL)a9 overrideRateLimiting:(BOOL)a10;
- (id)xpcCriteria;

@end
