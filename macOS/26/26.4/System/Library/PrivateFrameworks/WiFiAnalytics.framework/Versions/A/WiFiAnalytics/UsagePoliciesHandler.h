@class WAPersistentContainer;

@interface UsagePoliciesHandler : NSObject

@property (retain, nonatomic) WAPersistentContainer *container;
@property (nonatomic) unsigned long long topLANUsagePercentile;

+ (unsigned long long)_calculateTDEdgeParamsVersion;
+ (id)_getCurrentAutoLeaveRssiPolicyType;
+ (unsigned long long)tdEdgeParamsVersion;
+ (id)tdEdgeParamsVersionAsString:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)updateBandResidencyWithReason:(id)a0;
- (id)initWithPersistentContainer:(id)a0;
- (BOOL)updateTopUsedByUsageWithReason:(id)a0;
- (void)_updateIsBandResidencyLow:(BOOL)a0 forBand:(short)a1 onNetwork:(id)a2 counters:(id)a3;
- (BOOL)canRunContextAwareTDPolicyNow;
- (BOOL)canRunPolicyAtCurrentTimeForPolicyType:(id)a0 timespan:(unsigned long long)a1;
- (int)checkMissingBandsIn:(BOOL[3])a0 from:(int)a1 to:(int)a2;
- (id)cumulativeUsage:(id)a0 onField:(id)a1;
- (BOOL)isContextAwareTDPolicyExecutionIntervalSufficient;
- (BOOL)isContextAwareTDPolicyLastWeekWiFiUsageSufficient;
- (id)lastUsagePolicyRunForTimespan:(unsigned long long)a0 object:(id)a1;
- (id)prefixForUniqueMOStatsFieldsforTimeSpan:(unsigned long long)a0;
- (BOOL)resetAllInstancesUsageToZero:(id)a0 forTimeSpan:(unsigned long long)a1;
- (BOOL)submitBSSEventsFor:(id)a0;
- (BOOL)submitLanEventsFor:(id)a0;
- (BOOL)submitNetworkEventsFor:(id)a0;
- (unsigned long long)totalWiFiUsageInTimeSpan:(unsigned long long)a0 around:(unsigned long long)a1;
- (BOOL)updateAutoLeaveRssiWithReason:(id)a0;
- (BOOL)updateBandsInUniqueMOsWithReason:(id)a0;
- (void)updatePoliciesTableWithPolicyType:(id)a0 reason:(id)a1 dateLessThen:(id)a2 object:(id)a3 timeSpan:(unsigned long long)a4;
- (BOOL)updateTopUsedByUsage:(unsigned long long)a0 withReason:(id)a1;
- (id)updateUniqueMO:(id)a0 withConstraints:(id)a1 fromStats:(id)a2 aggregatedOn:(id)a3 withTotal:(unsigned long long)a4 timespan:(unsigned long long)a5 prevPercentile:(unsigned long long *)a6;
- (id)usageForTimespan:(unsigned long long)a0 by:(id)a1 around:(id)a2;

@end
