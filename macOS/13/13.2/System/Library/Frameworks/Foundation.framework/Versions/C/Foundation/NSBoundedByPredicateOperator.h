@interface NSBoundedByPredicateOperator : NSPredicateOperator

- (SEL)selector;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)symbol;
- (unsigned long long)operatorType;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)_setOptions:(unsigned long long)a0;

@end
