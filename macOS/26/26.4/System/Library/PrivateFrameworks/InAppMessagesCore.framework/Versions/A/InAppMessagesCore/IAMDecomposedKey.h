@class NSCompoundPredicate, NSMutableDictionary, NSMutableArray;

@interface IAMDecomposedKey : NSObject {
    NSMutableArray *rawPredicateConditions;
    NSCompoundPredicate *compoundPredicate;
    BOOL compoundPredicateNeedsInitialization;
}

@property (retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers;

- (BOOL)hasPredicates;
- (void)addPredicateCondition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)constructCompoundPredicateIfNeeded;
- (BOOL)predicatesMatchFigaroEventProperties:(id)a0;

@end
