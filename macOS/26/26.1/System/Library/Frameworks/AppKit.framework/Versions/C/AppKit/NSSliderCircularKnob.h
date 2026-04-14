@class NSColor, NSAppearance;

@interface NSSliderCircularKnob : NSView {
    struct { unsigned long long sliderType; unsigned long long controlSize; BOOL isVertical; long long layoutDirection; long long tickMarkPosition; double normalizedValue; double normalizedNeutralValue; BOOL trackTintedWithValue; BOOL hasMinValueIcon; BOOL hasMaxValueIcon; long long controlState; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sliderCellFrame; double backingScaleFactor; BOOL isFlipped; NSAppearance *appearance; NSColor *trackFillColor; BOOL drawsBackground; long long numberOfTickMarks; BOOL animatesCollapse; double collapseAnimation_KnobClipProgress; double collapseAnimation_KnobOpacityProgress; double collapseAnimation_KnobCornerRadius; double collapseAnimation_TrackOpacityProgress; BOOL prefersInactiveBezelArt; long long semanticContext; BOOL hasCustomDrawKnob; unsigned long long subviewRenderingMode; BOOL hidesKnob; } _drawingState;
}

@property struct { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; long long x4; double x5; double x6; BOOL x7; BOOL x8; BOOL x9; long long x10; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x11; double x12; BOOL x13; id x14; id x15; BOOL x16; long long x17; BOOL x18; double x19; double x20; double x21; double x22; BOOL x23; long long x24; BOOL x25; unsigned long long x26; BOOL x27; } drawingState;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
