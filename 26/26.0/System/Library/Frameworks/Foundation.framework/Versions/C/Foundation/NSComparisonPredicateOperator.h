@interface NSComparisonPredicateOperator : NSPredicateOperator {
    unsigned long long _variant;
    unsigned long long _options;
}

+ (BOOL)supportsSecureCoding;

- (id)minimalFormInContext:(id)a0 ofPredicate:(id)a1;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)options;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)variant;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2 options:(unsigned long long)a3;

@end
