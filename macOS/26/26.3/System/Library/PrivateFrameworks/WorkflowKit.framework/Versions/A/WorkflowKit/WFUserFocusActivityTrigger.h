@class NSString, WFColor;

@interface WFUserFocusActivityTrigger : WFTrigger <WFBinaryTrigger>

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) NSString *activityUniqueIdentifier;
@property (retain, nonatomic) NSString *activitySemanticIdentifier;
@property (retain, nonatomic) NSString *activityGlyphName;
@property (retain, nonatomic) WFColor *activityTintColor;
@property (nonatomic) BOOL onEnable;
@property (nonatomic) BOOL onDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)tintColor;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (long long)triggerBacking;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;

- (id)uniqueIdentifier;
- (id)localizedDisplayName;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithActivity:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)offIcon;
- (id)displayGlyph;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (BOOL)hasValidConfiguration;
- (id)localizedDisplayExplanation;
- (id)onIcon;

@end
