@interface NSUTIPredicateOperator : NSPredicateOperator

- (unsigned long long)variant;
- (id)initForVariant:(unsigned long long)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
