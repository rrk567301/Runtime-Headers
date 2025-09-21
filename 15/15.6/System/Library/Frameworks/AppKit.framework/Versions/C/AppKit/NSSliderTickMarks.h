@class NSColor, NSSliderKnob, NSAppearance;
@protocol NSSliderTickMarksDelegate;

@interface NSSliderTickMarks : NSView {
    struct { unsigned long long sliderType; unsigned long long controlSize; char isVertical; long long layoutDirection; long long tickMarkPosition; double normalizedValue; char trackTintedWithValue; char hasMinValueIcon; char hasMaxValueIcon; long long controlState; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sliderCellFrame; double backingScaleFactor; char isFlipped; NSAppearance *appearance; NSColor *trackFillColor; char drawsBackground; long long numberOfTickMarks; char animatesCollapse; double collapseAnimation_KnobClipProgress; double collapseAnimation_KnobOpacityProgress; double collapseAnimation_KnobCornerRadius; double collapseAnimation_TrackOpacityProgress; char prefersInactiveBezelArt; char usesModernStyle; long long semanticContext; } _drawingState;
    id<NSSliderTickMarksDelegate> _delegate;
    NSSliderKnob *_knobMaskView;
    char _maskOnly;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_tickMarkRectCache;
    unsigned long long _tickMarkRectCacheLen;
}

@property (weak) id<NSSliderTickMarksDelegate> delegate;
@property struct { unsigned long long x0; unsigned long long x1; char x2; long long x3; long long x4; double x5; char x6; char x7; char x8; long long x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; double x11; char x12; id x13; id x14; char x15; long long x16; char x17; double x18; double x19; double x20; double x21; char x22; char x23; long long x24; } drawingState;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } knobMaskFrame;
@property char maskOnly;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_rebuildTickMarkRectCache;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
