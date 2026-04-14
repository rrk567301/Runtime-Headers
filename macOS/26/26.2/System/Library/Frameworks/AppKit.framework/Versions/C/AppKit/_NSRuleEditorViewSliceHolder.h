@class NSBannerView;

@interface _NSRuleEditorViewSliceHolder : NSView {
    NSBannerView *_bannerView;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)dealloc;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (id)_preferredAppearance;

@end
