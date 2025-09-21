@interface _EXSceneWindow : NSWindow

@property (readonly) char invalidated;

- (id)description;
- (void)invalidate;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (void)orderFrontRegardless;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;

@end
