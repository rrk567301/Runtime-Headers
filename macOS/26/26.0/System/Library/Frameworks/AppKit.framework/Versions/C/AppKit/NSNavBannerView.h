@class NSBannerView;

@interface NSNavBannerView : NSView {
    NSBannerView *_bannerView;
    long long _bannerType;
}

@property long long bannerType;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_commonInit;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (unsigned long long)_currentBannerStyle;
- (id)_preferredAppearance;

@end
