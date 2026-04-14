@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
    int _contextLock;
    struct { id x0; void *x1; long long x2; } *_regexContext;
}

- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)symbol;
- (SEL)selector;
- (BOOL)_shouldEscapeForLike;
- (void)_clearContext;
- (void)dealloc;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2;

@end
