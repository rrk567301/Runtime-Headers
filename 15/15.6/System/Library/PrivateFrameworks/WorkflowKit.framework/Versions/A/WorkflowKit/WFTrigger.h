@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

+ (id)localizedDisplayName;
+ (char)isUserInitiated;
+ (char)isAllowedToRunAutomatically;
+ (char)requiresNotification;
+ (long long)triggerBacking;
+ (id)inputTypeDescriptionForClass:(Class)a0;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (char)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;
+ (id)triggerWithSerializedData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDisplayName;
- (id)serializedData;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)displayGlyph;
- (double)displayGlyphCornerRadius;
- (id)displayGlyphHierarchicalColors;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (char)hasValidConfiguration;
- (id)localizedDisplayExplanation;
- (Class)shortcutInputContentItemClass;

@end
