@interface NIHomePassiveSensingConfiguration : NIConfiguration

@property long long minimumPreferredUpdatedRate;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (BOOL)canUpdateToConfiguration:(id)a0;
- (id)descriptionInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
