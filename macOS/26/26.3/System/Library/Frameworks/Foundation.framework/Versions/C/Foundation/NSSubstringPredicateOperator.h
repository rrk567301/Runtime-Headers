@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
    unsigned long long _position;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2 position:(unsigned long long)a3;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)symbol;
- (SEL)selector;
- (unsigned long long)position;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
