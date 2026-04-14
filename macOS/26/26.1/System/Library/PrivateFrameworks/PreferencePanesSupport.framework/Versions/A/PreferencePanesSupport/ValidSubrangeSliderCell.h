@class NSColor;

@interface ValidSubrangeSliderCell : NSSliderCell {
    NSColor *_validRangeBarColor;
}

@property double minValidValue;
@property double maxValidValue;

- (void).cxx_destruct;
- (id)init;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validSubrangeRect;

@end
