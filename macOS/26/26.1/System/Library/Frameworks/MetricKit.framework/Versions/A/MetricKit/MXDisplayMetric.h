@class MXAverage;

@interface MXDisplayMetric : MXMetric

@property (readonly) MXAverage *averagePixelLuminance;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAveragePictureLevel:(id)a0;

@end
