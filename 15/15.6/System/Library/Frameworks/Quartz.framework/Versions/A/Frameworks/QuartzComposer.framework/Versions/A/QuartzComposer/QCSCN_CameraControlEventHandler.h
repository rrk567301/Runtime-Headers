@interface QCSCN_CameraControlEventHandler : QCSCN_EventHandler {
    id _dReserved;
}

@property char gimbalLockMode;
@property struct _SCNVector3 { double x0; double x1; double x2; } gimbalLockVector;
@property char enableInertia;
@property double friction;
@property char automaticCameraTarget;
@property struct _SCNVector3 { double x0; double x1; double x2; } cameraTarget;

- (void)dealloc;
- (id)init;
- (char)magnifyWithEvent:(id)a0;
- (char)mouseDown:(id)a0;
- (char)mouseDragged:(id)a0;
- (char)mouseUp:(id)a0;
- (char)rotateWithEvent:(id)a0;
- (char)scrollWheel:(id)a0;
- (void)viewWillDraw;
- (double)zoomFactor;
- (void)setZoomFactor:(double)a0;
- (void)cameraDidChange;
- (void)_beginTranslateAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)zoomBy:(float)a0 animate:(char)a1;
- (void)_onInertiaTimer;
- (void)sceneWillChange;
- (void)zoomBy:(float)a0;
- (void)_didDragTo:(struct CGPoint { double x0; double x1; })a0;
- (char)_freeCameraActivated;
- (void)_resetFreeViewCamera;
- (void)_rotateWithDrag:(struct CGPoint { double x0; double x1; })a0 mode:(int)a1 stickyAxis:(int)a2;
- (float)_scrollWheelMultiplier;
- (void)_startBrowsingIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)_stopInertiaIfNeeded;
- (void)_switchToFreeViewCamera;
- (void)_translateTo:(struct CGPoint { double x0; double x1; })a0;
- (float)_translationCoef;
- (void)cameraWillChange;
- (void)endDragging;
- (void)endDraggingWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (struct _SCNVector3 { double x0; double x1; double x2; })frontVector;
- (char)isViewingAnObject;
- (void)rotateOf:(double)a0;
- (void)sceneDidChange;
- (void)translateByX:(float)a0 Y:(float)a1 Z:(float)a2;
- (void)updateCameraTargetIfNeeded;
- (struct C3DSphere { double x0; struct _SCNVector3 { double x0; double x1; double x2; } x1; })viewedObjectSphere;
- (char)wantsRedraw;

@end
