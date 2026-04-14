@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
    int _contextLock;
    struct { id x0; void *x1; long long x2; } *_regexContext;
}

- (SEL)selector;
- (void)dealloc;
- (id)symbol;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2;
- (BOOL)_shouldEscapeForLike;
- (void)_clearContext;

@end
