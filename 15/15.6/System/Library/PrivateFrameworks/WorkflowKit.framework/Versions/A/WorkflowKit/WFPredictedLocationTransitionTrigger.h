@interface WFPredictedLocationTransitionTrigger : WFTrigger

@property (nonatomic) unsigned long long destinationType;
@property (nonatomic) unsigned long long minutesBefore;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (char)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (char)hasValidConfiguration;

@end
