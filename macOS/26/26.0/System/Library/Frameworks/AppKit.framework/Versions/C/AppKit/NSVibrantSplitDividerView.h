@class NSSplitDividerView, NSVisualEffectView;

@interface NSVibrantSplitDividerView : NSSplitDividerView {
    NSSplitDividerView *_innerDividerView;
    NSVisualEffectView *_effectView;
}

@property long long blendingMode;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)updateLayer;
- (void)setBackgroundColor:(id)a0;
- (BOOL)allowsVibrancy;
- (void)dealloc;
- (void)setOrientation:(long long)a0;
- (void)setStyle:(long long)a0;
- (id)_preferredAppearance;
- (id)initWithStyle:(long long)a0 orientation:(long long)a1;
- (BOOL)isVibrantDivider;
- (void)setThickness:(id)a0;

@end
