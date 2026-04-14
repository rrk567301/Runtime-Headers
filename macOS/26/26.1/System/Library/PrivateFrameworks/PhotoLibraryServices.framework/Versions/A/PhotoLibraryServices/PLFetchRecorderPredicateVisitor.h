@interface PLFetchRecorderPredicateVisitor : NSObject <NSPredicateVisitor>

@property (readonly, nonatomic) BOOL foundOperatorIN;

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)reset;
- (void)examinePredicate:(id)a0;

@end
