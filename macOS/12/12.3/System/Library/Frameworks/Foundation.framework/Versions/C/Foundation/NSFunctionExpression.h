@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (SEL)selector;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)function;
- (id)arguments;
- (void)allowEvaluation;
- (BOOL)_allowsEvaluation;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)predicateFormat;
- (id)initWithTarget:(id)a0 selectorName:(id)a1 arguments:(id)a2;
- (id)initWithSelector:(SEL)a0 argumentArray:(id)a1;
- (id)operand;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithExpressionType:(unsigned long long)a0 operand:(id)a1 selector:(SEL)a2 argumentArray:(id)a3;
- (id)binaryOperatorForSelector;

@end
