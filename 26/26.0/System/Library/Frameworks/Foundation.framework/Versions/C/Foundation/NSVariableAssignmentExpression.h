@class NSExpression, NSVariableExpression;

@interface NSVariableAssignmentExpression : NSExpression {
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}

+ (BOOL)supportsSecureCoding;

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
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)assignmentVariable;
- (id)initWithAssignmentExpression:(id)a0 expression:(id)a1;
- (id)initWithAssignmentVariable:(id)a0 expression:(id)a1;
- (id)subexpression;

@end
