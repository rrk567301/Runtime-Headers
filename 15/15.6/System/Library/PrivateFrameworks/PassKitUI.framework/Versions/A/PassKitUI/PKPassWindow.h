@interface PKPassWindow : NSWindow

@property (nonatomic) char floatingWindow;

- (char)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (unsigned long long)shadowOptionsForActiveAppearance:(char)a0;

@end
