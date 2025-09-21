@interface LNDailyRoutineRelevantContext : LNRelevantContext

@property (readonly, nonatomic) long long situation;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSituation:(long long)a0;
- (id)analyticsDescription;
- (id)asCondition;

@end
