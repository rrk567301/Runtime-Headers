@class NSSegmentedControlBezelConfiguration, NSArray;

@interface NSSegmentedControlAquaduckVisualProvider : NSObject <NSSegmentedControlVisualProvider> {
    void /* function */ segmentItemConfigurations;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ trackingPoint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_debugDrawFrames;
}

@property (nonatomic, weak) void /* function */ controlView;
@property (nonatomic, weak) void /* function */ segmentedCell;
@property (nonatomic, retain) NSSegmentedControlBezelConfiguration *bezelConfiguration;
@property (nonatomic, copy) NSArray *segmentItemConfigurations;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;

+ (BOOL)supportsBezelConfiguration:(id)a0;

- (double)baselineOffsetFromBottom;
- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 distribution:(long long)a1;
- (void)updateSegmentItemConfiguration:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsetsForControlView:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeWithOptions:(id)a0 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSegment:(long long)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)invalidateSegmentSizes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelRectForSegment:(long long)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })minimumCellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSegment:(long long)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 layoutIfNeeded:(BOOL)a2;
- (BOOL)resizeSegmentsForCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startedTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)stoppedTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1 mouseIsUp:(BOOL)a2;
- (void)updatedTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (int)vibrancyBlendMode;

@end
