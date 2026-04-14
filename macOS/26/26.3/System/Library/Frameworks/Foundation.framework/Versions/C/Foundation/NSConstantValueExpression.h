@interface NSConstantValueExpression : NSExpression {
    id constantValue;
}

+ (BOOL)supportsSecureCoding;

- (id)expressionValueWithObject:(id)a0;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)initWithObject:(id)a0;
- (id)predicateFormat;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)constantValue;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
