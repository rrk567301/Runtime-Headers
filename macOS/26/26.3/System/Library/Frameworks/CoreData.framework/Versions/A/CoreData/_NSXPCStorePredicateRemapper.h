@interface _NSXPCStorePredicateRemapper : NSObject <NSPredicateVisitor>

+ (void)initialize;
+ (id)defaultInstance;

- (void)visitPredicateExpression:(id)a0;
- (id)init;
- (void)visitPredicate:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;
- (void)dealloc;
- (void)visitPredicateOperator:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0;

@end
