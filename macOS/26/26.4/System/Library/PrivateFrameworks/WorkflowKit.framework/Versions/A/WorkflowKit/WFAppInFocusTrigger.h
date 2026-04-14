@class NSArray;

@interface WFAppInFocusTrigger : WFTrigger

@property (copy, nonatomic) NSArray *selectedBundleIdentifiers;
@property (nonatomic) BOOL onFocus;
@property (nonatomic) BOOL onBackground;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (id)tintColor;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanationWithContext:(id)a0;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
