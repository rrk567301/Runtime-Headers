@interface QCSCN_CameraControlEventHandler : QCSCN_EventHandler {
    id _dReserved;
}

@property BOOL gimbalLockMode;
@property struct _SCNVector3 { double x0; double x1; double x2; } gimbalLockVector;
@property BOOL enableInertia;
@property double friction;
@property BOOL automaticCameraTarget;
@property struct _SCNVector3 { double x0; double x1; double x2; } cameraTarget;

- (void)dealloc;
- (id)init;
- (BOOL)mouseDown:(id)a0;
- (void)viewWillDraw;
- (BOOL)scrollWheel:(id)a0;
- (BOOL)mouseDragged:(id)a0;
- (BOOL)mouseUp:(id)a0;
- (BOOL)magnifyWithEvent:(id)a0;
- (BOOL)rotateWithEvent:(id)a0;
- (double)zoomFactor;
- (void)setZoomFactor:(double)a0;
- (void)rotateOf:(double)a0;
- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (BOOL)wantsRedraw;
- (void)_resetFreeViewCamera;
- (BOOL)_freeCameraActivated;
- (void)_switchToFreeViewCamera;
- (float)_translationCoef;
- (BOOL)isViewingAnObject;
- (void)zoomBy:(float)a0 animate:(BOOL)a1;
- (void)zoomBy:(float)a0;
- (void)translateByX:(float)a0 Y:(float)a1 Z:(float)a2;
- (void)_stopInertiaIfNeeded;
- (void)_onInertiaTimer;
- (void)endDraggingWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)_didDragTo:(struct CGPoint { double x0; double x1; })a0;
- (void)endDragging;
- (void)_startBrowsingIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (struct C3DSphere { double x0; struct _SCNVector3 { double x0; double x1; double x2; } x1; })viewedObjectSphere;
- (struct _SCNVector3 { double x0; double x1; double x2; })frontVector;
- (void)_beginTranslateAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_rotateWithDrag:(struct CGPoint { double x0; double x1; })a0 mode:(int)a1 stickyAxis:(int)a2;
- (void)_translateTo:(struct CGPoint { double x0; double x1; })a0;
- (void)updateCameraTargetIfNeeded;
- (float)_scrollWheelMultiplier;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint { double x0; double x1; })a0;

@end
