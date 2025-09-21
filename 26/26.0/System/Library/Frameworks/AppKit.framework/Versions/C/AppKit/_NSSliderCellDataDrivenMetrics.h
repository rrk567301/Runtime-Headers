@class NSColor, NSString, NSAppearance;

@interface _NSSliderCellDataDrivenMetrics : NSObject <NSSliderCellMetricsStrategy>

@property BOOL usesModernStyle;
@property struct { unsigned long long sliderType; unsigned long long controlSize; BOOL isVertical; long long layoutDirection; long long tickMarkPosition; double normalizedValue; double normalizedNeutralValue; BOOL trackTintedWithValue; BOOL hasMinValueIcon; BOOL hasMaxValueIcon; long long controlState; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sliderCellFrame; double backingScaleFactor; BOOL isFlipped; NSAppearance *appearance; NSColor *trackFillColor; BOOL drawsBackground; long long numberOfTickMarks; BOOL animatesCollapse; double collapseAnimation_KnobClipProgress; double collapseAnimation_KnobOpacityProgress; double collapseAnimation_KnobCornerRadius; double collapseAnimation_TrackOpacityProgress; BOOL prefersInactiveBezelArt; long long semanticContext; BOOL hasCustomDrawKnob; unsigned long long subviewRenderingMode; BOOL hidesKnob; } state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tickmarkDrawingRectForTickMarkRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2 flipped:(BOOL)a3;
+ (void)_tickmarkMetrics:(id)a0 options:(id)a1 size:(struct CGSize { double x0; double x1; } *)a2 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a3;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)lastBaselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })_knobRenderSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barRectFlipped:(BOOL)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_barToTrackInsets:(BOOL)a0 outBarSize:(struct CGSize { double x0; double x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerAlignRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toKnobWithState:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; long long x4; double x5; double x6; BOOL x7; BOOL x8; BOOL x9; long long x10; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x11; double x12; BOOL x13; id x14; id x15; BOOL x16; long long x17; BOOL x18; double x19; double x20; double x21; double x22; BOOL x23; long long x24; BOOL x25; unsigned long long x26; BOOL x27; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })knobAlignmentRectInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectFlipped:(BOOL)a0 value:(double)a1 knobValueRangeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobValueRangeRect:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outsetTrackRectForBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFlipped:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfMaxValueImageFlipped:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfMinValueImageFlipped:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTickMarkForValue:(double)a0 knobRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 valueRangeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
