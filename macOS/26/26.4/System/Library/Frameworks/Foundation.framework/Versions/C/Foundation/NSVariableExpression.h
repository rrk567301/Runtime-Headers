@class NSString;

@interface NSVariableExpression : NSExpression {
    NSString *_variable;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (unsigned long long)expressionType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)predicateFormat;
- (unsigned long long)hash;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)variable;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
