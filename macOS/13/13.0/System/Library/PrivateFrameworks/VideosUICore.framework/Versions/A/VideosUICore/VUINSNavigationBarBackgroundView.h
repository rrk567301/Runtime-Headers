@class NSVisualEffectView;

@interface VUINSNavigationBarBackgroundView : NSView

@property (readonly, nonatomic) NSVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)isFlipped;
- (long long)_visualEffectMaterial;

@end
