@interface WFSleepTrigger : WFTrigger

@property (nonatomic) unsigned long long selection;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (long long)triggerBacking;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
