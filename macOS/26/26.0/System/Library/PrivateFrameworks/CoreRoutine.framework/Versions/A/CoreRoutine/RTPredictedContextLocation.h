@class RTLocationOfInterest;

@interface RTPredictedContextLocation : RTPredictedContext <NSCopying>

@property (readonly, nonatomic) RTLocationOfInterest *locationOfInterest;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocationOfInterest:(id)a0 dateInterval:(id)a1 predictionSources:(id)a2 probability:(double)a3;

@end
