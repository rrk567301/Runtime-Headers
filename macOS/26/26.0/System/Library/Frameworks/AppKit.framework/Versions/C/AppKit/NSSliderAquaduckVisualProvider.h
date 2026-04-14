@class NSView;

@interface NSSliderAquaduckVisualProvider : NSObject <NSSliderVisualProvider> {
    void /* unknown type, empty encoding */ sliderCell;
    void /* unknown type, empty encoding */ _hostingView;
}

@property (nonatomic, weak) void /* function */ controlView;
@property (nonatomic, weak) void /* function */ tickMarkDelegate;
@property (nonatomic) struct { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; long long x4; double x5; double x6; BOOL x7; BOOL x8; BOOL x9; long long x10; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x11; double x12; BOOL x13; id x14; id x15; BOOL x16; long long x17; BOOL x18; double x19; double x20; double x21; double x22; BOOL x23; long long x24; BOOL x25; unsigned long long x26; BOOL x27; } state;
@property (nonatomic, readonly) NSView *designatedFocusRingView;
@property (nonatomic, readonly) int _vibrancyBlendMode;

+ (id)preferredAppearanceForDrawingState:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; long long x4; double x5; double x6; BOOL x7; BOOL x8; BOOL x9; long long x10; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x11; double x12; BOOL x13; id x14; id x15; BOOL x16; long long x17; BOOL x18; double x19; double x20; double x21; double x22; BOOL x23; long long x24; BOOL x25; unsigned long long x26; BOOL x27; })a0;
+ (id)visualProviderForSliderCell:(id)a0;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)init;
- (double)lastBaselineOffsetFromBottom;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barRectFlipped:(BOOL)a0;
- (void)_clearComponentSubviewsAndRemoveFromSuperView:(BOOL)a0;
- (void)_layoutComponentSubviewsIfNecessaryWithBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 knobRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)_updateComponentSubviewDrawingStateIfNecessary;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawBarInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (void)drawKnob:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTickMarks;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })knobAlignmentRectInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectFlipped:(BOOL)a0 value:(double)a1 knobValueRangeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobValueRangeRect:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outsetTrackRectForBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFlipped:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfMaxValueImageFlipped:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfMinValueImageFlipped:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTickMarkForValue:(double)a0 knobRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 valueRangeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
