@class RBInheritanceCollection, NSString, RBSProcessIdentity, NSMutableSet, NSSet, RBMutableProcessAppNapState, NSMutableDictionary;

@interface RBProcessState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_maxCPULimitsByRole;
    NSMutableDictionary *_minCPULimitsByRole;
    NSMutableDictionary *_jetsamLenientModeByRole;
    NSMutableSet *_tags;
    NSMutableSet *_legacyAssertions;
    NSMutableSet *_primitiveAssertions;
    unsigned short _flags;
}

@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) unsigned char role;
@property (readonly, nonatomic) char preventSuspend;
@property (readonly, nonatomic) unsigned char gpuRole;
@property (readonly, nonatomic) unsigned char terminationResistance;
@property (readonly, nonatomic) unsigned long long explicitJetsamBand;
@property (readonly, nonatomic) char isBeingDebugged;
@property (readonly, nonatomic) char preventBaseMemoryLimitReduction;
@property (readonly, nonatomic) char preventIdleSleep;
@property (readonly, nonatomic) char jetsamLenientMode;
@property (readonly, nonatomic) char throttleBestEffortNetworking;
@property (readonly, nonatomic) char effectiveJetsamLenientMode;
@property (readonly, nonatomic) char forceRoleManage;
@property (readonly, nonatomic) char guaranteedRunning;
@property (readonly, nonatomic) char targetedBySuspendableAssertion;
@property (readonly, nonatomic) NSString *memoryLimitCategory;
@property (readonly, nonatomic) unsigned char memoryLimitStrength;
@property (readonly, nonatomic) int memoryLimit;
@property (readonly, nonatomic) unsigned long long effectiveMaxCPUPercentage;
@property (readonly, nonatomic) unsigned long long effectiveMaxCPUDuration;
@property (readonly, nonatomic) unsigned long long effectiveMaxCPUUsageViolationPolicy;
@property (readonly, nonatomic) unsigned long long effectiveMinCPUPercentage;
@property (readonly, nonatomic) unsigned long long effectiveMinCPUDuration;
@property (readonly, nonatomic) unsigned long long coalitionLevel;
@property (readonly, nonatomic) unsigned long long legacyFinishTaskReason;
@property (readonly, nonatomic) NSMutableSet *preventIdleSleepIdentifiers;
@property (readonly, nonatomic) RBInheritanceCollection *inheritances;
@property (readonly, nonatomic) NSSet *preventLaunchReasons;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (readonly, copy, nonatomic) NSSet *legacyAssertions;
@property (readonly, copy, nonatomic) NSSet *primitiveAssertions;
@property (readonly, copy, nonatomic) NSMutableSet *endowmentInfos;
@property (readonly, nonatomic) char carPlayMode;
@property (readonly, nonatomic) char appNapEnabled;
@property (readonly, nonatomic) char appNapInactive;
@property (readonly, nonatomic) char appNapPreventBackgroundSockets;
@property (readonly, nonatomic) char appNapPreventDiskThrottle;
@property (readonly, nonatomic) char appNapPreventLowPriorityCPU;
@property (readonly, nonatomic) char appNapPreventSuppressedCPU;
@property (readonly, nonatomic) unsigned char appNapPreventTimerThrottleTier;
@property (readonly, nonatomic) RBMutableProcessAppNapState *appNapState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0;
- (id)clientStateForProcess:(id)a0;
- (id)inheritancesForEnvironment:(id)a0;
- (char)isAppNapEqualToProcessState:(id)a0;
- (char)isEqualToProcessStateIgnoringIdentity:(id)a0;
- (char)isEqualToProcessStateIgnoringInheritances:(id)a0;
- (id)maxCPUUsageLimitsForRole:(unsigned char)a0;
- (id)minCPUUsageLimitsForRole:(unsigned char)a0;

@end
