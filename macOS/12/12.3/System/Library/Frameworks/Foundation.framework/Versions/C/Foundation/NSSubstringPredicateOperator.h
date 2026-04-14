@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
    unsigned long long _position;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (SEL)selector;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)symbol;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2 position:(unsigned long long)a3;
- (unsigned long long)position;

@end
