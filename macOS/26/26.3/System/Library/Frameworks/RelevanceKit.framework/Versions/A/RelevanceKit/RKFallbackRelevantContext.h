@interface RKFallbackRelevantContext : RKRelevantContext

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)analyticsDescription;

@end
