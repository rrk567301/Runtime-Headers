@interface NSStringPredicateOperator : NSPredicateOperator {
    unsigned long long _flags;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)options;
- (void)_setOptions:(unsigned long long)a0;
- (id)_modifierString;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2;
- (unsigned long long)flags;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
