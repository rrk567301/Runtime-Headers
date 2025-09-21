@class CTEnhancedLinkQualityMetric;

@interface CTXPCGetEnhancedVoiceLinkQualityMetricResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTEnhancedLinkQualityMetric *linkQuality;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithEnhancedLinkQualityMetric:(id)a0;

@end
