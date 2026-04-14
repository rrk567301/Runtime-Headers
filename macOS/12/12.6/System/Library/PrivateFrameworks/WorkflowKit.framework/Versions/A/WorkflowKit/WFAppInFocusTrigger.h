@class NSArray;

@interface WFAppInFocusTrigger : WFTrigger

@property (copy, nonatomic) NSArray *selectedBundleIdentifiers;
@property (nonatomic) BOOL onFocus;
@property (nonatomic) BOOL onBackground;

+ (BOOL)supportsSecureCoding;
+ (id)tintColor;
+ (id)localizedDisplayName;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)offLabel;
+ (id)onIcon;
+ (id)onLabel;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)onIconTintColor;
+ (id)offIconTintColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
