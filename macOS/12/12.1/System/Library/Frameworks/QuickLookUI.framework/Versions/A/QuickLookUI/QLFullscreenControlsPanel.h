@class QLFullscreenController;

@interface QLFullscreenControlsPanel : QLControlsPanel

@property QLFullscreenController *fullscreenController;

- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (double)backingScaleFactor;
- (BOOL)worksWhenModal;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_qlControllerCandidateForPreviewPanel:(id)a0;
- (BOOL)_qlIgnoreWindowForPreviewPanel:(id)a0;

@end
