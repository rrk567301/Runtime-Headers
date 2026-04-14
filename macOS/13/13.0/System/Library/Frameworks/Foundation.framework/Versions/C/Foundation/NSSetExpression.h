@class NSExpression;

@interface NSSetExpression : NSExpression {
    NSExpression *_left;
    NSExpression *_right;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)allowEvaluation;
- (id)predicateFormat;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)leftExpression;
- (id)rightExpression;
- (id)initWithType:(unsigned long long)a0 leftExpression:(id)a1 rightExpression:(id)a2;

@end
