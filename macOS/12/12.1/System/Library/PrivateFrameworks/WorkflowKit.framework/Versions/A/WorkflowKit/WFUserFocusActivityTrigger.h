@class NSString, WFColor;

@interface WFUserFocusActivityTrigger : WFTrigger

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) NSString *activityUniqueIdentifier;
@property (retain, nonatomic) NSString *activitySemanticIdentifier;
@property (retain, nonatomic) NSString *activityGlyphName;
@property (retain, nonatomic) WFColor *activityTintColor;
@property (nonatomic) BOOL onEnable;
@property (nonatomic) BOOL onDisable;

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
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedDisplayName;
- (id)initWithActivity:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)displayGlyph;
- (id)localizedDisplayExplanation;
- (BOOL)hasValidConfiguration;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;

@end
