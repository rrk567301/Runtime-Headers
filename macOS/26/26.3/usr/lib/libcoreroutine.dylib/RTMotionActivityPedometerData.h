@class NSDateInterval;

@interface RTMotionActivityPedometerData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long numberOfSteps;
@property (readonly, nonatomic) double distance;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 numberOfSteps:(unsigned long long)a1 distance:(double)a2;

@end
