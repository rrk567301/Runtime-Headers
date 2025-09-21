@interface QLControlsPanel : QLPreviewHUDWindow

+ (Class)backgroundViewClass;

- (char)accessibilityIsIgnored;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (char)_qlIgnoreWindowForPreviewPanel:(id)a0;
- (id)_qlControllerCandidateForPreviewPanel:(id)a0;

@end
