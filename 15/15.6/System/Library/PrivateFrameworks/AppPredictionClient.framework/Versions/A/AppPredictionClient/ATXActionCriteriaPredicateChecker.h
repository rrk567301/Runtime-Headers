@class NSSet;

@interface ATXActionCriteriaPredicateChecker : NSObject <NSPredicateVisitor> {
    NSSet *_propertyNames;
    char _ok;
}

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (char)isValid:(id)a0;

@end
