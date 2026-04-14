@class UINSFullScreenWindowZoomController;

@interface UINSFullScreenWindow : UINSWindow {
    struct CGSize { double width; double height; } _initialResizeSize;
    UINSFullScreenWindowZoomController *_fullScreenWindowZoomController;
}

- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)setWindowController:(id)a0;
- (void)_startLiveResize;
- (void)performZoom:(id)a0;
- (void)zoom:(id)a0;
- (id)_sheetDimmingParentView;
- (unsigned long long)_resizableEdgesForGrowing:(unsigned long long *)a0 shrinking:(unsigned long long *)a1;
- (struct CGSize { double x0; double x1; })_sizeForProposedSize:(struct CGSize { double x0; double x1; })a0 resizeEdges:(unsigned long long)a1;
- (void)_rotateDeviceOrientationIfNeeded;
- (void)_setContentMinSizeFromScene;
- (void)UINS_usePortraitOrientation:(id)a0;
- (void)UINS_useLandscapeOrientation:(id)a0;
- (void)_updateOrientationToLandscape:(BOOL)a0;
- (BOOL)_rotateDeviceOrientationIfNeededPreferLandscape:(BOOL)a0;
- (void)_checkCanRotate:(BOOL *)a0 currentlyLandscape:(BOOL *)a1;
- (BOOL)_canEverRotate;

@end
