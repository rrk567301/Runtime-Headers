@interface QLPreviewPathOverlayController : QLPreviewTextOverlayController

@property (retain) id eventMonitor;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hiddenFrame;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)createOverlay;
- (void)setShowOverlay:(BOOL)a0;
- (void)_activateEventMonitor;
- (void)setPathString:(id)a0;
- (BOOL)_hasPathString;
- (void)updateVisibleFrame;

@end
