@class NCServiceViewService;

@interface NCServiceWindow : NSPanel

@property (weak) NCServiceViewService *viewService;

- (void).cxx_destruct;
- (char)_shouldAutoFlattenLayerTree;
- (void)_updateCursorRectsDueToResigningKey;
- (char)canBecomeKeyWindow;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)screen;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(char)a1;
- (void)printViews;

@end
