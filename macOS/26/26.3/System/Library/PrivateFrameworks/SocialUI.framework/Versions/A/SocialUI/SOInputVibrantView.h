@class NSVisualEffectView;

@interface SOInputVibrantView : NSView

@property (retain, nonatomic) NSVisualEffectView *blurView;
@property (nonatomic) BOOL drawBorder;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateLayer;
- (id)initWithCoder:(id)a0;
- (BOOL)allowsVibrancy;
- (BOOL)wantsUpdateLayer;
- (void)_commonInitInputLineBackground;
- (void)setToDefaultAppearance;
- (void)setupBlurView;

@end
