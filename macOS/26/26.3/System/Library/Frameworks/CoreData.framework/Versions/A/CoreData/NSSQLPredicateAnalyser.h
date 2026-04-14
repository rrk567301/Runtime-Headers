@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {
    BOOL _compoundPredicate;
    NSMutableArray *_keys;
    NSMutableArray *_allModifierPredicates;
    NSMutableArray *_setExpressions;
    NSMutableArray *_subqueries;
}

- (void)visitPredicateExpression:(id)a0;
- (id)init;
- (void)visitPredicate:(id)a0;
- (void)dealloc;
- (void)visitPredicateOperator:(id)a0;

@end
