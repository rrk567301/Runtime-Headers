@class NSMeasurement;

@interface MXAnimationMetric : MXMetric

@property (readonly) NSMeasurement *scrollHitchTimeRatio;
@property (readonly) NSMeasurement *hitchTimeRatio;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithGlitchTimeRatio:(id)a0;
- (id)initWithHitchTimeRatio:(id)a0 perceivedHitchTimeRatio:(id)a1;

@end
