@interface NSAggregateExpression : NSExpression {
    id _collection;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)allowEvaluation;
- (id)initWithCollection:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)predicateFormat;
- (id)constantValue;
- (id)collection;

@end
