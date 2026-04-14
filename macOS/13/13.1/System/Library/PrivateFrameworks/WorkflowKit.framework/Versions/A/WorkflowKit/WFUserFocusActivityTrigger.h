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

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedDisplayName;
- (id)initWithActivity:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (id)localizedDisplayExplanation;
- (BOOL)hasValidConfiguration;
- (id)displayGlyph;

@end
