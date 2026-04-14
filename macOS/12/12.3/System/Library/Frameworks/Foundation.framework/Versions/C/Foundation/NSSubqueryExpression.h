@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predicate;
- (void)allowEvaluation;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)predicateFormat;
- (id)collection;
- (id)initWithExpression:(id)a0 usingIteratorVariable:(id)a1 predicate:(id)a2;
- (id)variable;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithExpression:(id)a0 usingIteratorExpression:(id)a1 predicate:(id)a2;
- (id)variableExpression;

@end
