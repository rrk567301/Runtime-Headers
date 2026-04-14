@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression {
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;

- (id)keyPath;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)hash;
- (id)predicateFormat;
- (id)constantValue;
- (unsigned long long)expressionType;
- (id)initWithObject:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
