@class NSCompoundPredicate, NSMutableDictionary, NSMutableArray;

@interface IAMDecomposedKey : NSObject {
    NSMutableArray *rawPredicateConditions;
    NSCompoundPredicate *compoundPredicate;
    BOOL compoundPredicateNeedsInitialization;
}

@property (retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers;

- (void)constructCompoundPredicateIfNeeded;
- (BOOL)predicatesMatchFigaroEventProperties:(id)a0;
- (void)addPredicateCondition:(id)a0;
- (id)init;
- (BOOL)hasPredicates;
- (void).cxx_destruct;

@end
