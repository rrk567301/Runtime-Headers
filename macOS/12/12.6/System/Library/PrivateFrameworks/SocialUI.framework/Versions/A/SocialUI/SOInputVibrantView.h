@class NSVisualEffectView;

@interface SOInputVibrantView : NSView

@property (retain, nonatomic) NSVisualEffectView *blurView;
@property (nonatomic) BOOL drawBorder;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonInitInputLineBackground;
- (void)setupBlurView;
- (void)setToDefaultAppearance;

@end
