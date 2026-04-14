@class NSVisualEffectView;

@interface SOInputVibrantView : NSView

@property (retain, nonatomic) NSVisualEffectView *blurView;
@property (nonatomic) BOOL drawBorder;

- (void)updateLayer;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)_commonInitInputLineBackground;
- (void)setToDefaultAppearance;
- (void)setupBlurView;

@end
