@interface LUIWindow : NSWindow

@property BOOL canBecomeKey;
@property id target;
@property SEL action;

- (void)sendEvent:(id)a0;
- (void)center;
- (void)dealloc;
- (void)setAlphaValue:(double)a0;
- (void)setLevel:(long long)a0;
- (id)description;
- (id)accessibilityTitle;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (void)setIsSuperSticky;

@end
