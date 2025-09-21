@class NSColor, NSString, NSAppearance;

@interface _NSSliderCellLegacyMetrics : NSObject <NSSliderCellMetricsStrategy>

@property struct { unsigned long long sliderType; unsigned long long controlSize; char isVertical; long long layoutDirection; long long tickMarkPosition; double normalizedValue; char trackTintedWithValue; char hasMinValueIcon; char hasMaxValueIcon; long long controlState; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sliderCellFrame; double backingScaleFactor; char isFlipped; NSAppearance *appearance; NSColor *trackFillColor; char drawsBackground; long long numberOfTickMarks; char animatesCollapse; double collapseAnimation_KnobClipProgress; double collapseAnimation_KnobOpacityProgress; double collapseAnimation_KnobCornerRadius; double collapseAnimation_TrackOpacityProgress; char prefersInactiveBezelArt; char usesModernStyle; long long semanticContext; } state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barRectFlipped:(char)a0;
- (double)_knobPointOverhang;
- (double)_knobTailOverhang;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_oldGetBarBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_orthogonalTickMarkInset;
- (double)_postBarLength;
- (double)_preBarLength;
- (double)_primaryTickMarkInset;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })knobAlignmentRectInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectFlipped:(char)a0 value:(double)a1 knobValueRangeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobValueRangeRect:(char)a0;
- (double)lastBaselineOffsetFromBottom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outsetTrackRectForBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFlipped:(char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfMaxValueImageFlipped:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfMinValueImageFlipped:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTickMarkForValue:(double)a0 knobRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 valueRangeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
