@interface QCKeyFrameEditorWindow : NSWindow

- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)sendEvent:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)setHidesOnDeactivate:(BOOL)a0;

@end
