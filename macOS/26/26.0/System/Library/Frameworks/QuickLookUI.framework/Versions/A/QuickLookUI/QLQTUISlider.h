@class NSArray;

@interface QLQTUISlider : NSObject <QLQTUIWidgetProtocol>

@property BOOL drawThumb;
@property BOOL drawTrack;
@property BOOL pressed;
@property BOOL enabled;
@property BOOL focused;
@property (retain) NSArray *highlightedRanges;
@property double value;
@property BOOL vertical;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)trackDictionary;
- (id)thumbDictionary;
- (void)getMetricsForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outNominalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 outExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)performMeasurements:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parts:(id)a1 outMeasurementsToFlip:(id)a2;
- (void)renderInContext:(struct CGContext { } *)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
