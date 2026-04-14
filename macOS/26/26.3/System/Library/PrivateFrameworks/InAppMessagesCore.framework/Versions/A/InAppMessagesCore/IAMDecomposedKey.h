@class NSCompoundPredicate, NSMutableDictionary, NSMutableArray;

@interface IAMDecomposedKey : NSObject {
    NSMutableArray *rawPredicateConditions;
    NSCompoundPredicate *compoundPredicate;
    BOOL compoundPredicateNeedsInitialization;
}

@property (retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers;

- (BOOL)predicatesMatchFigaroEventProperties:(id)a0;
- (void)constructCompoundPredicateIfNeeded;
- (id)init;
- (BOOL)hasPredicates;
- (void).cxx_destruct;
- (void)addPredicateCondition:(id)a0;

@end
