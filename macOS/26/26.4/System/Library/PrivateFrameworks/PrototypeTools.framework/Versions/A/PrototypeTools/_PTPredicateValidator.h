@class NSPredicate;

@interface _PTPredicateValidator : NSObject <NSPredicateVisitor> {
    NSPredicate *_predicate;
    BOOL _valid;
}

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void).cxx_destruct;

@end
