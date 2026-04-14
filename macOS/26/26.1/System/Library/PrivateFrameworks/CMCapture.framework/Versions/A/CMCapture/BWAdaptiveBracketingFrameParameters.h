@interface BWAdaptiveBracketingFrameParameters : NSObject <NSSecureCoding> {
    double _evZeroRatio;
    int _integrationTimeInMicroseconds;
    float _gain;
    int _maxAGC;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double evZeroRatio;
@property (readonly, nonatomic) int integrationTimeInMicroseconds;
@property (readonly, nonatomic) double integrationTimeInSeconds;
@property (readonly, nonatomic) float gain;
@property (readonly, nonatomic) int maxAGC;

+ (id)frameParametersWithEVZeroRatio:(double)a0 integrationTimeInMicroseconds:(int)a1 gain:(float)a2 maxAGC:(int)a3;
+ (id)frameParametersWithEVZeroRatio:(double)a0 integrationTimeInSeconds:(double)a1 gain:(float)a2 maxAGC:(int)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
