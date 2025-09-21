@class NSString;

@interface RTPredictedContextWorkout : RTPredictedContext <NSCopying>

@property (readonly, nonatomic) long long workoutActivityType;
@property (readonly) NSString *sourceBundleIdentifier;
@property (readonly, nonatomic) unsigned long long workoutLocationType;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 predictionSources:(id)a1 probability:(double)a2 sourceBundleIdentifier:(id)a3 workoutActivityType:(long long)a4 workoutLocationType:(unsigned long long)a5;

@end
