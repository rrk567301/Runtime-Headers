@interface NSBoundedByPredicateOperator : NSPredicateOperator

- (unsigned long long)operatorType;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (SEL)selector;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setOptions:(unsigned long long)a0;
- (id)symbol;

@end
