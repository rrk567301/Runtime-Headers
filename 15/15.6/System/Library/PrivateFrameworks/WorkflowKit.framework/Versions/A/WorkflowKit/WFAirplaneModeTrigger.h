@interface WFAirplaneModeTrigger : WFTrigger

@property (nonatomic) char onEnable;
@property (nonatomic) char onDisable;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (id)tintColor;
+ (char)isUserInitiated;
+ (char)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (char)hasValidConfiguration;

@end
