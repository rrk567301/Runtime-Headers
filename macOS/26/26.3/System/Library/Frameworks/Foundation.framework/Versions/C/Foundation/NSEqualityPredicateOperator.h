@interface NSEqualityPredicateOperator : NSPredicateOperator {
    BOOL _negate;
    unsigned long long _options;
}

+ (BOOL)supportsSecureCoding;

- (void)_setOptions:(unsigned long long)a0;
- (void)setNegation:(BOOL)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)predicateFormat;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 negate:(BOOL)a2;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 negate:(BOOL)a2 options:(unsigned long long)a3;
- (BOOL)isNegation;
- (unsigned long long)options;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
