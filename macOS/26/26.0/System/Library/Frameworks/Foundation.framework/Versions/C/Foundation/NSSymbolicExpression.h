@class NSString;

@interface NSSymbolicExpression : NSExpression {
    NSString *_token;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)dealloc;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)constantValue;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
