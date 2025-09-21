@interface QTHUDTimelineCell : QTHUDSliderCell {
    struct QTHUDTimelineCellInternal { id x0; id x1; } *_internal;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setObjectValue:(id)a0;
- (id)exposedBindings;
- (void)moveUp:(id)a0;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)setTimeRange:(struct { struct { long long x0; long long x1; long long x2; } x0; struct { long long x0; long long x1; long long x2; } x1; })a0;
- (struct { struct { long long x0; long long x1; long long x2; } x0; struct { long long x0; long long x1; long long x2; } x1; })timeRange;
- (struct { long long x0; long long x1; long long x2; })QTTimeValue;
- (id)_QTHUDSliderHighlightedRanges;
- (double)_QTHUDSliderValidateUserValue:(double)a0;
- (void)setQTTimeValue:(struct { long long x0; long long x1; long long x2; })a0;
- (id)highlightedTimeRanges;
- (struct CGPoint { double x0; double x1; })pointAtTime:(struct { long long x0; long long x1; long long x2; })a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)setHighlightedTimeRanges:(id)a0;
- (void)takeQTTimeValueFrom:(id)a0;
- (struct { long long x0; long long x1; long long x2; })timeAtPoint:(struct CGPoint { double x0; double x1; })a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;

@end
