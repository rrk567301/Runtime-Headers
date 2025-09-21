@interface MLOptimizationHints : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double hotHandDuration;
@property (nonatomic) long long reshapeFrequency;
@property (nonatomic) long long specializationStrategy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)specializationStrategyToString:(long long)a0;
- (id)reshapeFrequencyToString:(long long)a0;

@end
