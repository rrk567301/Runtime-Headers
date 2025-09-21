@class NSArray;

@interface TSCHChartDrawableLayoutLegendResizer : NSObject {
    int _anchoringStates[2];
    double _anchoringPosition[2];
}

@property (nonatomic) char p_shouldUpdateConfinedPushableAnchoring;
@property (copy, nonatomic) NSArray *p_legendConfinementBounds;

+ (id)legendResizerWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })innerAnchoringFrameFromChartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outerAnchoringFrameFromChartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)p_sideIntersectionLengthForChartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)p_sideIntersectionLengthForChartAreaRange:(struct TSCHLegendAnchorRange { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })snappedLegendFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forChartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void).cxx_destruct;
- (id)initWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a0;
- (int)p_anchoringStateForLegendFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 chartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dimension:(long long)a2 returningAnchoringPosition:(double *)a3;
- (char)p_hasConfinedLocationWithinConfinementBoundsForLocation:(double)a0 dimension:(long long)a1 returningConfinedLocation:(double *)a2;
- (void)p_initializeAnchoringStateForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a0;
- (char)p_isConfinedPushableAnchoring;
- (char)p_isInFrontOfLine:(struct TSCHLegendAnchorLine { struct CGPoint { double x0; double x1; } x0; double x1; })a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (char)p_isLegendAnchoredForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a0 dimension:(long long)a1 returningLegendLocation:(double *)a2;
- (struct TSCHLegendAnchorRange { double x0; double x1; })p_pushedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a0 dimension:(long long)a1 returningIsConfined:(char *)a2;
- (struct TSCHLegendAnchorRange { double x0; double x1; })p_resizedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a0 dimension:(long long)a1;
- (void)p_updateLegendConfinementBoundsForChartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 legendFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_updateLegendConfinementBoundsForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a0;
- (void)p_updateStateForIsIndirectResizing:(char)a0;
- (id)resizedLegendGeometry:(id)a0 forLastChartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 newChartAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 isIndirectResizing:(char)a3;

@end
