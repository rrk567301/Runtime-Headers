@class NSSet;

@interface WFSoundRecognitionTrigger : WFTrigger

@property (copy, nonatomic) NSSet *soundDetectionTypes;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (char)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasValidConfiguration;

@end
