@interface IRMediaBundle : IRBundle

@property (readonly, nonatomic) long long bundleType;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleType:(long long)a0 andIdentifier:(id)a1;

@end
