@class NCServiceViewService;

@interface NCServiceWindow : NSPanel

@property (weak) NCServiceViewService *viewService;

- (BOOL)canBecomeKeyWindow;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)screen;
- (BOOL)_shouldAutoFlattenLayerTree;
- (void)_updateCursorRectsDueToResigningKey;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (void)printViews;

@end
