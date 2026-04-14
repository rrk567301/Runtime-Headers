@interface MLOptimizationHints : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double hotHandDuration;
@property (nonatomic) long long reshapeFrequency;
@property (nonatomic) long long specializationStrategy;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)specializationStrategyToString:(long long)a0;
- (id)reshapeFrequencyToString:(long long)a0;

@end
