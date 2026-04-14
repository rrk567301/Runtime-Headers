@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)_keypathsForDerivedPropertyValidation:(id *)a0;
- (id)_mapKVCOperatorsToFunctionsInContext:(id)a0;
- (id)minimalFormInContext:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)allowEvaluation;
- (SEL)selector;
- (id)predicateFormat;
- (id)arguments;
- (BOOL)_allowsEvaluation;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)function;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_shouldUseParensWithDescription;
- (id)operand;
- (id)initWithSelector:(SEL)a0 argumentArray:(id)a1;
- (id)binaryOperatorForSelector;
- (id)initWithExpressionType:(unsigned long long)a0 operand:(id)a1 selector:(SEL)a2 argumentArray:(id)a3;
- (id)initWithTarget:(id)a0 selectorName:(id)a1 arguments:(id)a2;
- (BOOL)isSelectorAllowed:(SEL)a0;

@end
