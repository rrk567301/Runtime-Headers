@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)localizedDisplayName;
+ (BOOL)isUserInitiated;
+ (long long)triggerBacking;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;
+ (id)onIcon;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)offIconTintColor;
+ (id)onLabel;
+ (id)offLabel;
+ (id)displayGlyphHierarchicalColors;
+ (id)triggerWithSerializedData:(id)a0;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDisplayName;
- (id)serializedData;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (id)localizedDisplayExplanation;
- (BOOL)hasValidConfiguration;
- (id)displayGlyph;
- (double)displayGlyphCornerRadius;
- (void)configureWithConfiguration:(id)a0;
- (id)displayGlyphHierarchicalColors;

@end
