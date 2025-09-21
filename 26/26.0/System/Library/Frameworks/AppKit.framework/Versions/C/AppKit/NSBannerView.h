@class NSHardPocketView, _NSBannerDecorationView, NSVisualEffectView;

@interface NSBannerView : NSView {
    unsigned long long _dividerPosition;
    NSVisualEffectView *_gladeBlurView;
    NSHardPocketView *_solariumBlurView;
    _NSBannerDecorationView *_decorationView;
    BOOL _drawsBackground;
    BOOL _contiguousWithTitlebar;
    long long _scrollPocketCount;
}

@property (readonly) NSVisualEffectView *_blurView;
@property long long scrollPocketCount;
@property unsigned long long bannerStyle;
@property unsigned long long dividerPosition;
@property (getter=isContiguousWithTitlebar) BOOL contiguousWithTitlebar;

+ (double)_heightOfStyle:(unsigned long long)a0;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setDrawsBackground:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)drawsBackground;
- (void)layout;
- (void)encodeWithCoder:(id)a0;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)didChangeValueForKey:(id)a0;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (id)_preferredAppearance;
- (long long)_scrollPocketElementStyle;
- (BOOL)_shouldDescendantsContributeToScrollPocket;
- (void)decrementScrollPocketCount;
- (void)incrementScrollPocketCount;

@end
