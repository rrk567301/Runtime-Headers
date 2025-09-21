@interface NLProbabilityInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) double log10Probability;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) unsigned long long probabilityFlags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLog10Probability:(double)a0 flags:(unsigned long long)a1;
- (id)initWithInvalidProbability;
- (id)initWithProbability:(double)a0 flags:(unsigned long long)a1;

@end
