@interface NSCompoundPredicateOperator : NSPredicateOperator

+ (void)initialize;
+ (id)andPredicateOperator;
+ (id)orPredicateOperator;
+ (id)notPredicateOperator;

- (id)minimalFormInContext:(id)a0 ofPredicates:(id)a1;
- (id)symbol;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1 substitutionVariables:(id)a2;

@end
