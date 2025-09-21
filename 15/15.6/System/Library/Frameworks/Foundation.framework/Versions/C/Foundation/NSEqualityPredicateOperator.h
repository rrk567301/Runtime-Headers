@interface NSEqualityPredicateOperator : NSPredicateOperator {
    char _negate;
    unsigned long long _options;
}

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)options;
- (id)predicateFormat;
- (void)_setOptions:(unsigned long long)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 negate:(char)a2;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 negate:(char)a2 options:(unsigned long long)a3;
- (char)isNegation;
- (char)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)setNegation:(char)a0;

@end
