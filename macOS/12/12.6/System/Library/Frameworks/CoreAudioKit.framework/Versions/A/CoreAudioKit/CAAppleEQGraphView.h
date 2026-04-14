@class NSGradient, NSMutableDictionary, NSBezierPath, NSTimer, NSObject, NSMutableArray;
@protocol CAAUViewParameterDataSource;

@interface CAAppleEQGraphView : CAAppleAUGraphView <CAAUViewToolTipHandling> {
    NSMutableArray *controlList;
    NSMutableDictionary *paramCache;
    int activePointIndex;
    struct CGPoint { double x; double y; } lastMousePoint;
    struct CGPoint { double x; double y; } lastControlPoint;
    struct CGPoint { double x; double y; } dragOffset;
    struct CGPoint { double x; double y; } slowDragOrigin;
    BOOL wasSlowDragging;
    NSObject<CAAUViewParameterDataSource> *dataSource;
    int currentPart;
    NSBezierPath *curvePath;
    NSGradient *curveGradient;
    unsigned short dragConstraint;
    NSTimer *toolTipTimer;
    BOOL hideTooltip;
}

@property BOOL plotActiveRangeOnly;
@property BOOL drawActivePointOnly;
@property BOOL hideTooltip;

- (void)dealloc;
- (void)cleanup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)setDataSource:(id)a0;
- (void)mouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (id)activeControl;
- (void)updateGraphFrame;
- (int)toolTipAnchorSide;
- (struct CGPoint { double x0; double x1; })toolTipPosition;
- (void)handleToolTipTextBeganEditing:(id)a0;
- (void)parameterValuesChanged:(id)a0 param1:(unsigned int)a1 value:(float)a2 param2:(unsigned int)a3 value:(float)a4;
- (void)parameterValueChanged:(id)a0 param:(unsigned int)a1 value:(float)a2;
- (void)handleToolTipTextEndedEditing:(id)a0;
- (long long)numControls;
- (id)controlAtIndex:(unsigned long long)a0;
- (void)drawEditPoints;
- (void)tooltipExpired:(id)a0;
- (struct CGPoint { double x0; double x1; })translateEventPoint:(id)a0;
- (id)controlForParam:(unsigned int)a0;
- (struct AudioUnitFrequencyResponseBin { double x0; double x1; } *)prepareDataForDrawing:(struct AudioUnitFrequencyResponseBin { double x0; double x1; } *)a0;
- (void)plotData:(struct AudioUnitFrequencyResponseBin { double x0; double x1; } *)a0;
- (void)disableGraphCurve;
- (id)addPointControlForX:(unsigned int)a0;
- (id)addPointControlForX:(unsigned int)a0 Y:(unsigned int)a1;
- (id)addRegionControlForX:(unsigned int)a0 width:(unsigned int)a1;
- (id)addRegionControlForX:(unsigned int)a0 Y:(unsigned int)a1 width:(unsigned int)a2;
- (id)addInitialBandControlForX:(unsigned int)a0 Y:(unsigned int)a1 filterType:(unsigned int)a2;
- (id)addFinalBandControlForX:(unsigned int)a0 Y:(unsigned int)a1 filterType:(unsigned int)a2;
- (void)changeControlToHorizontalPoint:(unsigned int)a0;
- (void)changeControlToRegionControl:(unsigned int)a0 y:(unsigned int)a1 width:(unsigned int)a2;
- (void)removeControlAtIndex:(unsigned long long)a0;
- (void)replaceControlAtIndex:(unsigned long long)a0 withControl:(id)a1;
- (void)setActiveControlAtIndex:(long long)a0;

@end
