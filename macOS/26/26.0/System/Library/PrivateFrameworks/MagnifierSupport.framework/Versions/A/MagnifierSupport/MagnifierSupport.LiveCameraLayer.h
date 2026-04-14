@interface MagnifierSupport.LiveCameraLayer : CALayer {
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ documentController;
    void /* unknown type, empty encoding */ _panTransform;
    void /* unknown type, empty encoding */ _zoomTransform;
    void /* unknown type, empty encoding */ _fullVideoPreviewLayer;
    void /* unknown type, empty encoding */ _capturedImageLayer;
    void /* unknown type, empty encoding */ _affineTransformLayer;
    void /* unknown type, empty encoding */ _videoMaskLayer;
    void /* unknown type, empty encoding */ _perspectiveTransformLayer;
    void /* unknown type, empty encoding */ _layerToMask;
    void /* unknown type, empty encoding */ _baseLayer;
    void /* unknown type, empty encoding */ _filterLayer;
    void /* unknown type, empty encoding */ _pictureFrameLayer;
    void /* unknown type, empty encoding */ _dragHandleLayer;
    void /* unknown type, empty encoding */ _dragHandleSelectionLayer;
    void /* unknown type, empty encoding */ _dragHandleOutlineLayer;
    void /* unknown type, empty encoding */ _dragHandleSelectionPath;
    void /* unknown type, empty encoding */ _lastKnownIdealSize;
    void /* unknown type, empty encoding */ _idealPerspectiveTransformSize;
    void /* unknown type, empty encoding */ _lastPerspectiveTransformLayerFrame;
    void /* unknown type, empty encoding */ portalLayer;
    void /* unknown type, empty encoding */ usingPortalLayer;
    void /* unknown type, empty encoding */ subscribers;
    void /* unknown type, empty encoding */ currentDragHandle;
    void /* unknown type, empty encoding */ previewLayerScaleRatio;
    void /* unknown type, empty encoding */ currentlyDraggingHandleIndex;
    void /* unknown type, empty encoding */ currentlyDraggingHandleSelection;
    void /* unknown type, empty encoding */ currentlyDraggingHandleStartPosition;
    void /* unknown type, empty encoding */ currentlyDraggingTextSelectionStartPosition;
    void /* unknown type, empty encoding */ currentlyDraggingTextSelection;
    void /* unknown type, empty encoding */ _dragHandleLayers;
    void /* unknown type, empty encoding */ dragHandlePositions;
    void /* unknown type, empty encoding */ currentCapturedImage;
    void /* unknown type, empty encoding */ _videoPreviewLayer;
}

- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)resizeWithOldSuperlayerSize:(struct CGSize { double x0; double x1; })a0;
- (void)zoomToFitNotificationCallback;

@end
