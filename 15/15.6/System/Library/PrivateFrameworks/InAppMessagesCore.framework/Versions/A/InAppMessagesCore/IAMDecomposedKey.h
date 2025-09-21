@class NSCompoundPredicate, NSMutableDictionary, NSMutableArray;

@interface IAMDecomposedKey : NSObject {
    NSMutableArray *rawPredicateConditions;
    NSCompoundPredicate *compoundPredicate;
    char compoundPredicateNeedsInitialization;
}

@property (retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)addPredicateCondition:(id)a0;
- (void)constructCompoundPredicateIfNeeded;
- (char)hasPredicates;
- (char)predicatesMatchFigaroEventProperties:(id)a0;

@end
