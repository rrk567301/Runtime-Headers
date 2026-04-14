@interface NSCompoundPredicateOperator : NSPredicateOperator

+ (id)notPredicateOperator;
+ (id)andPredicateOperator;
+ (id)orPredicateOperator;
+ (void)initialize;

- (id)minimalFormInContext:(id)a0 ofPredicates:(id)a1;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)symbol;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1;
- (BOOL)evaluatePredicates:(id)a0 withObject:(id)a1 substitutionVariables:(id)a2;

@end
