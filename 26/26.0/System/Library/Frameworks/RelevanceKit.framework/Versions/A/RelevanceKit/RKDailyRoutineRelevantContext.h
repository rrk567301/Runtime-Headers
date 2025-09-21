@interface RKDailyRoutineRelevantContext : RKRelevantContext

@property (readonly, nonatomic) long long situation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSituation:(long long)a0;
- (id)analyticsDescription;

@end
