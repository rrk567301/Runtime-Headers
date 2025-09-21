@class IRCandidateResult, NSMutableDictionary, IRCandidateDO, IRInspectionOrderOfExectionForCandidate, NSNumber, NSString;

@interface IRCandidateWrapper : NSObject

@property (retain, nonatomic) IRCandidateResult *candidateResult;
@property (retain, nonatomic) NSMutableDictionary *ruleInspections;
@property (retain, nonatomic) NSMutableDictionary *internalOrderOfExecution;
@property (nonatomic) char enableOrderOfExecutionLogging;
@property (retain, nonatomic) IRCandidateDO *candidate;
@property (readonly, nonatomic) IRInspectionOrderOfExectionForCandidate *orderOfExecution;
@property (nonatomic) char sameSpaceBasedOnMiLo;
@property (nonatomic) char sameSpaceBasedOnBrokeredLOI;
@property (nonatomic) char sameSpaceBasedOnUWB;
@property (nonatomic) char sameSpaceBasedOnBLE;
@property (nonatomic) char sameSpaceBasedOnPDRFence;
@property (nonatomic) char sameSpaceBasedOnHistory;
@property (nonatomic) char isSameSpace;
@property (retain, nonatomic) NSNumber *uwbRange;
@property (retain, nonatomic) NSNumber *bleRange;
@property (nonatomic) long long nominatedClassification;
@property (retain, nonatomic) NSString *nominatedClassificationDesc;
@property (nonatomic) NSNumber *sortingHint;
@property (nonatomic) NSNumber *isCallToAction;
@property (nonatomic) char isLockScreenControl;
@property (nonatomic) char isConservativeFiltered;
@property (nonatomic) char isFiltered;

- (void).cxx_destruct;
- (id)initWithCandidate:(id)a0;
- (void)setClassification:(long long)a0 withDescription:(id)a1;
- (id)initWithCandidate:(id)a0 andDefaultClassification:(long long)a1 logOrderOfExecution:(char)a2;
- (void)logOrderOfExecution:(long long)a0 withRuleKey:(id)a1 ruleType:(id)a2;
- (char)logOrderOfExecution:(long long)a0 withRuleKey:(id)a1 ruleType:(id)a2 andReturn:(char)a3;
- (void)setEvaluation:(id)a0 forRuleKey:(id)a1;

@end
