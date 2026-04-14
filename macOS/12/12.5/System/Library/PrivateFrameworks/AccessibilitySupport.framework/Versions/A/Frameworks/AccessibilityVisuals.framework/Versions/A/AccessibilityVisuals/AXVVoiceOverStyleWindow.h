@class NSVisualEffectView;

@interface AXVVoiceOverStyleWindow : AXVWindow

@property (weak, nonatomic) NSVisualEffectView *_visualEffectView;
@property (nonatomic) BOOL isHighContrast;

- (void).cxx_destruct;
- (void)removeView:(id)a0;
- (void)addView:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)_updateStyle;
- (void)showWindow;
- (void)hideWindow;
- (void)_moveWindowIntoSharedSpace;
- (id)_maskImageWithCornerRadius:(double)a0;
- (void)setupVisualStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameWithinVoiceOverStyleBorder;
- (struct CGPoint { double x0; double x1; })windowOriginToCenterContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
