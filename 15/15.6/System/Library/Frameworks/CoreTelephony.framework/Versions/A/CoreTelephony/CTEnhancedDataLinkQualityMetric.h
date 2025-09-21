@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric

@property (nonatomic) long long metricType;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 enhancedLinkQuality:(id)a1;

@end
