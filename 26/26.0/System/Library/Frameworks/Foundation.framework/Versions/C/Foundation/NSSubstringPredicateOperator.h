@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
    unsigned long long _position;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (SEL)selector;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2 position:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;
- (id)symbol;
- (id)initWithCoder:(id)a0;
- (unsigned long long)position;
- (BOOL)isEqual:(id)a0;

@end
