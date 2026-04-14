@interface NSAggregateExpression : NSExpression {
    id _collection;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCollection:(id)a0;
- (id)constantValue;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)predicateFormat;
- (id)initWithCoder:(id)a0;
- (unsigned long long)expressionType;
- (void)allowEvaluation;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)collection;
- (void)dealloc;

@end
