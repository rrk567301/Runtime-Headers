@interface MADExposureResult : MADResult

@property (readonly, nonatomic) double exposureScore;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithExposureScore:(double)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithExposureScore:(double)a0;

@end
