@interface NIHomePassiveSensingConfiguration : NIConfiguration

@property long long minimumPreferredUpdatedRate;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)descriptionInternal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canUpdateToConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
