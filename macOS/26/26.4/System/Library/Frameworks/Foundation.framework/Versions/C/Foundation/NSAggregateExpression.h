@interface NSAggregateExpression : NSExpression {
    id _collection;
}

+ (BOOL)supportsSecureCoding;

- (id)constantValue;
- (id)collection;
- (unsigned long long)expressionType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)allowEvaluation;
- (id)predicateFormat;
- (unsigned long long)hash;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithCollection:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
