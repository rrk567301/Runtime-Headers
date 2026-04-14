@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long keyType;

+ (id)constraintWithInt64Keys;
+ (id)constraintWithStringKeys;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyType:(long long)a0;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (id)description;

@end
