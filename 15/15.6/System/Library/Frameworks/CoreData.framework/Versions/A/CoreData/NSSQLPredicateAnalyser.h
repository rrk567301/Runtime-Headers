@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {
    char _compoundPredicate;
    NSMutableArray *_keys;
    NSMutableArray *_allModifierPredicates;
    NSMutableArray *_setExpressions;
    NSMutableArray *_subqueries;
}

- (void)dealloc;
- (id)init;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;

@end
