@class CLRegion;

@interface RKLocationRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) CLRegion *region;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRegion:(id)a0;
- (id)analyticsDescription;

@end
