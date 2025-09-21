@class UINSFullScreenWindowZoomController;

@interface UINSFullScreenWindow : UINSWindow {
    struct CGSize { double width; double height; } _initialResizeSize;
    UINSFullScreenWindowZoomController *_fullScreenWindowZoomController;
}

- (void).cxx_destruct;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (unsigned long long)_resizableEdgesForGrowing:(unsigned long long *)a0 shrinking:(unsigned long long *)a1;
- (id)_sheetDimmingParentView;
- (struct CGSize { double x0; double x1; })_sizeForProposedSize:(struct CGSize { double x0; double x1; })a0 resizeEdges:(unsigned long long)a1;
- (void)_startLiveResize;
- (void)_zoomFill:(id)a0;
- (void)performZoom:(id)a0;
- (void)setWindowController:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (void)zoom:(id)a0;
- (void)UINS_useLandscapeOrientation:(id)a0;
- (void)UINS_usePortraitOrientation:(id)a0;
- (char)_canEverRotate;
- (void)_checkCanRotate:(char *)a0 currentlyLandscape:(char *)a1;
- (void)_rotateDeviceOrientationIfNeeded;
- (char)_rotateDeviceOrientationIfNeededPreferLandscape:(char)a0;
- (void)_setContentMinSizeFromScene;
- (void)_updateOrientationToLandscape:(char)a0;

@end
