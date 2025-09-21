@class NSDateInterval;

@interface RTMotionActivityPedometerData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long numberOfSteps;
@property (readonly, nonatomic) double distance;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 numberOfSteps:(unsigned long long)a1 distance:(double)a2;

@end
