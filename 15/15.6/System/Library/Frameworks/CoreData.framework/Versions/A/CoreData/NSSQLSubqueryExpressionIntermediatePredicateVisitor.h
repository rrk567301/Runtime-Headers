@class NSSQLIntermediate;

@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject {
    NSSQLIntermediate *_scope;
    char _foundKeypath;
}

- (void)dealloc;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (char)checkPredicate:(id)a0;

@end
