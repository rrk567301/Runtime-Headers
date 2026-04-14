@class NSString;

@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric <CTXPCLogging>

@property (nonatomic) long long metricType;
@property (readonly, nonatomic) NSString *ct_shortName;
@property (readonly, nonatomic) NSString *ct_shortDescription;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 enhancedLinkQuality:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
