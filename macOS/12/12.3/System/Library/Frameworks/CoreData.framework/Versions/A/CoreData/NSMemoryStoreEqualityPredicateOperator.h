@class NSManagedObjectContext;

@interface NSMemoryStoreEqualityPredicateOperator : NSEqualityPredicateOperator {
    NSManagedObjectContext *_context;
}

- (void)dealloc;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)setContext:(id)a0;

@end
