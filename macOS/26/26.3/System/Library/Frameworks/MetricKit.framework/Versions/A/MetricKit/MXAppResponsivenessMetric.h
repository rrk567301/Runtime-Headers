@class MXHistogram;

@interface MXAppResponsivenessMetric : MXMetric

@property (readonly) MXHistogram *histogrammedApplicationHangTime;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAppResponsivenessData:(id)a0;
- (id)initWithAppResponsivenessHangData:(id)a0 spinData:(id)a1;

@end
