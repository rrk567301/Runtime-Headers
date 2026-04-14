@interface NSCustomPredicateOperator : NSPredicateOperator {
    SEL _selector;
    struct _operatorFlags { unsigned char _usesKVC : 1; unsigned char _validatedSelector : 1; unsigned char _validatedKeys : 1; unsigned int _reservedOperatorFlags : 29; } _operatorFlags;
}

+ (BOOL)supportsSecureCoding;

- (id)symbol;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (unsigned long long)operatorType;
- (SEL)selector;
- (id)initWithCustomSelector:(SEL)a0 modifier:(unsigned long long)a1;

@end
