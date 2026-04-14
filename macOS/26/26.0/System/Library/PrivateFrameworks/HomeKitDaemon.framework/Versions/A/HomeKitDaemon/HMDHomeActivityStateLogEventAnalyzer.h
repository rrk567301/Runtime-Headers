@class NSString, HMDEventCounterGroup;
@protocol HMDLogEventAnalyzerDataSource;

@interface HMDHomeActivityStateLogEventAnalyzer : HMDLogEventAnalyzer <HMMDailyTaskRunner>

@property (readonly, nonatomic) id<HMDLogEventAnalyzerDataSource> dataSource;
@property (readonly) HMDEventCounterGroup *vacationStateTransitionCounterGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)counterGroupKeyForTransitionTypeFromState:(id)a0 toState:(id)a1;
+ (unsigned long long)fromStateFromTransitionTypeByReasonCounterGroupKey:(id)a0;
+ (unsigned long long)toStateFromTransitionTypeByReasonCounterGroupKey:(id)a0;

- (void)configure;
- (void)runDailyTask;
- (id)initWithDataSource:(id)a0;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;
- (id)counterGroupForKey:(id)a0 homeUUID:(id)a1 date:(id)a2;
- (id)counterGroupForTransitionFromState:(unsigned long long)a0 toState:(unsigned long long)a1 homeUUID:(id)a2 date:(id)a3;
- (id)counterGroupKeyNamesForTransitionTypeByReasonLogEvents;
- (void)handleStateTransitionLogEvent:(id)a0;
- (void)handleVacationStateTransitionLogEvent:(id)a0;
- (id)householdTransitionLogEventForHomeWithUUID:(id)a0 date:(id)a1;
- (id)householdTransitionTypeByReasonLogEventsForHomeWithUUID:(id)a0 date:(id)a1;
- (void)incrementHouseholdTransitionCountersWithEvent:(id)a0;
- (void)incrementHouseholdTransitionTypeByReasonCountersWithEvent:(id)a0;
- (void)removeHouseholdCounterGroupsForKey:(id)a0 afterDate:(id)a1;
- (void)removeHouseholdCounterGroupsForKey:(id)a0 beforeDate:(id)a1;
- (void)resetCounterGroups;
- (void)resetVacationStateTransitionCounterGroup;
- (void)submitCounterGroups;
- (void)submitVacationStateTransitionCounterGroups;

@end
