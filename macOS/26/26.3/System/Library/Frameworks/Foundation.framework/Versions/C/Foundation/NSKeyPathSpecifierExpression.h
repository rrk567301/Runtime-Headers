@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression {
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)keyPath;
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
