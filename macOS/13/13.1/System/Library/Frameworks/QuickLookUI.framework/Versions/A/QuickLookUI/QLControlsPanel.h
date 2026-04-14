@interface QLControlsPanel : QLPreviewHUDWindow

+ (Class)backgroundViewClass;

- (BOOL)accessibilityIsIgnored;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_qlControllerCandidateForPreviewPanel:(id)a0;
- (BOOL)_qlIgnoreWindowForPreviewPanel:(id)a0;

@end
