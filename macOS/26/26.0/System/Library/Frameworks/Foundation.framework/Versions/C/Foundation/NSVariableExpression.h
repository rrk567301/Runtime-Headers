@class NSString;

@interface NSVariableExpression : NSExpression {
    NSString *_variable;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)variable;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
