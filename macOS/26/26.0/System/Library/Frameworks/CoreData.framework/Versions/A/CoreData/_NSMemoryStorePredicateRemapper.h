@class NSManagedObjectContext;

@interface _NSMemoryStorePredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext *_context;
}

+ (id)defaultInstance;

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)dealloc;
- (id)createPredicateForFetchFromPredicate:(id)a0;
- (id)init;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;

@end
