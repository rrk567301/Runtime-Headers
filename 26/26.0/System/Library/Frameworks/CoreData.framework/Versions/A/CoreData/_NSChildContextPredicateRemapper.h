@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext *_context;
}

- (id)initWithContext:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)dealloc;
- (id)init;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;

@end
