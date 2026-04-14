@interface NIHomePassiveSensingConfiguration : NIConfiguration

@property long long minimumPreferredUpdatedRate;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (BOOL)canUpdateToConfiguration:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;

@end
