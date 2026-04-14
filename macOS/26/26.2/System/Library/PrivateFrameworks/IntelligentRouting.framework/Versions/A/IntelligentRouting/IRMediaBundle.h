@interface IRMediaBundle : IRBundle

@property (readonly, nonatomic) long long bundleType;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithBundleType:(long long)a0 andIdentifier:(id)a1;

@end
