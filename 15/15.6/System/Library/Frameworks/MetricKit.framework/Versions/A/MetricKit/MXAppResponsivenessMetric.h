@class MXHistogram;

@interface MXAppResponsivenessMetric : MXMetric

@property (readonly) MXHistogram *histogrammedApplicationHangTime;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithAppResponsivenessData:(id)a0;

@end
