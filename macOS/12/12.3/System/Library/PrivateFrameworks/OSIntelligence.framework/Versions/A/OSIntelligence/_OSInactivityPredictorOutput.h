@interface _OSInactivityPredictorOutput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long confidenceLevel;
@property (readonly, nonatomic) double confidenceValue;
@property (readonly, nonatomic) double predictedDuration;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)confidenceLevelString;
- (id)confidenceValueString;
- (id)predictedDurationString;
- (id)initInvalidOutput;
- (id)initWithConfidenceLevel:(long long)a0 andConfidenceValue:(double)a1 andPredictedDuration:(double)a2;
- (id)initWithConfidenceValue:(double)a0 andRelaxedThreshold:(double)a1 andStrictThreshold:(double)a2 andPredictedDuration:(double)a3;
- (void)adjustPredictedDurationWithStrictLeeway:(double)a0 andRelaxedLeeway:(double)a1;

@end
