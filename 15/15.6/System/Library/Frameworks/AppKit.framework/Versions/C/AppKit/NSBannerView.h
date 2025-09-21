@class _NSBannerDecorationView, NSVisualEffectView;

@interface NSBannerView : NSView {
    unsigned long long _dividerPosition;
    NSVisualEffectView *_blurView;
    _NSBannerDecorationView *_decorationView;
    char _drawsBackground;
    char _contiguousWithTitlebar;
}

@property unsigned long long bannerStyle;
@property unsigned long long dividerPosition;
@property (getter=isContiguousWithTitlebar) char contiguousWithTitlebar;

+ (double)_heightOfStyle:(unsigned long long)a0;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (void)dealloc;
- (void)didChangeValueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (char)drawsBackground;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (id)_preferredAppearance;
- (void)_updateBlurViewIfNeeded;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setDrawsBackground:(char)a0;
- (void)viewDidMoveToWindow;

@end
