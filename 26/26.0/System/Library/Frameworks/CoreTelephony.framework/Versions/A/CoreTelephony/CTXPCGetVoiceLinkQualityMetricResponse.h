@class CTVoiceLinkQualityMetric;

@interface CTXPCGetVoiceLinkQualityMetricResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTVoiceLinkQualityMetric *linkQuality;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithVoiceLinkQualityMetric:(id)a0;

@end
