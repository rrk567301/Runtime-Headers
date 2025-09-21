@class NSFont, LPPointUnit, LPVisualMediaViewStyle, LPContactsBadgeStyle, LPCaptionBarStyle, NSColor, LPAppearanceDependentValue, LPQuotedTextViewStyle, LPIndeterminateProgressSpinnerStyle, LPLinkRendererSizeClassParameters, LPImageViewStyle, LPTapToLoadViewStyle;

@interface LPTheme : NSObject {
    long long _style;
    unsigned long long _sizeClass;
    LPLinkRendererSizeClassParameters *_sizeClassParameters;
    long long _platform;
    char _isFallbackIcon;
    char _hasButton;
    double _leadingScalingFactor;
}

@property (retain, nonatomic) LPPointUnit *cornerRadius;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *highlightColor;
@property (retain, nonatomic) LPAppearanceDependentValue *highlightCompositingFilter;
@property (readonly, nonatomic) LPCaptionBarStyle *captionBar;
@property (readonly, nonatomic) LPQuotedTextViewStyle *quotedText;
@property (readonly, nonatomic) LPImageViewStyle *mediaImage;
@property (readonly, nonatomic) LPImageViewStyle *placeholderImage;
@property (readonly, nonatomic) LPVisualMediaViewStyle *mediaVideo;
@property (retain, nonatomic) NSColor *mediaBackgroundColor;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaTopCaptionBar;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaBottomCaptionBar;
@property (readonly, nonatomic) LPTapToLoadViewStyle *tapToLoad;
@property (readonly, nonatomic) NSFont *domainNameIndicatorFont;
@property (readonly, nonatomic) NSFont *domainNameIndicatorIconFont;
@property (readonly, nonatomic) LPImageViewStyle *backgroundImage;
@property (readonly, nonatomic) LPContactsBadgeStyle *contactsBadgeStyle;
@property (readonly, nonatomic) LPIndeterminateProgressSpinnerStyle *progressSpinner;
@property (retain, nonatomic) LPPointUnit *maximumWidth;
@property (nonatomic) double widthFractionForTallMedia;

+ (id)secondaryLabelColor;
+ (void)addClient:(id)a0;
+ (void)removeClient:(id)a0;
+ (double)badgeIconSizeInPoints;
+ (id)defaultBackgroundColorForPlatform:(long long)a0;
+ (double)disabledButtonOpacity;
+ (id)iconPlatterCornerRadius;
+ (id)iconPlatterPaddingForReason:(long long)a0;
+ (void)invalidateThemeCache;
+ (double)largestIconSizeInPoints;
+ (double)placeholderIconSizeInPoints;
+ (long long)platformForView:(id)a0;
+ (id)primaryLabelColor;
+ (id)regularTheme;
+ (id)themeWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3 sizeClassParameters:(id)a4 hasButton:(char)a5;

- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)CSSTextForThemeProperty:(id)a0;
- (id)CSSTextForProperty:(id)a0 withValue:(id)a1;
- (void)_adjustForAppleMusicCollaborativePlaylistStyle;
- (void)_adjustForEnrichedBusinessChatStyle;
- (void)_adjustForStyleWithFullWidthBottomButton;
- (void)adjustForStyle;
- (id)initWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3 sizeClassParameters:(id)a4 hasButton:(char)a5;
- (id)valueForThemeProperty:(id)a0;

@end
