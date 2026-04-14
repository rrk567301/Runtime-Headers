@class NSString;

@interface NSSymbolicExpression : NSExpression {
    NSString *_token;
}

+ (BOOL)supportsSecureCoding;

- (id)constantValue;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)predicateFormat;
- (id)initWithCoder:(id)a0;
- (unsigned long long)expressionType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (void)dealloc;

@end
