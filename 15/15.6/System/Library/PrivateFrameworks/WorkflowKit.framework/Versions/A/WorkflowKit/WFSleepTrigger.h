@interface WFSleepTrigger : WFTrigger

@property (nonatomic) unsigned long long selection;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (char)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (char)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (char)hasValidConfiguration;

@end
