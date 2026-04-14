@class NSString;

@interface NSSymbolicExpression : NSExpression {
    NSString *_token;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)predicateFormat;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)constantValue;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
