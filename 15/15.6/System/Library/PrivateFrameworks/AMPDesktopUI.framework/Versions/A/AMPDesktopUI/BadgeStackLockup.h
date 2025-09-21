@class NSColor, NSFont;

@interface BadgeStackLockup : NSView

@property (readonly, nonatomic) char showDigitalExtra;
@property (readonly, nonatomic) char showDigitalBooklet;
@property (readonly, nonatomic) char show4k;
@property (readonly, nonatomic) char showHDR;
@property (readonly, nonatomic) char showHD;
@property (readonly, nonatomic) char showVideo;
@property (readonly, nonatomic) char showHDSDCombo;
@property (readonly, nonatomic) char showVision;
@property (readonly, nonatomic) char showDolbyAudio;
@property (readonly, nonatomic) char showAtmos;
@property (readonly, nonatomic) char showURLExtra;
@property (readonly, nonatomic) char showClosedCaptioning;
@property (readonly, nonatomic) char showDigitalMaster;
@property (readonly, nonatomic) char showLossless;
@property (readonly, nonatomic) char showHiResLossless;
@property (readonly, nonatomic) char showSpatialAudio;
@property (nonatomic) char includeAudioBadges;
@property (nonatomic) char showsAudioBadges;
@property (copy, nonatomic) NSFont *actualFont;
@property (copy, nonatomic) NSColor *actualTextColor;
@property (nonatomic) unsigned long long visibleFlags;
@property (nonatomic) char useBulletSeparator;
@property (copy, nonatomic) NSFont *font;
@property (copy, nonatomic) NSColor *textColor;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)keyPathsForValuesInvalidatingConstraints;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init:(char)a0;
- (void)setNilValueForKey:(id)a0;
- (id)accessibilityTitle;
- (id)accessibilityValue;
- (void)commonInit;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)lastBaselineOffsetFromBottom;
- (void)updateConstraints;
- (Class)valueClassForBinding:(id)a0;
- (void)clearAllBadges;
- (id)propertyKeysForViewSpy;

@end
