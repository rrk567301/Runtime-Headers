@class NSCompoundPredicate, NSMutableDictionary, NSMutableArray;

@interface IAMDecomposedKey : NSObject {
    NSMutableArray *rawPredicateConditions;
    NSCompoundPredicate *compoundPredicate;
    BOOL compoundPredicateNeedsInitialization;
}

@property (retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers;

- (void)addPredicateCondition:(id)a0;
- (BOOL)predicatesMatchFigaroEventProperties:(id)a0;
- (void)constructCompoundPredicateIfNeeded;
- (void).cxx_destruct;
- (BOOL)hasPredicates;
- (id)init;

@end
