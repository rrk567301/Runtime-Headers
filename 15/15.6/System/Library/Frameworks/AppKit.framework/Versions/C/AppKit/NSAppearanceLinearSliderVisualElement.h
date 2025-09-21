@class NSColor, NSString, NSView, NSSliderKnob, NSSliderTrack, NSAppearance, NSSliderTickMarks;
@protocol NSSliderCellMetricsStrategy, NSSliderTickMarksDelegate;

@interface NSAppearanceLinearSliderVisualElement : NSObject <NSSliderVisualElement> {
    NSView *_controlView;
    id<NSSliderCellMetricsStrategy> _metricsStrategy;
    NSSliderTrack *_trackView;
    NSSliderTickMarks *_tickMarksView;
    NSSliderKnob *_knobView;
    struct { unsigned long long sliderType; unsigned long long controlSize; char isVertical; long long layoutDirection; long long tickMarkPosition; double normalizedValue; char trackTintedWithValue; char hasMinValueIcon; char hasMaxValueIcon; long long controlState; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sliderCellFrame; double backingScaleFactor; char isFlipped; NSAppearance *appearance; NSColor *trackFillColor; char drawsBackground; long long numberOfTickMarks; char animatesCollapse; double collapseAnimation_KnobClipProgress; double collapseAnimation_KnobOpacityProgress; double collapseAnimation_KnobCornerRadius; double collapseAnimation_TrackOpacityProgress; char prefersInactiveBezelArt; char usesModernStyle; long long semanticContext; } _state;
    id<NSSliderTickMarksDelegate> _tickMarkDelegate;
}

@property (readonly) NSSliderTrack *trackView;
@property (readonly) NSSliderTickMarks *tickMarksView;
@property (readonly) NSSliderKnob *knobView;
@property (readonly) id<NSSliderCellMetricsStrategy> metricsStrategy;
@property (weak) NSView *controlView;
@property (weak) id<NSSliderTickMarksDelegate> tickMarkDelegate;
@property struct { unsigned long long x0; unsigned long long x1; char x2; long long x3; long long x4; double x5; char x6; char x7; char x8; long long x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; double x11; char x12; id x13; id x14; char x15; long long x16; char x17; double x18; double x19; double x20; double x21; char x22; char x23; long long x24; } state;
@property (readonly) NSView *designatedFocusRingView;
@property (readonly) int _vibrancyBlendMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barRectFlipped:(char)a0;
- (void)_clearComponentSubviewsAndRemoveFromSuperView:(char)a0;
- (id)_currentCUISliderBarOptions:(char)a0;
- (id)_currentCUISliderKnobOptions:(char)a0;
- (id)_currentCUITickMarkOptionsForOnState:(char)a0 isFlipped:(char)a1;
- (void)_layoutComponentSubviewsIfNecessaryWithBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 knobRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (char)_needRedrawOnWindowChangedKeyState;
- (char)_requiresLegacyMetrics;
- (void)_updateComponentSubviewDrawingStateIfNecessary;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawBarInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(char)a1;
- (void)drawKnob:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTickMarks;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })knobAlignmentRectInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectFlipped:(char)a0 value:(double)a1 knobValueRangeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobValueRangeRect:(char)a0;
- (double)lastBaselineOffsetFromBottom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outsetTrackRectForBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFlipped:(char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfMaxValueImageFlipped:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfMinValueImageFlipped:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTickMarkForValue:(double)a0 knobRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 valueRangeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
