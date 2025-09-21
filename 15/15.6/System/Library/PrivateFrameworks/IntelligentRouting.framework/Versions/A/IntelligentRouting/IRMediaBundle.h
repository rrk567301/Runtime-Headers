@interface IRMediaBundle : IRBundle

@property (readonly, nonatomic) long long bundleType;

+ (id)new;
+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleType:(long long)a0 andIdentifier:(id)a1;

@end
