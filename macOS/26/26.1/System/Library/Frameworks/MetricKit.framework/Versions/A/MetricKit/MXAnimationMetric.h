@class NSMeasurement;

@interface MXAnimationMetric : MXMetric

@property (readonly) NSMeasurement *scrollHitchTimeRatio;
@property (readonly) NSMeasurement *hitchTimeRatio;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGlitchTimeRatio:(id)a0;
- (id)initWithHitchTimeRatio:(id)a0 perceivedHitchTimeRatio:(id)a1;

@end
