@class QLFullscreenController;

@interface QLFullscreenHUDWindow : NSWindow

@property (weak) QLFullscreenController *fullscreenController;

- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)backingScaleFactor;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)worksWhenModal;
- (BOOL)_qlIgnoreWindowForPreviewPanel:(id)a0;
- (id)_qlControllerCandidateForPreviewPanel:(id)a0;

@end
