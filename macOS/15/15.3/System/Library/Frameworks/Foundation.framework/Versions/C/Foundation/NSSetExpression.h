@class NSExpression;

@interface NSSetExpression : NSExpression {
    NSExpression *_left;
    NSExpression *_right;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)allowEvaluation;
- (id)predicateFormat;
- (id)rightExpression;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)initWithType:(unsigned long long)a0 leftExpression:(id)a1 rightExpression:(id)a2;
- (id)leftExpression;

@end
