@interface NSCompoundPredicateOperator : NSPredicateOperator

+ (void)initialize;
+ (id)andPredicateOperator;
+ (id)notPredicateOperator;
+ (id)orPredicateOperator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateFormat;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1 substitutionVariables:(id)a2;
- (id)symbol;

@end
