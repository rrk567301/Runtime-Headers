@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (BOOL)requiresNotification;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)inputTypeDescriptionForClass:(Class)a0;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;
+ (Class)shortcutInputContentItemClass;
+ (id)triggerWithSerializedData:(id)a0;

- (id)uniqueIdentifier;
- (id)localizedDisplayName;
- (id)description;
- (id)init;
- (id)serializedData;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)suggestedActions;
- (BOOL)canEnable;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)offIcon;
- (id)displayGlyph;
- (double)displayGlyphCornerRadius;
- (id)displayGlyphHierarchicalColors;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (BOOL)hasValidConfiguration;
- (id)localizedDisplayExplanation;
- (id)onIcon;

@end
