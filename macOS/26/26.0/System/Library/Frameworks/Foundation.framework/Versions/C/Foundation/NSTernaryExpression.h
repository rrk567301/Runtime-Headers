@class NSPredicate, NSExpression;

@interface NSTernaryExpression : NSExpression {
    NSPredicate *_predicate;
    NSExpression *_trueExpression;
    NSExpression *_falseExpression;
}

+ (BOOL)supportsSecureCoding;

- (id)_keypathsForDerivedPropertyValidation:(id *)a0;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)allowEvaluation;
- (void)dealloc;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predicate;
- (BOOL)isEqual:(id)a0;
- (id)falseExpression;
- (id)initWithPredicate:(id)a0 trueExpression:(id)a1 falseExpression:(id)a2;
- (id)trueExpression;

@end
