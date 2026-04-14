@class NSSet;

@interface WFSoundRecognitionTrigger : WFTrigger

@property (copy, nonatomic) NSSet *soundDetectionTypes;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (long long)triggerBacking;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasValidConfiguration;

@end
