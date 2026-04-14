@class UXView, CAShapeLayer, PXProgressArcLayer, CALayer, NSTimer, NSDate;

@interface PXRoundProgressView : UXView {
    struct CGPoint { double x; double y; } _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
}

@property (retain, nonatomic, setter=_setContentView:) UXView *_contentView;
@property (retain, nonatomic, setter=_setSliceLayer:) CAShapeLayer *_sliceLayer;
@property (retain, nonatomic, setter=_setCircleLayer:) CAShapeLayer *_circleLayer;
@property (retain, nonatomic, setter=_setProgressArcLayer:) PXProgressArcLayer *_progressArcLayer;
@property (retain, nonatomic, setter=_setIrisGlyphLayer:) CALayer *_irisGlyphLayer;
@property (nonatomic, setter=_setContentsScale:) double _contentsScale;
@property (nonatomic) long long style;
@property (nonatomic) float progress;

+ (struct CGSize { double x0; double x1; })sizeForSizeClass:(long long)a0;
+ (long long)_sizeClassForSize:(struct CGSize { double x0; double x1; })a0;
+ (double)toRadian:(double)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)_updateSubviews;
- (void)removeFromSuperview;
- (void)viewDidChangeBackingProperties;
- (void)layoutSubviews;
- (void)_resetProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)_updateContentsScale;
- (void)_updateSublayersContentsScale;
- (void)_setPieRadius:(double)a0;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void)increaseUIProgress:(id)a0;
- (void)_updateUIProgress;
- (void)_recalculateIncreaseProgress:(double)a0 withTimeDiff:(double)a1;

@end
