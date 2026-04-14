@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}

+ (BOOL)supportsSecureCoding;

- (id)_keypathsForDerivedPropertyValidation:(id *)a0;
- (id)minimalFormInContext:(id)a0;
- (id)collection;
- (id)predicate;
- (unsigned long long)expressionType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)allowEvaluation;
- (id)predicateFormat;
- (unsigned long long)hash;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)variable;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithExpression:(id)a0 usingIteratorExpression:(id)a1 predicate:(id)a2;
- (id)initWithExpression:(id)a0 usingIteratorVariable:(id)a1 predicate:(id)a2;
- (id)variableExpression;

@end
