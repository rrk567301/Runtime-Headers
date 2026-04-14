@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
    unsigned long long _position;
}

+ (BOOL)supportsSecureCoding;

- (SEL)selector;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbol;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (unsigned long long)position;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2 position:(unsigned long long)a3;

@end
