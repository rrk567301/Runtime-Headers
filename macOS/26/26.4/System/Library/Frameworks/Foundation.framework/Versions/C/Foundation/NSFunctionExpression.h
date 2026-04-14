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
- (SEL)selector;
- (unsigned long long)expressionType;
- (BOOL)_allowsEvaluation;
- (id)arguments;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)allowEvaluation;
- (id)predicateFormat;
- (id)function;
- (unsigned long long)hash;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithSelector:(SEL)a0 argumentArray:(id)a1;
- (BOOL)_shouldUseParensWithDescription;
- (id)operand;
- (id)binaryOperatorForSelector;
- (id)initWithExpressionType:(unsigned long long)a0 operand:(id)a1 selector:(SEL)a2 argumentArray:(id)a3;
- (id)initWithTarget:(id)a0 selectorName:(id)a1 arguments:(id)a2;
- (BOOL)isSelectorAllowed:(SEL)a0;

@end
