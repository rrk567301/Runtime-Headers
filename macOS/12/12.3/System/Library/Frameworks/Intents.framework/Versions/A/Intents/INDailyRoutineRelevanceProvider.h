@interface INDailyRoutineRelevanceProvider : INRelevanceProvider

@property (readonly) long long situation;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSituation:(long long)a0;

@end
