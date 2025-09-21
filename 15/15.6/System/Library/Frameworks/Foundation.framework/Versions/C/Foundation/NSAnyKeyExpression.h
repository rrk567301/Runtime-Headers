@interface NSAnyKeyExpression : NSExpression

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (char)supportsSecureCoding;
+ (id)defaultInstance;
+ (char)_allowsEvaluation;

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predicateFormat;
- (id)_initPrivate;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;

@end
