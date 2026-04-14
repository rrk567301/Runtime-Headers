@interface WFAirplaneModeTrigger : WFTrigger

@property (nonatomic) BOOL onEnable;
@property (nonatomic) BOOL onDisable;

+ (BOOL)supportsSecureCoding;
+ (id)tintColor;
+ (id)localizedDisplayName;
+ (BOOL)isUserInitiated;
+ (long long)triggerBacking;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)onIcon;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)offIconTintColor;
+ (id)onLabel;
+ (id)offLabel;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
