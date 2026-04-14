@interface QLPreviewPathOverlayController : QLPreviewTextOverlayController

@property (retain) id eventMonitor;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hiddenFrame;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)setShowOverlay:(BOOL)a0;
- (void)_activateEventMonitor;
- (BOOL)_hasPathString;
- (void)createOverlay;
- (void)setPathString:(id)a0;
- (void)updateVisibleFrame;

@end
