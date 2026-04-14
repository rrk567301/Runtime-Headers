@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)localizedDisplayName;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)offLabel;
+ (id)onIcon;
+ (id)onLabel;
+ (id)displayGlyph;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (BOOL)isSupportedOnThisDevice;
+ (double)displayGlyphCornerRadius;
+ (id)onIconTintColor;
+ (id)offIconTintColor;
+ (id)triggerWithSerializedData:(id)a0;
+ (id)displayGlyphHierarchicalColors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDisplayName;
- (id)serializedData;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)displayGlyph;
- (id)localizedDisplayExplanation;
- (BOOL)hasValidConfiguration;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (double)displayGlyphCornerRadius;
- (void)configureWithConfiguration:(id)a0;
- (id)displayGlyphHierarchicalColors;

@end
