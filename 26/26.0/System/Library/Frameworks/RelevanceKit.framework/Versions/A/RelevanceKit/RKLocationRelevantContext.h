@class CLRegion;

@interface RKLocationRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) CLRegion *region;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRegion:(id)a0;
- (id)analyticsDescription;

@end
