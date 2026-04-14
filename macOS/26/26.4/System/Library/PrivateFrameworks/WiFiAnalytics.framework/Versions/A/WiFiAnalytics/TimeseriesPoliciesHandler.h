@class WAPersistentContainer;

@interface TimeseriesPoliciesHandler : NSObject

@property (retain, nonatomic) WAPersistentContainer *container;

- (void).cxx_destruct;
- (id)initWithPersistentContainer:(id)a0;
- (BOOL)checkRejoinAfterLeaveEvent:(unsigned long long)a0 In:(id)a1;
- (id)configureContextAwareTDEventsToFetchWithError:(id *)a0;
- (id)findEdgeBSSFromRoamEventBeforeLeaveEvent:(unsigned long long)a0 In:(id)a1;
- (id)findEdgeBSSIn:(id)a0 byCheckingLeaveEventsUntil:(id)a1;
- (id)findEventsIn:(id)a0 aroundIndex:(unsigned long long)a1 noEarlierThan:(id)a2 noLaterThan:(id)a3 withPredicate:(id)a4 findingAll:(BOOL)a5;
- (id)findNextLeaveEventFrom:(unsigned long long *)a0 In:(id)a1;
- (id)findRoamEventBeforeLeaveEvent:(unsigned long long)a0 In:(id)a1;
- (BOOL)updateBSSMOWithEdgeBSSSet:(id)a0 tdEdgeParamsVersion:(unsigned long long)a1 withError:(id *)a2;
- (BOOL)updateEdgeBssWithReason:(id)a0 at:(id)a1 timeSpan:(unsigned long long)a2;
- (void)updatePoliciesTableWithReason:(id)a0 withPolicyType:(id)a1 withOutcome:(BOOL)a2;

@end
