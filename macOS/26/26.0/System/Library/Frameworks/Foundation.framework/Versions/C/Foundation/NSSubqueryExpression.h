@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}

+ (BOOL)supportsSecureCoding;

- (id)_keypathsForDerivedPropertyValidation:(id *)a0;
- (id)minimalFormInContext:(id)a0;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)allowEvaluation;
- (void)dealloc;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)variable;
- (id)collection;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)predicate;
- (BOOL)isEqual:(id)a0;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithExpression:(id)a0 usingIteratorExpression:(id)a1 predicate:(id)a2;
- (id)initWithExpression:(id)a0 usingIteratorVariable:(id)a1 predicate:(id)a2;
- (id)variableExpression;

@end
