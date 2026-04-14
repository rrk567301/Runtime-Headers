@interface NSConstantValueExpression : NSExpression {
    id constantValue;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (id)constantValue;
- (unsigned long long)expressionType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)predicateFormat;
- (unsigned long long)hash;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)expressionValueWithObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
