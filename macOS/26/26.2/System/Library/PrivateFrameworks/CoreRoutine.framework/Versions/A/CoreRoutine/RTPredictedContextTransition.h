@class NSArray;

@interface RTPredictedContextTransition : RTPredictedContext <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *predictedContextTransports;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPredictedContextTransports:(id)a0 predictedContextDateInterval:(id)a1 predictionSources:(id)a2 probability:(double)a3;

@end
