@class RTPredictedContextDateInterval, NSArray;

@interface RTPredictedContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double probability;
@property (readonly, copy, nonatomic) RTPredictedContextDateInterval *dateInterval;
@property (readonly, nonatomic) NSArray *predictionSources;

+ (unsigned long long)maskForSources:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredictedContextDateInterval:(id)a0 predictionSources:(id)a1 probability:(double)a2;

@end
