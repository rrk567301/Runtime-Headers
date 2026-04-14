@class NSExpression, NSVariableExpression;

@interface NSVariableAssignmentExpression : NSExpression {
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}

+ (BOOL)supportsSecureCoding;

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
- (id)assignmentVariable;
- (id)initWithAssignmentExpression:(id)a0 expression:(id)a1;
- (id)initWithAssignmentVariable:(id)a0 expression:(id)a1;
- (id)subexpression;

@end
