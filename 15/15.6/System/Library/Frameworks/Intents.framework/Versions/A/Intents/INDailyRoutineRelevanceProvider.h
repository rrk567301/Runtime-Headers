@interface INDailyRoutineRelevanceProvider : INRelevanceProvider

@property (readonly) long long situation;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSituation:(long long)a0;

@end
