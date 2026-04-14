@interface NSBoundedByPredicateOperator : NSPredicateOperator

- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (SEL)selector;
- (id)symbol;
- (void)_setOptions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)operatorType;

@end
