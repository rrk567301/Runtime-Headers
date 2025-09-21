@class CLRegion;

@interface LNLocationRelevantContext : LNRelevantContext

@property (readonly, copy, nonatomic) CLRegion *region;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegion:(id)a0;
- (id)analyticsDescription;
- (id)asCondition;

@end
