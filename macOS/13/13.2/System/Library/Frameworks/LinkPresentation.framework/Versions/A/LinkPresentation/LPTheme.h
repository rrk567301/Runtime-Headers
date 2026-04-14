@class NSFont, LPPointUnit, LPContactsBadgeStyle, LPCollaborationHandleStyle, LPCaptionBarStyle, LPVideoViewStyle, NSColor, LPQuotedTextViewStyle, LPLinkRendererSizeClassParameters, LPImageViewStyle, LPTapToLoadViewStyle;

@interface LPTheme : NSObject {
    long long _style;
    unsigned long long _sizeClass;
    LPLinkRendererSizeClassParameters *_sizeClassParameters;
    long long _platform;
    BOOL _isFallbackIcon;
    BOOL _hasButton;
    double _dynamicTypeLeadingScalingFactor;
}

@property (retain, nonatomic) LPPointUnit *cornerRadius;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *highlightColor;
@property (readonly, nonatomic) LPCaptionBarStyle *captionBar;
@property (readonly, nonatomic) LPQuotedTextViewStyle *quotedText;
@property (readonly, nonatomic) LPImageViewStyle *mediaImage;
@property (readonly, nonatomic) LPImageViewStyle *placeholderImage;
@property (readonly, nonatomic) LPVideoViewStyle *mediaVideo;
@property (retain, nonatomic) NSColor *mediaBackgroundColor;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaTopCaptionBar;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaBottomCaptionBar;
@property (readonly, nonatomic) LPTapToLoadViewStyle *tapToLoad;
@property (readonly, nonatomic) NSFont *domainNameIndicatorFont;
@property (readonly, nonatomic) NSFont *domainNameIndicatorIconFont;
@property (readonly, nonatomic) LPImageViewStyle *backgroundImage;
@property (readonly, nonatomic) LPContactsBadgeStyle *contactsBadgeStyle;
@property (readonly, nonatomic) LPCollaborationHandleStyle *collaborationHandleStyle;
@property (retain, nonatomic) LPPointUnit *maximumWidth;
@property (nonatomic) double widthFractionForTallMedia;

+ (id)secondaryLabelColor;
+ (void)addClient:(id)a0;
+ (id)regularTheme;
+ (double)badgeIconSizeInPoints;
+ (double)largestIconSizeInPoints;
+ (id)primaryLabelColor;
+ (id)themeWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3 sizeClassParameters:(id)a4 hasButton:(BOOL)a5;
+ (id)iconPlatterPaddingForReason:(long long)a0;
+ (id)iconPlatterCornerRadius;
+ (void)invalidateThemeCache;

- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3 sizeClassParameters:(id)a4 hasButton:(BOOL)a5;
- (void)adjustForStyle;
- (id)valueForThemeProperty:(id)a0;
- (id)CSSTextForThemeProperty:(id)a0;
- (id)CSSTextForProperty:(id)a0 withValue:(id)a1;

@end
