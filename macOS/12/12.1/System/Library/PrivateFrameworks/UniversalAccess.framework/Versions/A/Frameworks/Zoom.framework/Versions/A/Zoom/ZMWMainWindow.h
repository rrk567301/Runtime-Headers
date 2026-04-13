@class ZMWSplitScreenBorderView, ZMWZoomView, CALayer, ZMWShadowWindow, ZMWView, ZMWSnapshotView;

@interface ZMWMainWindow : ZMWWindow {
    ZMWView *_mouseDownLayer;
    ZMWZoomView *_zoomView;
    ZMWSnapshotView *_unzoomedView;
    ZMWSplitScreenBorderView *_splitBorderView;
    BOOL _wasVisibleBeforeResize;
    BOOL _isInResizeMode;
    CALayer *_previewLayer;
}

@property (readonly, nonatomic) ZMWShadowWindow *shadowWindow;
@property (readonly, nonatomic) BOOL isInPreviewMode;
@property (nonatomic) BOOL cursorHidden;
@property (nonatomic) struct CGSize { double x0; double x1; } zoomViewSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hide;
- (void)show;
- (void)refresh;
- (void)_setupLayers;
- (double)zoomFactor;
- (void)setZoomFactor:(double)a0 isSystemZoom:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })zoomCenterWindowPoint;
- (void)updateUserSettings;
- (void)_layoutDockedLayersForSize:(struct CGSize { double x0; double x1; })a0;
- (void)enableResizeMode:(BOOL)a0;
- (void)_updateUnzoomedView;
- (void)_setScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setZoomScreenFocusPoint:(struct CGPoint { double x0; double x1; })a0 windowFocusPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setZoomCenterPoint:(struct CGPoint { double x0; double x1; })a0 animationDuration:(double)a1;
- (void)moveFullyOnscreenWithDuration:(double)a0;
- (struct CGSize { double x0; double x1; })zoomViewSize;
- (void)setZoomViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)showPreview:(BOOL)a0 previewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animationDuration:(double)a2;
- (struct CGPoint { double x0; double x1; })zoomScreenFocusPoint;
- (BOOL)zoomViewContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleScreenResolutionChange;
- (void)handleMouseMoveEvent:(struct __CGEvent { } *)a0;
- (void)handleMouseDownEvent:(struct __CGEvent { } *)a0;
- (void)handleMouseUpEvent:(struct __CGEvent { } *)a0;
- (void)handleMouseDragEvent:(struct __CGEvent { } *)a0;

@end
