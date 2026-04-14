@interface PLFetchRecorderPredicateVisitor : NSObject <NSPredicateVisitor>

@property (readonly, nonatomic) BOOL foundOperatorIN;

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)reset;
- (void)visitPredicateOperator:(id)a0;
- (void)examinePredicate:(id)a0;

@end
