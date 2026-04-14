@interface NSCompoundPredicateOperator : NSPredicateOperator

+ (void)initialize;
+ (id)notPredicateOperator;
+ (id)andPredicateOperator;
+ (id)orPredicateOperator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateFormat;
- (id)symbol;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1 substitutionVariables:(id)a2;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1;

@end
