@class NSImage, UXImageView;
@protocol PXSlowMotionEditorDelegate;

@interface PXSlowMotionEditor : UXView {
    UXImageView *_startHandleView;
    UXImageView *_endHandleView;
    UXImageView *_trackImageView;
    UXImageView *_trackSnapshotView;
    char _draggingStart;
    char _draggingEnd;
    double _touchOffset;
    char _zoomed;
    char _trackingZoom;
    struct CGPoint { double x; double y; } _touchLocationWhenTrackingZoomBegan;
    char _forceLayout;
    double _zoomMinValue;
    double _zoomMaxValue;
}

@property (class, readonly, nonatomic) NSImage *handleImage;

@property (weak, nonatomic) id<PXSlowMotionEditorDelegate> delegate;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } trackInsets;
@property (nonatomic) double trimHandleWidth;
@property (nonatomic) unsigned long long regionEditorStyle;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double startValue;
@property (nonatomic) double endValue;
@property (nonatomic) double zoomDelay;
@property (nonatomic, getter=isZoomAnimating, setter=setZoomAnimating:) char zoomAnimating;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } startHandleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } endHandleFrame;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (char)_isZoomed;
- (double)_trimHandleWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackFrame;
- (double)_trackScale;
- (void)handleChangeTrackingAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_beginTrackingZoomWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_cancelTrackingZoom;
- (void)_cancelZoom;
- (void)_cancelZoomTrackingIfNeccessaryWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawCurveWithFlatEndsFromX:(double)a0 fromY:(double)a1 toX:(double)a2 toY:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_handleFrameForValue:(double)a0 isStart:(char)a1;
- (id)_handleTintColor;
- (char)_isPoint:(struct CGPoint { double x0; double x1; })a0 inHandleIsStart:(char)a1 outTouchOffset:(double *)a2;
- (id)_tickColor;
- (id)_trackColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackFrameNoZoom;
- (id)_trackImageForZoom:(char)a0;
- (void)_updateSlidersWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateTrack;
- (double)_valueFromEndHandleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_valueFromHandleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isStart:(char)a1;
- (double)_valueFromStartHandleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_zoomMaxValue;
- (double)_zoomMinValue;
- (void)_zoomPressWasHeld;
- (void)handleBeginTrackingAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)handleEndTrackingAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setEndValue:(double)a0 notify:(char)a1;
- (void)setStartValue:(double)a0 notify:(char)a1;
- (void)setZoomMinValue:(double)a0 maxValue:(double)a1;

@end
