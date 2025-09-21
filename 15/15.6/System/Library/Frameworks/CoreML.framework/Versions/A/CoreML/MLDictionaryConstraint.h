@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long keyType;

+ (id)constraintWithInt64Keys;
+ (id)constraintWithStringKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyType:(long long)a0;
- (char)isAllowedValue:(id)a0 error:(id *)a1;

@end
