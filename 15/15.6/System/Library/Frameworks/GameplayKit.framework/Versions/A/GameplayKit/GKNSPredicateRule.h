@class NSPredicate;

@interface GKNSPredicateRule : GKRule

@property (readonly, retain, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0;
- (char)evaluatePredicateWithSystem:(id)a0;
- (void)editWithRuleSystem:(id)a0;

@end
