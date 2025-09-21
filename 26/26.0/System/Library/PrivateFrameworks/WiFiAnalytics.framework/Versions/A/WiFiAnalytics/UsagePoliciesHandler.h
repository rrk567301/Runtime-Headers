@class WAPersistentContainer;

@interface UsagePoliciesHandler : NSObject

@property (retain, nonatomic) WAPersistentContainer *container;
@property (nonatomic) unsigned long long topLANUsagePercentile;

- (id)initWithPersistentContainer:(id)a0;
- (void).cxx_destruct;
- (BOOL)updateTopUsedByUsageWithReason:(id)a0;
- (int)checkMissingBandsIn:(BOOL[3])a0 from:(int)a1 to:(int)a2;
- (id)cumulativeUsage:(id)a0 onField:(id)a1;
- (id)lastUsagePolicyRunForTimespan:(unsigned long long)a0 object:(id)a1;
- (id)prefixForUniqueMOStatsFieldsforTimeSpan:(unsigned long long)a0;
- (BOOL)submitLanEventsFor:(id)a0;
- (BOOL)updateBandsInUniqueMOsWithReason:(id)a0;
- (void)updatePoliciesTableWithReason:(id)a0 dateLessThen:(id)a1 object:(id)a2 timeSpan:(unsigned long long)a3;
- (BOOL)updateTopUsedByUsage:(unsigned long long)a0 withReason:(id)a1;
- (id)updateUniqueMO:(id)a0 withConstraints:(id)a1 fromStats:(id)a2 aggregatedOn:(id)a3 withTotal:(unsigned long long)a4 timespan:(unsigned long long)a5 prevPercentile:(unsigned long long *)a6;
- (id)usageForTimespan:(unsigned long long)a0 by:(id)a1 around:(id)a2;

@end
