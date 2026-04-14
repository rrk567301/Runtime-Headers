@interface _OSLastLockPredictorOutput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long confidenceLevel;
@property (nonatomic) double confidenceValue;
@property (nonatomic) double predictedDuration;
@property (nonatomic) long long outputReason;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)confidenceLevelString;
- (id)confidenceValueString;
- (id)initInvalidOutput;
- (id)initWithConfidenceLevel:(long long)a0 andConfidenceValue:(double)a1 andPredictedDuration:(double)a2 andReason:(long long)a3;
- (id)initWithConfidenceValue:(double)a0 andRelaxedThreshold:(double)a1 andStrictThreshold:(double)a2 andPredictedDuration:(double)a3 andReason:(long long)a4;
- (id)outputReasonString;
- (id)predictedDurationString;

@end
