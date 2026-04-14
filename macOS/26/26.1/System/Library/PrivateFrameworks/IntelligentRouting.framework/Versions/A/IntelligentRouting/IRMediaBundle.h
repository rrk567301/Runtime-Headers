@interface IRMediaBundle : IRBundle

@property (readonly, nonatomic) long long bundleType;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithBundleType:(long long)a0 andIdentifier:(id)a1;

@end
