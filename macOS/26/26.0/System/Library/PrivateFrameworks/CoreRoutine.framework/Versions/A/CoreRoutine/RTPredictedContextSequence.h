@class NSArray, RTPredictedContextDateInterval;

@interface RTPredictedContextSequence : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *predictedContexts;
@property (readonly, nonatomic) double probability;
@property (readonly, copy, nonatomic) RTPredictedContextDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *contexts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProbability:(double)a0 dateInterval:(id)a1 predictedContexts:(id)a2;

@end
