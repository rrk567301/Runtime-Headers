@interface NSComparisonPredicateOperator : NSPredicateOperator {
    unsigned long long _variant;
    unsigned long long _options;
}

+ (BOOL)supportsSecureCoding;

- (id)minimalFormInContext:(id)a0 ofPredicate:(id)a1;
- (unsigned long long)variant;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)predicateFormat;
- (unsigned long long)options;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2 options:(unsigned long long)a3;

@end
