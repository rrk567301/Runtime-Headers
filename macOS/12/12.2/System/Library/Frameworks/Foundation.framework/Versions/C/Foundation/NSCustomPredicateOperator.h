@interface NSCustomPredicateOperator : NSPredicateOperator {
    SEL _selector;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (SEL)selector;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)initWithCustomSelector:(SEL)a0 modifier:(unsigned long long)a1;
- (id)symbol;

@end
