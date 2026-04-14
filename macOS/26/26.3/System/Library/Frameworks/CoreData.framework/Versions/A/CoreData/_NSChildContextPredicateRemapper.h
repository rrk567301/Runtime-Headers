@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext *_context;
}

- (void)visitPredicateExpression:(id)a0;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)visitPredicate:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;
- (void)dealloc;
- (void)visitPredicateOperator:(id)a0;

@end
