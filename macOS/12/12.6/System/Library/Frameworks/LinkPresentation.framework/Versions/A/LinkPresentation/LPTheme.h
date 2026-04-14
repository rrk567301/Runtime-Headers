@class NSFont, LPPointUnit, LPContactsBadgeStyle, LPCaptionBarStyle, LPVideoViewStyle, NSColor, LPQuotedTextViewStyle, LPImageViewStyle, LPTapToLoadViewStyle;

@interface LPTheme : NSObject {
    long long _style;
    unsigned long long _sizeClass;
    long long _platform;
    BOOL _isFallbackIcon;
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
@property (retain, nonatomic) LPPointUnit *maximumWidth;
@property (retain, nonatomic) LPPointUnit *maximumIntrinsicHeight;
@property (nonatomic) double widthFractionForTallMedia;

+ (id)secondaryLabelColor;
+ (void)addClient:(id)a0;
+ (id)themeWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3;
+ (id)iconPlatterPaddingForReason:(long long)a0;
+ (id)iconPlatterCornerRadius;
+ (id)regularTheme;
+ (double)largestIconSizeInPoints;
+ (id)primaryLabelColor;
+ (void)invalidateThemeCache;

- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)CSSTextForThemeProperty:(id)a0;
- (id)initWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3;
- (void)adjustForStyle;
- (id)valueForThemeProperty:(id)a0;
- (id)CSSTextForProperty:(id)a0 withValue:(id)a1;

@end
