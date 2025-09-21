@interface LACDTOGracePeriodState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) double maxThreshold;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) double duration;

+ (id)nullInstance;
+ (id)unlimitedGracePeriod;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTime:(double)a0 maxThreshold:(double)a1;

@end
