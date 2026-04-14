@class MXAverage;

@interface MXDisplayMetric : MXMetric

@property (readonly) MXAverage *averagePixelLuminance;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithAveragePictureLevel:(id)a0;

@end
