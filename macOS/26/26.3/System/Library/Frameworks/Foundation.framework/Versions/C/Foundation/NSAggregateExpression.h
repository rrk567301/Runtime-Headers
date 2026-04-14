@interface NSAggregateExpression : NSExpression {
    id _collection;
}

+ (BOOL)supportsSecureCoding;

- (id)collection;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)initWithCollection:(id)a0;
- (void)allowEvaluation;
- (id)predicateFormat;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)constantValue;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
